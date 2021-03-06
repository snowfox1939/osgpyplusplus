#!/bin/env python

# Module to help convert OpenSceneGraph C++ examples to python

import clang.cindex
from clang.cindex import CursorKind, TokenKind

INDENT_SIZE = 4

# Conversion from C++ to python
punctuation_translator = {
    '->': '.',
    '::': '.',
    '{': '',
    '}': '',
    ',': ', ',
    '&': '',
    ';': '',
    '=': ' = ',
}

keyword_translator = {
    'catch': 'except',
    'double': 'float',
    'false': 'False',
    'long': 'int',
    'nullptr': 'None',
    'short': 'int',
    'this': 'self',
    'throw': 'raise',
    'true': 'True',
}

# Conversion from C++ to python
method_translator = {
    'operator()': '__call__',
}

def py_type(cursor):
    "Convert C++ type reference to python type name"
    t = ""
    # Limit token parsing to tokens that fall within the specified cursor bounds
    end_pos = [cursor.extent.end.line, cursor.extent.end.column]
    for token in cursor.get_tokens():
        if token.location.line > end_pos[0]:
            break
        if token.location.line == end_pos[0] and token.location.column > end_pos[1]:
            break
        if token.kind == TokenKind.KEYWORD:
            continue # no keywords, like "public"
        elif token.kind == TokenKind.IDENTIFIER:
            t += token.spelling
        elif token.spelling in punctuation_translator and token.kind == TokenKind.PUNCTUATION:
            t += punctuation_translator[token.spelling]
        else:
            t += token.spelling # TODO??
            t += "#"
            t += str(token.kind)
            # print token.kind, token.spelling # TODO
    yield t


def all_nodes(cursor):
    for child in cursor.get_children():
        yield child

def all_tokens(cursor):
    result = ""
    s = cursor.extent.start
    e = cursor.extent.end
    for t in cursor.get_tokens():
        if t.location.line < s.line:
            continue
        if t.location.line > e.line:
            continue
        if t.location.line == s.line and t.location.column < s.column:
            continue
        if t.location.line == e.line and t.location.column > e.column:
            continue
        result += t.spelling
    return [result,]

def arg_nonmatching(cursor):
    match = None
    for match in matching_child(cursor):
        break
    args = []
    for c in cursor.get_children():
        if match is not None and  c == match:
            continue
        args.append(c)
    return [", ".join([string_for_cursor(c) for c in args]),]

def args(cursor):
    a = []
    if (cursor.kind == CursorKind.CONSTRUCTOR or (cursor.kind == 
                    CursorKind.CXX_METHOD and not cursor.is_static_method())):
        a.append("self")
    for child in cursor.get_children():
        if not child.kind == CursorKind.PARM_DECL:
            continue
        a.append(child.spelling)
    return "(" + ", ".join(a) + ")"

def bases(class_cursor):
    bases = []
    for c in class_cursor.get_children():
        if c.kind == CursorKind.CXX_BASE_SPECIFIER:
            bases.append(c)
    arg_list = []
    for b in bases:
        base_name = ""
        for child in all_nodes(b):
            base_name += string_for_cursor(child)
        arg_list.append(base_name)
    args = ", ".join(arg_list)
    if len(bases) < 1:
        args = "object"
    yield "(" + args + ")"


def call_expression(cursor):
    prefix = list(matching_child(cursor))
    p = ""
    if len(prefix) > 0 and str(prefix[0]) != "":
        p = prefix[0].spelling
    if p == "operator->":
        yield "self"
        for c in arg_nonmatching(cursor):
            yield c
    elif p == "operator!":
        yield "not "
        for c in arg_nonmatching(cursor):
            yield c
    else:
        for c in prefix:
            yield c
        yield "("
        for c in arg_nonmatching(cursor):
            yield c
        yield ")"

def compound_statement(cursor):
    for child in cursor.get_children():
        yield indent(cursor)
        yield child
        yield "\n"
    
def ctor_init(cursor):
    "parse out initializers, if any, from constructor"
    # Don't look after first child item
    first_pos = [cursor.extent.start.line, cursor.extent.start.column]
    last_pos = [cursor.extent.end.line, cursor.extent.end.column]
    parsed_members = list()
    for c in cursor.get_children():
        if c.kind == CursorKind.PARM_DECL: # go past constructor arguments
            first_pos = [c.extent.end.line, c.extent.end.column+1]
            continue
        if c.kind == CursorKind.MEMBER_REF: # but take note of member initializers
            parsed_members.append(c)
            continue
        if c.kind == CursorKind.CALL_EXPR: # and the second part of the initializer
            continue
        # First generic child found, probably COMPOUND_STMT. Stop searching before this point
        last_pos = [c.location.line, c.location.column - 1]
        break
    found_colon = False
    paren_level = 0
    initializers = []
    for t in cursor.get_tokens():
        if t.location.line < first_pos[0]:
            continue
        if t.location.line > last_pos[0]:
            break
        if t.location.line == first_pos[0] and t.location.column < first_pos[1]:
            continue
        if t.location.line == last_pos[0] and t.location.column > last_pos[1]:
            break
        if not found_colon and t.kind == TokenKind.PUNCTUATION and t.spelling == ":":
            found_colon = True
            initializers.append([])
            continue
        if not found_colon:
            continue
        # inside parentheses, anything can happen, without advancing to the next initializer
        if t.kind == TokenKind.PUNCTUATION and t.spelling == "(":
            paren_level += 1
        if t.kind == TokenKind.PUNCTUATION and t.spelling == ")":
            paren_level -= 1
        # Commas signal separate initializers
        if paren_level == 0 and t.kind == TokenKind.PUNCTUATION and t.spelling == ",":
            initializers.append([])
            continue
        # If we get this far, the current token belongs in the current intializier
        initializers[-1].append(t)
    result = ""
    # Emit one initializer per line
    for i in initializers:
        if len(i) < 1:
            continue
        result += indent(cursor)
        # Separate stuff before parentheses from after parentheses
        if i[-1].spelling != ")":
            print i[-1].kind, i[-1].spelling
            raise Exception("Hey!, I expected a parenthesis there!")
        # find first parenthesis
        pre_paren = []
        in_paren = []
        found_paren = False
        for tok in i[:-1]:
            if not found_paren and tok.spelling == "(":
                found_paren = True
                continue
            if found_paren:
                in_paren.append(tok)
            else:
                pre_paren.append(tok)
        field = translate_tokens(pre_paren)
        value = translate_tokens(in_paren)
        # Is it a field or a base initializer?
        if (field in [c.spelling for c in parsed_members]):
            # Field initializer
            result += "self."+field+" = "+value
        else:
            # Assume base class initializer
            result += field+".__init__(self, "+value+")"
        result += "\n"
    return result

def ctor_nodes(cursor):
    "Avoid child nodes that cause trouble for constructor"
    for child in cursor.get_children():
        if child.kind == CursorKind.MEMBER_REF:
            continue
        if child.kind == CursorKind.CALL_EXPR:
            continue
        yield child

def debug(cursor):
    yield str(cursor.kind)

def dec_indent(cursor):
    global indent_level
    indent_level -= INDENT_SIZE
    return []

def displayname(cursor):
    yield cursor.displayname
    
main_file = None
indent_level = 0
def filter_by_file(cursor):
    for child in cursor.get_children():
        if str(child.location.file) != main_file:
            continue
        yield child

def first_token(cursor):
    token = cursor.get_tokens().next()
    yield translate_token(token)

def first_node(cursor):
    for child in cursor.get_children():
        yield child
        break
    
def inc_indent(cursor):
    global indent_level
    indent_level += INDENT_SIZE
    return []
        
def indent(cursor):
    return " "*indent_level

def kind(cursor):
    return str(cursor.kind)


def matching_child(cursor):
    for c in cursor.get_children():
        if c.spelling == cursor.spelling:
            yield c
    
    
def nodes_and_tokens(cursor):
    children = cursor.get_children()
    tokens = cursor.get_tokens()
    try:
        t = tokens.next()
    except StopIteration:
        t = None
    for c in children:
        # Emit tokens preceding child
        l1 = c.extent.start.line
        c1 = c.extent.start.column
        while token_precedes(t, l1, c1):
            yield string_for_token(t)
            try:
                t = tokens.next()        
            except StopIteration:
                t = None
        yield c
        # Discard tokens inside child
        l1 = c.extent.end.line
        c1 = c.extent.end.column + 1
        while token_precedes(t, l1, c1):
            try:
                t = tokens.next()        
            except StopIteration:
                t = None
        l0 = l1
        c0 = c1
    l1 = cursor.extent.end.line
    c1 = cursor.extent.end.column + 1
    while token_precedes(t, l1, c1):
        yield string_for_token(t)
        try:
            t = tokens.next()        
        except StopIteration:
            t = None

def non_first_nodes(cursor):
    saw_first = False
    for child in cursor.get_children():
        if not saw_first:
            saw_first = True
            continue
        yield child
    

def show_whole_structure(cursor, my_indent=indent_level):
    result = " "*my_indent + "%s:%s:%s\n" % (cursor.kind, cursor.spelling, cursor.displayname)
    for child in cursor.get_children():
        result += show_whole_structure(child, my_indent + 4)
    return result

    
def spelling(cursor):
    return cursor.spelling    


def string_for_token(token):
    # return "%s'%s'" % (token.kind, token.spelling)
    return translate_token(token)
    
    
def token_precedes(token, line1, col1):
    if token is None:
        return False
    if token.location.line < line1:
        return True
    elif token.location.line == line1 and token.location.column < col1:
        return True
    else:
        return False


def translate_method(cursor):
    if cursor.spelling in method_translator:
        return method_translator[cursor.spelling]
    return cursor.spelling

 
def translate_token(token):
    if token.kind == TokenKind.PUNCTUATION:
        if token.spelling in punctuation_translator:
            return punctuation_translator[token.spelling]
    if token.kind == TokenKind.KEYWORD:
        if token.spelling in keyword_translator:
            return keyword_translator[token.spelling]
    return token.spelling

def translate_tokens(tokens):
    result = ""
    for t in tokens:
        result += translate_token(t)
    return result

default_sequence = [indent, "**", kind, ":", spelling, ":", displayname, "\n", inc_indent, all_nodes, dec_indent]
# 
cursor_sequence = {
    CursorKind.CALL_EXPR: [call_expression],
    CursorKind.CLASS_DECL: ["\n", indent, "class ", spelling, bases, ":\n", inc_indent, all_nodes, dec_indent, "\n"],
    CursorKind.COMPOUND_STMT: [compound_statement], 
    CursorKind.CONSTRUCTOR: [indent, "def __init__", args, ":\n", inc_indent, ctor_init, ctor_nodes, dec_indent, "\n"],
    CursorKind.CXX_ACCESS_SPEC_DECL: [all_nodes], # Don't care about "public:" in python...
    CursorKind.CXX_BASE_SPECIFIER: [], # Handled in CLASS_DECL
    CursorKind.CXX_METHOD: [indent, "def ", translate_method, args, ":\n", inc_indent, all_nodes, dec_indent, "\n"],
    CursorKind.CXX_NEW_EXPR: [spelling],
    CursorKind.DECL_REF_EXPR: [spelling, all_nodes], # TODO not sure about the all_nodes...
    CursorKind.DECL_STMT: [nodes_and_tokens],
    CursorKind.FIELD_DECL: [],
    CursorKind.FUNCTION_DECL: [indent, "def ", spelling, args, ":\n", inc_indent, all_nodes, dec_indent, "\n"],
    CursorKind.IF_STMT: ["if ", first_node, ":\n", inc_indent, indent, non_first_nodes, dec_indent],
    CursorKind.INTEGER_LITERAL: [first_token],
    CursorKind.MEMBER_REF_EXPR: [all_nodes, ".", spelling],
    # CursorKind.MEMBER_REF: [".", spelling],
    CursorKind.NAMESPACE_REF: [spelling, ".", all_nodes],
    CursorKind.PARM_DECL: [],
    CursorKind.RETURN_STMT: ["return ", all_nodes],
    CursorKind.TEMPLATE_REF: [spelling, "<", all_nodes, ">"],
    CursorKind.TRANSLATION_UNIT: [filter_by_file],
    CursorKind.TYPE_REF: [py_type, all_nodes],
    CursorKind.UNARY_OPERATOR: [first_token, all_nodes],
    CursorKind.UNEXPOSED_EXPR: [all_nodes],
    CursorKind.VAR_DECL: [spelling, " = ", all_nodes],
}

def string_for_cursor(cursor):
    if isinstance(cursor, basestring):
        return cursor # It's already a string
    try:
        rules = cursor_sequence[cursor.kind]
    except KeyError: # ...undocumented cursor type...?
        rules = default_sequence
    result = ""
    for r in rules:
        if isinstance(r, basestring):
            result += r
        else:
            for child in r(cursor):
                result += string_for_cursor(child)
    return result
    

def main():
    examples_src = "C:/Users/cmbruns/git/osg/examples"
    osg_includes = "C:/Users/cmbruns/git/osg/include"
    src_file = examples_src + "/osggraphicscost/osggraphicscost.cpp"
    index = clang.cindex.Index.create()
    translation_unit = index.parse(src_file, args=["-I%s"%osg_includes, '-x', 'c++', '-D__CODE_GENERATOR__'])
    global main_file
    main_file = str(translation_unit.spelling)
    print string_for_cursor(translation_unit.cursor)


if __name__ == "__main__":
    main()
