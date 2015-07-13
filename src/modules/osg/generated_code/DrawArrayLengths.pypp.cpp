// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "drawarraylengths.pypp.hpp"

namespace bp = boost::python;

struct DrawArrayLengths_wrapper : osg::DrawArrayLengths, bp::wrapper< osg::DrawArrayLengths > {

    DrawArrayLengths_wrapper(::GLenum mode=0 )
    : osg::DrawArrayLengths( mode )
      , bp::wrapper< osg::DrawArrayLengths >(){
        // constructor
    
    }

    DrawArrayLengths_wrapper(::GLenum mode, ::GLint first, unsigned int no, ::GLsizei * ptr )
    : osg::DrawArrayLengths( mode, first, no, ptr )
      , bp::wrapper< osg::DrawArrayLengths >(){
        // constructor
    
    }

    DrawArrayLengths_wrapper(::GLenum mode, ::GLint first, unsigned int no )
    : osg::DrawArrayLengths( mode, first, no )
      , bp::wrapper< osg::DrawArrayLengths >(){
        // constructor
    
    }

    DrawArrayLengths_wrapper(::GLenum mode, ::GLint first )
    : osg::DrawArrayLengths( mode, first )
      , bp::wrapper< osg::DrawArrayLengths >(){
        // constructor
    
    }

    virtual void accept( ::osg::PrimitiveFunctor & functor ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(functor) );
        else{
            this->osg::DrawArrayLengths::accept( boost::ref(functor) );
        }
    }
    
    void default_accept( ::osg::PrimitiveFunctor & functor ) const  {
        osg::DrawArrayLengths::accept( boost::ref(functor) );
    }

    virtual void accept( ::osg::PrimitiveIndexFunctor & functor ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(functor) );
        else{
            this->osg::DrawArrayLengths::accept( boost::ref(functor) );
        }
    }
    
    void default_accept( ::osg::PrimitiveIndexFunctor & functor ) const  {
        osg::DrawArrayLengths::accept( boost::ref(functor) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::DrawArrayLengths::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::DrawArrayLengths::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::DrawArrayLengths::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::DrawArrayLengths::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::DrawArrayLengths::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::DrawArrayLengths::cloneType( );
    }

    virtual void draw( ::osg::State & state, bool useVertexBufferObjects ) const  {
        if( bp::override func_draw = this->get_override( "draw" ) )
            func_draw( boost::ref(state), useVertexBufferObjects );
        else{
            this->osg::DrawArrayLengths::draw( boost::ref(state), useVertexBufferObjects );
        }
    }
    
    void default_draw( ::osg::State & state, bool useVertexBufferObjects ) const  {
        osg::DrawArrayLengths::draw( boost::ref(state), useVertexBufferObjects );
    }

    virtual unsigned int getNumIndices(  ) const  {
        if( bp::override func_getNumIndices = this->get_override( "getNumIndices" ) )
            return func_getNumIndices(  );
        else{
            return this->osg::DrawArrayLengths::getNumIndices(  );
        }
    }
    
    unsigned int default_getNumIndices(  ) const  {
        return osg::DrawArrayLengths::getNumIndices( );
    }

    virtual unsigned int getNumPrimitives(  ) const  {
        if( bp::override func_getNumPrimitives = this->get_override( "getNumPrimitives" ) )
            return func_getNumPrimitives(  );
        else{
            return this->osg::DrawArrayLengths::getNumPrimitives(  );
        }
    }
    
    unsigned int default_getNumPrimitives(  ) const  {
        return osg::DrawArrayLengths::getNumPrimitives( );
    }

    virtual unsigned int index( unsigned int pos ) const  {
        if( bp::override func_index = this->get_override( "index" ) )
            return func_index( pos );
        else{
            return this->osg::DrawArrayLengths::index( pos );
        }
    }
    
    unsigned int default_index( unsigned int pos ) const  {
        return osg::DrawArrayLengths::index( pos );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::DrawArrayLengths::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::DrawArrayLengths::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::DrawArrayLengths::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::DrawArrayLengths::libraryName( );
    }

    virtual void offsetIndices( int offset ) {
        if( bp::override func_offsetIndices = this->get_override( "offsetIndices" ) )
            func_offsetIndices( offset );
        else{
            this->osg::DrawArrayLengths::offsetIndices( offset );
        }
    }
    
    void default_offsetIndices( int offset ) {
        osg::DrawArrayLengths::offsetIndices( offset );
    }

    virtual ::osg::Array * asArray(  ) {
        if( bp::override func_asArray = this->get_override( "asArray" ) )
            return func_asArray(  );
        else{
            return this->osg::BufferData::asArray(  );
        }
    }
    
    ::osg::Array * default_asArray(  ) {
        return osg::BufferData::asArray( );
    }

    virtual ::osg::Array const * asArray(  ) const  {
        if( bp::override func_asArray = this->get_override( "asArray" ) )
            return func_asArray(  );
        else{
            return this->osg::BufferData::asArray(  );
        }
    }
    
    ::osg::Array const * default_asArray(  ) const  {
        return osg::BufferData::asArray( );
    }

    virtual ::osg::PrimitiveSet * asPrimitiveSet(  ) {
        if( bp::override func_asPrimitiveSet = this->get_override( "asPrimitiveSet" ) )
            return func_asPrimitiveSet(  );
        else{
            return this->osg::PrimitiveSet::asPrimitiveSet(  );
        }
    }
    
    ::osg::PrimitiveSet * default_asPrimitiveSet(  ) {
        return osg::PrimitiveSet::asPrimitiveSet( );
    }

    virtual ::osg::PrimitiveSet const * asPrimitiveSet(  ) const  {
        if( bp::override func_asPrimitiveSet = this->get_override( "asPrimitiveSet" ) )
            return func_asPrimitiveSet(  );
        else{
            return this->osg::PrimitiveSet::asPrimitiveSet(  );
        }
    }
    
    ::osg::PrimitiveSet const * default_asPrimitiveSet(  ) const  {
        return osg::PrimitiveSet::asPrimitiveSet( );
    }

    virtual void computeDataVariance(  ) {
        if( bp::override func_computeDataVariance = this->get_override( "computeDataVariance" ) )
            func_computeDataVariance(  );
        else{
            this->osg::Object::computeDataVariance(  );
        }
    }
    
    void default_computeDataVariance(  ) {
        osg::Object::computeDataVariance( );
    }

    virtual void computeRange(  ) const  {
        if( bp::override func_computeRange = this->get_override( "computeRange" ) )
            func_computeRange(  );
        else{
            this->osg::PrimitiveSet::computeRange(  );
        }
    }
    
    void default_computeRange(  ) const  {
        osg::PrimitiveSet::computeRange( );
    }

    virtual ::GLvoid const * getDataPointer(  ) const  {
        if( bp::override func_getDataPointer = this->get_override( "getDataPointer" ) )
            return func_getDataPointer(  );
        else{
            return this->osg::PrimitiveSet::getDataPointer(  );
        }
    }
    
    ::GLvoid const * default_getDataPointer(  ) const  {
        return osg::PrimitiveSet::getDataPointer( );
    }

    virtual ::osg::DrawElements * getDrawElements(  ) {
        if( bp::override func_getDrawElements = this->get_override( "getDrawElements" ) )
            return func_getDrawElements(  );
        else{
            return this->osg::PrimitiveSet::getDrawElements(  );
        }
    }
    
    ::osg::DrawElements * default_getDrawElements(  ) {
        return osg::PrimitiveSet::getDrawElements( );
    }

    virtual ::osg::DrawElements const * getDrawElements(  ) const  {
        if( bp::override func_getDrawElements = this->get_override( "getDrawElements" ) )
            return func_getDrawElements(  );
        else{
            return this->osg::PrimitiveSet::getDrawElements(  );
        }
    }
    
    ::osg::DrawElements const * default_getDrawElements(  ) const  {
        return osg::PrimitiveSet::getDrawElements( );
    }

    virtual unsigned int getTotalDataSize(  ) const  {
        if( bp::override func_getTotalDataSize = this->get_override( "getTotalDataSize" ) )
            return func_getTotalDataSize(  );
        else{
            return this->osg::PrimitiveSet::getTotalDataSize(  );
        }
    }
    
    unsigned int default_getTotalDataSize(  ) const  {
        return osg::PrimitiveSet::getTotalDataSize( );
    }

    virtual ::osg::Referenced * getUserData(  ) {
        if( bp::override func_getUserData = this->get_override( "getUserData" ) )
            return func_getUserData(  );
        else{
            return this->osg::Object::getUserData(  );
        }
    }
    
    ::osg::Referenced * default_getUserData(  ) {
        return osg::Object::getUserData( );
    }

    virtual ::osg::Referenced const * getUserData(  ) const  {
        if( bp::override func_getUserData = this->get_override( "getUserData" ) )
            return func_getUserData(  );
        else{
            return this->osg::Object::getUserData(  );
        }
    }
    
    ::osg::Referenced const * default_getUserData(  ) const  {
        return osg::Object::getUserData( );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::BufferData::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::BufferData::resizeGLObjectBuffers( maxSize );
    }

    virtual void setName( ::std::string const & name ) {
        if( bp::override func_setName = this->get_override( "setName" ) )
            func_setName( name );
        else{
            this->osg::Object::setName( name );
        }
    }
    
    void default_setName( ::std::string const & name ) {
        osg::Object::setName( name );
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Object::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Object::setThreadSafeRefUnref( threadSafe );
    }

    virtual void setUserData( ::osg::Referenced * obj ) {
        if( bp::override func_setUserData = this->get_override( "setUserData" ) )
            func_setUserData( boost::python::ptr(obj) );
        else{
            this->osg::Object::setUserData( boost::python::ptr(obj) );
        }
    }
    
    void default_setUserData( ::osg::Referenced * obj ) {
        osg::Object::setUserData( boost::python::ptr(obj) );
    }

    virtual bool supportsBufferObject(  ) const  {
        if( bp::override func_supportsBufferObject = this->get_override( "supportsBufferObject" ) )
            return func_supportsBufferObject(  );
        else{
            return this->osg::PrimitiveSet::supportsBufferObject(  );
        }
    }
    
    bool default_supportsBufferObject(  ) const  {
        return osg::PrimitiveSet::supportsBufferObject( );
    }

};

void register_DrawArrayLengths_class(){

    { //::osg::DrawArrayLengths
        typedef bp::class_< DrawArrayLengths_wrapper, bp::bases< osg::PrimitiveSet >, osg::ref_ptr< ::osg::DrawArrayLengths >, boost::noncopyable > DrawArrayLengths_exposer_t;
        DrawArrayLengths_exposer_t DrawArrayLengths_exposer = DrawArrayLengths_exposer_t( "DrawArrayLengths", bp::no_init );
        bp::scope DrawArrayLengths_scope( DrawArrayLengths_exposer );
        DrawArrayLengths_exposer.def( bp::init< bp::optional< GLenum > >(( bp::arg("mode")=(::GLenum)(0) )) );
        bp::implicitly_convertible< GLenum, osg::DrawArrayLengths >();
        DrawArrayLengths_exposer.def( bp::init< GLenum, GLint, unsigned int, GLsizei * >(( bp::arg("mode"), bp::arg("first"), bp::arg("no"), bp::arg("ptr") )) );
        DrawArrayLengths_exposer.def( bp::init< GLenum, GLint, unsigned int >(( bp::arg("mode"), bp::arg("first"), bp::arg("no") )) );
        DrawArrayLengths_exposer.def( bp::init< GLenum, GLint >(( bp::arg("mode"), bp::arg("first") )) );
        { //::osg::DrawArrayLengths::accept
        
            typedef void ( ::osg::DrawArrayLengths::*accept_function_type)( ::osg::PrimitiveFunctor & ) const;
            typedef void ( DrawArrayLengths_wrapper::*default_accept_function_type)( ::osg::PrimitiveFunctor & ) const;
            
            DrawArrayLengths_exposer.def( 
                "accept"
                , accept_function_type(&::osg::DrawArrayLengths::accept)
                , default_accept_function_type(&DrawArrayLengths_wrapper::default_accept)
                , ( bp::arg("functor") ) );
        
        }
        { //::osg::DrawArrayLengths::accept
        
            typedef void ( ::osg::DrawArrayLengths::*accept_function_type)( ::osg::PrimitiveIndexFunctor & ) const;
            typedef void ( DrawArrayLengths_wrapper::*default_accept_function_type)( ::osg::PrimitiveIndexFunctor & ) const;
            
            DrawArrayLengths_exposer.def( 
                "accept"
                , accept_function_type(&::osg::DrawArrayLengths::accept)
                , default_accept_function_type(&DrawArrayLengths_wrapper::default_accept)
                , ( bp::arg("functor") ) );
        
        }
        { //::osg::DrawArrayLengths::className
        
            typedef char const * ( ::osg::DrawArrayLengths::*className_function_type)(  ) const;
            typedef char const * ( DrawArrayLengths_wrapper::*default_className_function_type)(  ) const;
            
            DrawArrayLengths_exposer.def( 
                "className"
                , className_function_type(&::osg::DrawArrayLengths::className)
                , default_className_function_type(&DrawArrayLengths_wrapper::default_className) );
        
        }
        { //::osg::DrawArrayLengths::clone
        
            typedef ::osg::Object * ( ::osg::DrawArrayLengths::*clone_function_type)( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( DrawArrayLengths_wrapper::*default_clone_function_type)( ::osg::CopyOp const & ) const;
            
            DrawArrayLengths_exposer.def( 
                "clone"
                , clone_function_type(&::osg::DrawArrayLengths::clone)
                , default_clone_function_type(&DrawArrayLengths_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::DrawArrayLengths::cloneType
        
            typedef ::osg::Object * ( ::osg::DrawArrayLengths::*cloneType_function_type)(  ) const;
            typedef ::osg::Object * ( DrawArrayLengths_wrapper::*default_cloneType_function_type)(  ) const;
            
            DrawArrayLengths_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::DrawArrayLengths::cloneType)
                , default_cloneType_function_type(&DrawArrayLengths_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::DrawArrayLengths::draw
        
            typedef void ( ::osg::DrawArrayLengths::*draw_function_type)( ::osg::State &,bool ) const;
            typedef void ( DrawArrayLengths_wrapper::*default_draw_function_type)( ::osg::State &,bool ) const;
            
            DrawArrayLengths_exposer.def( 
                "draw"
                , draw_function_type(&::osg::DrawArrayLengths::draw)
                , default_draw_function_type(&DrawArrayLengths_wrapper::default_draw)
                , ( bp::arg("state"), bp::arg("useVertexBufferObjects") ) );
        
        }
        { //::osg::DrawArrayLengths::getFirst
        
            typedef ::GLint ( ::osg::DrawArrayLengths::*getFirst_function_type)(  ) const;
            
            DrawArrayLengths_exposer.def( 
                "getFirst"
                , getFirst_function_type( &::osg::DrawArrayLengths::getFirst ) );
        
        }
        { //::osg::DrawArrayLengths::getNumIndices
        
            typedef unsigned int ( ::osg::DrawArrayLengths::*getNumIndices_function_type)(  ) const;
            typedef unsigned int ( DrawArrayLengths_wrapper::*default_getNumIndices_function_type)(  ) const;
            
            DrawArrayLengths_exposer.def( 
                "getNumIndices"
                , getNumIndices_function_type(&::osg::DrawArrayLengths::getNumIndices)
                , default_getNumIndices_function_type(&DrawArrayLengths_wrapper::default_getNumIndices) );
        
        }
        { //::osg::DrawArrayLengths::getNumPrimitives
        
            typedef unsigned int ( ::osg::DrawArrayLengths::*getNumPrimitives_function_type)(  ) const;
            typedef unsigned int ( DrawArrayLengths_wrapper::*default_getNumPrimitives_function_type)(  ) const;
            
            DrawArrayLengths_exposer.def( 
                "getNumPrimitives"
                , getNumPrimitives_function_type(&::osg::DrawArrayLengths::getNumPrimitives)
                , default_getNumPrimitives_function_type(&DrawArrayLengths_wrapper::default_getNumPrimitives) );
        
        }
        { //::osg::DrawArrayLengths::index
        
            typedef unsigned int ( ::osg::DrawArrayLengths::*index_function_type)( unsigned int ) const;
            typedef unsigned int ( DrawArrayLengths_wrapper::*default_index_function_type)( unsigned int ) const;
            
            DrawArrayLengths_exposer.def( 
                "index"
                , index_function_type(&::osg::DrawArrayLengths::index)
                , default_index_function_type(&DrawArrayLengths_wrapper::default_index)
                , ( bp::arg("pos") ) );
        
        }
        { //::osg::DrawArrayLengths::isSameKindAs
        
            typedef bool ( ::osg::DrawArrayLengths::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( DrawArrayLengths_wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            DrawArrayLengths_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::DrawArrayLengths::isSameKindAs)
                , default_isSameKindAs_function_type(&DrawArrayLengths_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::DrawArrayLengths::libraryName
        
            typedef char const * ( ::osg::DrawArrayLengths::*libraryName_function_type)(  ) const;
            typedef char const * ( DrawArrayLengths_wrapper::*default_libraryName_function_type)(  ) const;
            
            DrawArrayLengths_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::DrawArrayLengths::libraryName)
                , default_libraryName_function_type(&DrawArrayLengths_wrapper::default_libraryName) );
        
        }
        { //::osg::DrawArrayLengths::offsetIndices
        
            typedef void ( ::osg::DrawArrayLengths::*offsetIndices_function_type)( int ) ;
            typedef void ( DrawArrayLengths_wrapper::*default_offsetIndices_function_type)( int ) ;
            
            DrawArrayLengths_exposer.def( 
                "offsetIndices"
                , offsetIndices_function_type(&::osg::DrawArrayLengths::offsetIndices)
                , default_offsetIndices_function_type(&DrawArrayLengths_wrapper::default_offsetIndices)
                , ( bp::arg("offset") ) );
        
        }
        { //::osg::DrawArrayLengths::setFirst
        
            typedef void ( ::osg::DrawArrayLengths::*setFirst_function_type)( ::GLint ) ;
            
            DrawArrayLengths_exposer.def( 
                "setFirst"
                , setFirst_function_type( &::osg::DrawArrayLengths::setFirst )
                , ( bp::arg("first") ) );
        
        }
        { //::osg::BufferData::asArray
        
            typedef ::osg::Array * ( ::osg::BufferData::*asArray_function_type)(  ) ;
            typedef ::osg::Array * ( DrawArrayLengths_wrapper::*default_asArray_function_type)(  ) ;
            
            DrawArrayLengths_exposer.def( 
                "asArray"
                , asArray_function_type(&::osg::BufferData::asArray)
                , default_asArray_function_type(&DrawArrayLengths_wrapper::default_asArray)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::BufferData::asArray
        
            typedef ::osg::Array const * ( ::osg::BufferData::*asArray_function_type)(  ) const;
            typedef ::osg::Array const * ( DrawArrayLengths_wrapper::*default_asArray_function_type)(  ) const;
            
            DrawArrayLengths_exposer.def( 
                "asArray"
                , asArray_function_type(&::osg::BufferData::asArray)
                , default_asArray_function_type(&DrawArrayLengths_wrapper::default_asArray)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::PrimitiveSet::asPrimitiveSet
        
            typedef ::osg::PrimitiveSet * ( ::osg::PrimitiveSet::*asPrimitiveSet_function_type)(  ) ;
            typedef ::osg::PrimitiveSet * ( DrawArrayLengths_wrapper::*default_asPrimitiveSet_function_type)(  ) ;
            
            DrawArrayLengths_exposer.def( 
                "asPrimitiveSet"
                , asPrimitiveSet_function_type(&::osg::PrimitiveSet::asPrimitiveSet)
                , default_asPrimitiveSet_function_type(&DrawArrayLengths_wrapper::default_asPrimitiveSet)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::PrimitiveSet::asPrimitiveSet
        
            typedef ::osg::PrimitiveSet const * ( ::osg::PrimitiveSet::*asPrimitiveSet_function_type)(  ) const;
            typedef ::osg::PrimitiveSet const * ( DrawArrayLengths_wrapper::*default_asPrimitiveSet_function_type)(  ) const;
            
            DrawArrayLengths_exposer.def( 
                "asPrimitiveSet"
                , asPrimitiveSet_function_type(&::osg::PrimitiveSet::asPrimitiveSet)
                , default_asPrimitiveSet_function_type(&DrawArrayLengths_wrapper::default_asPrimitiveSet)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::computeDataVariance
        
            typedef void ( ::osg::Object::*computeDataVariance_function_type)(  ) ;
            typedef void ( DrawArrayLengths_wrapper::*default_computeDataVariance_function_type)(  ) ;
            
            DrawArrayLengths_exposer.def( 
                "computeDataVariance"
                , computeDataVariance_function_type(&::osg::Object::computeDataVariance)
                , default_computeDataVariance_function_type(&DrawArrayLengths_wrapper::default_computeDataVariance) );
        
        }
        { //::osg::PrimitiveSet::computeRange
        
            typedef void ( ::osg::PrimitiveSet::*computeRange_function_type)(  ) const;
            typedef void ( DrawArrayLengths_wrapper::*default_computeRange_function_type)(  ) const;
            
            DrawArrayLengths_exposer.def( 
                "computeRange"
                , computeRange_function_type(&::osg::PrimitiveSet::computeRange)
                , default_computeRange_function_type(&DrawArrayLengths_wrapper::default_computeRange) );
        
        }
        { //::osg::PrimitiveSet::getDataPointer
        
            typedef ::GLvoid const * ( ::osg::PrimitiveSet::*getDataPointer_function_type)(  ) const;
            typedef ::GLvoid const * ( DrawArrayLengths_wrapper::*default_getDataPointer_function_type)(  ) const;
            
            DrawArrayLengths_exposer.def( 
                "getDataPointer"
                , getDataPointer_function_type(&::osg::PrimitiveSet::getDataPointer)
                , default_getDataPointer_function_type(&DrawArrayLengths_wrapper::default_getDataPointer)
                , bp::return_value_policy< bp::return_opaque_pointer >() );
        
        }
        { //::osg::PrimitiveSet::getDrawElements
        
            typedef ::osg::DrawElements * ( ::osg::PrimitiveSet::*getDrawElements_function_type)(  ) ;
            typedef ::osg::DrawElements * ( DrawArrayLengths_wrapper::*default_getDrawElements_function_type)(  ) ;
            
            DrawArrayLengths_exposer.def( 
                "getDrawElements"
                , getDrawElements_function_type(&::osg::PrimitiveSet::getDrawElements)
                , default_getDrawElements_function_type(&DrawArrayLengths_wrapper::default_getDrawElements)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::PrimitiveSet::getDrawElements
        
            typedef ::osg::DrawElements const * ( ::osg::PrimitiveSet::*getDrawElements_function_type)(  ) const;
            typedef ::osg::DrawElements const * ( DrawArrayLengths_wrapper::*default_getDrawElements_function_type)(  ) const;
            
            DrawArrayLengths_exposer.def( 
                "getDrawElements"
                , getDrawElements_function_type(&::osg::PrimitiveSet::getDrawElements)
                , default_getDrawElements_function_type(&DrawArrayLengths_wrapper::default_getDrawElements)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::PrimitiveSet::getTotalDataSize
        
            typedef unsigned int ( ::osg::PrimitiveSet::*getTotalDataSize_function_type)(  ) const;
            typedef unsigned int ( DrawArrayLengths_wrapper::*default_getTotalDataSize_function_type)(  ) const;
            
            DrawArrayLengths_exposer.def( 
                "getTotalDataSize"
                , getTotalDataSize_function_type(&::osg::PrimitiveSet::getTotalDataSize)
                , default_getTotalDataSize_function_type(&DrawArrayLengths_wrapper::default_getTotalDataSize) );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced * ( ::osg::Object::*getUserData_function_type)(  ) ;
            typedef ::osg::Referenced * ( DrawArrayLengths_wrapper::*default_getUserData_function_type)(  ) ;
            
            DrawArrayLengths_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&DrawArrayLengths_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced const * ( ::osg::Object::*getUserData_function_type)(  ) const;
            typedef ::osg::Referenced const * ( DrawArrayLengths_wrapper::*default_getUserData_function_type)(  ) const;
            
            DrawArrayLengths_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&DrawArrayLengths_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::BufferData::resizeGLObjectBuffers
        
            typedef void ( ::osg::BufferData::*resizeGLObjectBuffers_function_type)( unsigned int ) ;
            typedef void ( DrawArrayLengths_wrapper::*default_resizeGLObjectBuffers_function_type)( unsigned int ) ;
            
            DrawArrayLengths_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::BufferData::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&DrawArrayLengths_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("maxSize") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( ::std::string const & ) ;
            typedef void ( DrawArrayLengths_wrapper::*default_setName_function_type)( ::std::string const & ) ;
            
            DrawArrayLengths_exposer.def( 
                "setName"
                , setName_function_type(&::osg::Object::setName)
                , default_setName_function_type(&DrawArrayLengths_wrapper::default_setName)
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( char const * ) ;
            
            DrawArrayLengths_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Object::setName )
                , ( bp::arg("name") )
                , " Set the name of object using a C style string." );
        
        }
        { //::osg::Object::setThreadSafeRefUnref
        
            typedef void ( ::osg::Object::*setThreadSafeRefUnref_function_type)( bool ) ;
            typedef void ( DrawArrayLengths_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
            
            DrawArrayLengths_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Object::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&DrawArrayLengths_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Object::setUserData
        
            typedef void ( ::osg::Object::*setUserData_function_type)( ::osg::Referenced * ) ;
            typedef void ( DrawArrayLengths_wrapper::*default_setUserData_function_type)( ::osg::Referenced * ) ;
            
            DrawArrayLengths_exposer.def( 
                "setUserData"
                , setUserData_function_type(&::osg::Object::setUserData)
                , default_setUserData_function_type(&DrawArrayLengths_wrapper::default_setUserData)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::PrimitiveSet::supportsBufferObject
        
            typedef bool ( ::osg::PrimitiveSet::*supportsBufferObject_function_type)(  ) const;
            typedef bool ( DrawArrayLengths_wrapper::*default_supportsBufferObject_function_type)(  ) const;
            
            DrawArrayLengths_exposer.def( 
                "supportsBufferObject"
                , supportsBufferObject_function_type(&::osg::PrimitiveSet::supportsBufferObject)
                , default_supportsBufferObject_function_type(&DrawArrayLengths_wrapper::default_supportsBufferObject) );
        
        }
    }

}
