// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "drawarrays.pypp.hpp"

namespace bp = boost::python;

struct DrawArrays_wrapper : osg::DrawArrays, bp::wrapper< osg::DrawArrays > {

    DrawArrays_wrapper(::GLenum mode=0 )
    : osg::DrawArrays( mode )
      , bp::wrapper< osg::DrawArrays >(){
        // constructor
    
    }

    DrawArrays_wrapper(::GLenum mode, ::GLint first, ::GLsizei count, int numInstances=0 )
    : osg::DrawArrays( mode, first, count, numInstances )
      , bp::wrapper< osg::DrawArrays >(){
        // constructor
    
    }

    virtual void accept( ::osg::PrimitiveFunctor & functor ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(functor) );
        else{
            this->osg::DrawArrays::accept( boost::ref(functor) );
        }
    }
    
    void default_accept( ::osg::PrimitiveFunctor & functor ) const  {
        osg::DrawArrays::accept( boost::ref(functor) );
    }

    virtual void accept( ::osg::PrimitiveIndexFunctor & functor ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(functor) );
        else{
            this->osg::DrawArrays::accept( boost::ref(functor) );
        }
    }
    
    void default_accept( ::osg::PrimitiveIndexFunctor & functor ) const  {
        osg::DrawArrays::accept( boost::ref(functor) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::DrawArrays::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::DrawArrays::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::DrawArrays::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::DrawArrays::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::DrawArrays::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::DrawArrays::cloneType( );
    }

    virtual void draw( ::osg::State & state, bool useVertexBufferObjects ) const  {
        if( bp::override func_draw = this->get_override( "draw" ) )
            func_draw( boost::ref(state), useVertexBufferObjects );
        else{
            this->osg::DrawArrays::draw( boost::ref(state), useVertexBufferObjects );
        }
    }
    
    void default_draw( ::osg::State & state, bool useVertexBufferObjects ) const  {
        osg::DrawArrays::draw( boost::ref(state), useVertexBufferObjects );
    }

    virtual unsigned int getNumIndices(  ) const  {
        if( bp::override func_getNumIndices = this->get_override( "getNumIndices" ) )
            return func_getNumIndices(  );
        else{
            return this->osg::DrawArrays::getNumIndices(  );
        }
    }
    
    unsigned int default_getNumIndices(  ) const  {
        return osg::DrawArrays::getNumIndices( );
    }

    virtual unsigned int index( unsigned int pos ) const  {
        if( bp::override func_index = this->get_override( "index" ) )
            return func_index( pos );
        else{
            return this->osg::DrawArrays::index( pos );
        }
    }
    
    unsigned int default_index( unsigned int pos ) const  {
        return osg::DrawArrays::index( pos );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::DrawArrays::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::DrawArrays::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::DrawArrays::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::DrawArrays::libraryName( );
    }

    virtual void offsetIndices( int offset ) {
        if( bp::override func_offsetIndices = this->get_override( "offsetIndices" ) )
            func_offsetIndices( offset );
        else{
            this->osg::DrawArrays::offsetIndices( offset );
        }
    }
    
    void default_offsetIndices( int offset ) {
        osg::DrawArrays::offsetIndices( offset );
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

    virtual unsigned int getNumPrimitives(  ) const  {
        if( bp::override func_getNumPrimitives = this->get_override( "getNumPrimitives" ) )
            return func_getNumPrimitives(  );
        else{
            return this->osg::PrimitiveSet::getNumPrimitives(  );
        }
    }
    
    unsigned int default_getNumPrimitives(  ) const  {
        return osg::PrimitiveSet::getNumPrimitives( );
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

void register_DrawArrays_class(){

    { //::osg::DrawArrays
        typedef bp::class_< DrawArrays_wrapper, bp::bases< osg::PrimitiveSet >, osg::ref_ptr< ::osg::DrawArrays >, boost::noncopyable > DrawArrays_exposer_t;
        DrawArrays_exposer_t DrawArrays_exposer = DrawArrays_exposer_t( "DrawArrays", bp::no_init );
        bp::scope DrawArrays_scope( DrawArrays_exposer );
        DrawArrays_exposer.def( bp::init< bp::optional< GLenum > >(( bp::arg("mode")=(::GLenum)(0) )) );
        bp::implicitly_convertible< GLenum, osg::DrawArrays >();
        DrawArrays_exposer.def( bp::init< GLenum, GLint, GLsizei, bp::optional< int > >(( bp::arg("mode"), bp::arg("first"), bp::arg("count"), bp::arg("numInstances")=(int)(0) )) );
        { //::osg::DrawArrays::accept
        
            typedef void ( ::osg::DrawArrays::*accept_function_type)( ::osg::PrimitiveFunctor & ) const;
            typedef void ( DrawArrays_wrapper::*default_accept_function_type)( ::osg::PrimitiveFunctor & ) const;
            
            DrawArrays_exposer.def( 
                "accept"
                , accept_function_type(&::osg::DrawArrays::accept)
                , default_accept_function_type(&DrawArrays_wrapper::default_accept)
                , ( bp::arg("functor") ) );
        
        }
        { //::osg::DrawArrays::accept
        
            typedef void ( ::osg::DrawArrays::*accept_function_type)( ::osg::PrimitiveIndexFunctor & ) const;
            typedef void ( DrawArrays_wrapper::*default_accept_function_type)( ::osg::PrimitiveIndexFunctor & ) const;
            
            DrawArrays_exposer.def( 
                "accept"
                , accept_function_type(&::osg::DrawArrays::accept)
                , default_accept_function_type(&DrawArrays_wrapper::default_accept)
                , ( bp::arg("functor") ) );
        
        }
        { //::osg::DrawArrays::className
        
            typedef char const * ( ::osg::DrawArrays::*className_function_type)(  ) const;
            typedef char const * ( DrawArrays_wrapper::*default_className_function_type)(  ) const;
            
            DrawArrays_exposer.def( 
                "className"
                , className_function_type(&::osg::DrawArrays::className)
                , default_className_function_type(&DrawArrays_wrapper::default_className) );
        
        }
        { //::osg::DrawArrays::clone
        
            typedef ::osg::Object * ( ::osg::DrawArrays::*clone_function_type)( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( DrawArrays_wrapper::*default_clone_function_type)( ::osg::CopyOp const & ) const;
            
            DrawArrays_exposer.def( 
                "clone"
                , clone_function_type(&::osg::DrawArrays::clone)
                , default_clone_function_type(&DrawArrays_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::DrawArrays::cloneType
        
            typedef ::osg::Object * ( ::osg::DrawArrays::*cloneType_function_type)(  ) const;
            typedef ::osg::Object * ( DrawArrays_wrapper::*default_cloneType_function_type)(  ) const;
            
            DrawArrays_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::DrawArrays::cloneType)
                , default_cloneType_function_type(&DrawArrays_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::DrawArrays::draw
        
            typedef void ( ::osg::DrawArrays::*draw_function_type)( ::osg::State &,bool ) const;
            typedef void ( DrawArrays_wrapper::*default_draw_function_type)( ::osg::State &,bool ) const;
            
            DrawArrays_exposer.def( 
                "draw"
                , draw_function_type(&::osg::DrawArrays::draw)
                , default_draw_function_type(&DrawArrays_wrapper::default_draw)
                , ( bp::arg("state"), bp::arg("useVertexBufferObjects") ) );
        
        }
        { //::osg::DrawArrays::getCount
        
            typedef ::GLsizei ( ::osg::DrawArrays::*getCount_function_type)(  ) const;
            
            DrawArrays_exposer.def( 
                "getCount"
                , getCount_function_type( &::osg::DrawArrays::getCount ) );
        
        }
        { //::osg::DrawArrays::getFirst
        
            typedef ::GLint ( ::osg::DrawArrays::*getFirst_function_type)(  ) const;
            
            DrawArrays_exposer.def( 
                "getFirst"
                , getFirst_function_type( &::osg::DrawArrays::getFirst ) );
        
        }
        { //::osg::DrawArrays::getNumIndices
        
            typedef unsigned int ( ::osg::DrawArrays::*getNumIndices_function_type)(  ) const;
            typedef unsigned int ( DrawArrays_wrapper::*default_getNumIndices_function_type)(  ) const;
            
            DrawArrays_exposer.def( 
                "getNumIndices"
                , getNumIndices_function_type(&::osg::DrawArrays::getNumIndices)
                , default_getNumIndices_function_type(&DrawArrays_wrapper::default_getNumIndices) );
        
        }
        { //::osg::DrawArrays::index
        
            typedef unsigned int ( ::osg::DrawArrays::*index_function_type)( unsigned int ) const;
            typedef unsigned int ( DrawArrays_wrapper::*default_index_function_type)( unsigned int ) const;
            
            DrawArrays_exposer.def( 
                "index"
                , index_function_type(&::osg::DrawArrays::index)
                , default_index_function_type(&DrawArrays_wrapper::default_index)
                , ( bp::arg("pos") ) );
        
        }
        { //::osg::DrawArrays::isSameKindAs
        
            typedef bool ( ::osg::DrawArrays::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( DrawArrays_wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            DrawArrays_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::DrawArrays::isSameKindAs)
                , default_isSameKindAs_function_type(&DrawArrays_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::DrawArrays::libraryName
        
            typedef char const * ( ::osg::DrawArrays::*libraryName_function_type)(  ) const;
            typedef char const * ( DrawArrays_wrapper::*default_libraryName_function_type)(  ) const;
            
            DrawArrays_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::DrawArrays::libraryName)
                , default_libraryName_function_type(&DrawArrays_wrapper::default_libraryName) );
        
        }
        { //::osg::DrawArrays::offsetIndices
        
            typedef void ( ::osg::DrawArrays::*offsetIndices_function_type)( int ) ;
            typedef void ( DrawArrays_wrapper::*default_offsetIndices_function_type)( int ) ;
            
            DrawArrays_exposer.def( 
                "offsetIndices"
                , offsetIndices_function_type(&::osg::DrawArrays::offsetIndices)
                , default_offsetIndices_function_type(&DrawArrays_wrapper::default_offsetIndices)
                , ( bp::arg("offset") ) );
        
        }
        { //::osg::DrawArrays::set
        
            typedef void ( ::osg::DrawArrays::*set_function_type)( ::GLenum,::GLint,::GLsizei ) ;
            
            DrawArrays_exposer.def( 
                "set"
                , set_function_type( &::osg::DrawArrays::set )
                , ( bp::arg("mode"), bp::arg("first"), bp::arg("count") ) );
        
        }
        { //::osg::DrawArrays::setCount
        
            typedef void ( ::osg::DrawArrays::*setCount_function_type)( ::GLsizei ) ;
            
            DrawArrays_exposer.def( 
                "setCount"
                , setCount_function_type( &::osg::DrawArrays::setCount )
                , ( bp::arg("count") ) );
        
        }
        { //::osg::DrawArrays::setFirst
        
            typedef void ( ::osg::DrawArrays::*setFirst_function_type)( ::GLint ) ;
            
            DrawArrays_exposer.def( 
                "setFirst"
                , setFirst_function_type( &::osg::DrawArrays::setFirst )
                , ( bp::arg("first") ) );
        
        }
        { //::osg::BufferData::asArray
        
            typedef ::osg::Array * ( ::osg::BufferData::*asArray_function_type)(  ) ;
            typedef ::osg::Array * ( DrawArrays_wrapper::*default_asArray_function_type)(  ) ;
            
            DrawArrays_exposer.def( 
                "asArray"
                , asArray_function_type(&::osg::BufferData::asArray)
                , default_asArray_function_type(&DrawArrays_wrapper::default_asArray)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::BufferData::asArray
        
            typedef ::osg::Array const * ( ::osg::BufferData::*asArray_function_type)(  ) const;
            typedef ::osg::Array const * ( DrawArrays_wrapper::*default_asArray_function_type)(  ) const;
            
            DrawArrays_exposer.def( 
                "asArray"
                , asArray_function_type(&::osg::BufferData::asArray)
                , default_asArray_function_type(&DrawArrays_wrapper::default_asArray)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::PrimitiveSet::asPrimitiveSet
        
            typedef ::osg::PrimitiveSet * ( ::osg::PrimitiveSet::*asPrimitiveSet_function_type)(  ) ;
            typedef ::osg::PrimitiveSet * ( DrawArrays_wrapper::*default_asPrimitiveSet_function_type)(  ) ;
            
            DrawArrays_exposer.def( 
                "asPrimitiveSet"
                , asPrimitiveSet_function_type(&::osg::PrimitiveSet::asPrimitiveSet)
                , default_asPrimitiveSet_function_type(&DrawArrays_wrapper::default_asPrimitiveSet)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::PrimitiveSet::asPrimitiveSet
        
            typedef ::osg::PrimitiveSet const * ( ::osg::PrimitiveSet::*asPrimitiveSet_function_type)(  ) const;
            typedef ::osg::PrimitiveSet const * ( DrawArrays_wrapper::*default_asPrimitiveSet_function_type)(  ) const;
            
            DrawArrays_exposer.def( 
                "asPrimitiveSet"
                , asPrimitiveSet_function_type(&::osg::PrimitiveSet::asPrimitiveSet)
                , default_asPrimitiveSet_function_type(&DrawArrays_wrapper::default_asPrimitiveSet)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::computeDataVariance
        
            typedef void ( ::osg::Object::*computeDataVariance_function_type)(  ) ;
            typedef void ( DrawArrays_wrapper::*default_computeDataVariance_function_type)(  ) ;
            
            DrawArrays_exposer.def( 
                "computeDataVariance"
                , computeDataVariance_function_type(&::osg::Object::computeDataVariance)
                , default_computeDataVariance_function_type(&DrawArrays_wrapper::default_computeDataVariance) );
        
        }
        { //::osg::PrimitiveSet::computeRange
        
            typedef void ( ::osg::PrimitiveSet::*computeRange_function_type)(  ) const;
            typedef void ( DrawArrays_wrapper::*default_computeRange_function_type)(  ) const;
            
            DrawArrays_exposer.def( 
                "computeRange"
                , computeRange_function_type(&::osg::PrimitiveSet::computeRange)
                , default_computeRange_function_type(&DrawArrays_wrapper::default_computeRange) );
        
        }
        { //::osg::PrimitiveSet::getDataPointer
        
            typedef ::GLvoid const * ( ::osg::PrimitiveSet::*getDataPointer_function_type)(  ) const;
            typedef ::GLvoid const * ( DrawArrays_wrapper::*default_getDataPointer_function_type)(  ) const;
            
            DrawArrays_exposer.def( 
                "getDataPointer"
                , getDataPointer_function_type(&::osg::PrimitiveSet::getDataPointer)
                , default_getDataPointer_function_type(&DrawArrays_wrapper::default_getDataPointer)
                , bp::return_value_policy< bp::return_opaque_pointer >() );
        
        }
        { //::osg::PrimitiveSet::getDrawElements
        
            typedef ::osg::DrawElements * ( ::osg::PrimitiveSet::*getDrawElements_function_type)(  ) ;
            typedef ::osg::DrawElements * ( DrawArrays_wrapper::*default_getDrawElements_function_type)(  ) ;
            
            DrawArrays_exposer.def( 
                "getDrawElements"
                , getDrawElements_function_type(&::osg::PrimitiveSet::getDrawElements)
                , default_getDrawElements_function_type(&DrawArrays_wrapper::default_getDrawElements)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::PrimitiveSet::getDrawElements
        
            typedef ::osg::DrawElements const * ( ::osg::PrimitiveSet::*getDrawElements_function_type)(  ) const;
            typedef ::osg::DrawElements const * ( DrawArrays_wrapper::*default_getDrawElements_function_type)(  ) const;
            
            DrawArrays_exposer.def( 
                "getDrawElements"
                , getDrawElements_function_type(&::osg::PrimitiveSet::getDrawElements)
                , default_getDrawElements_function_type(&DrawArrays_wrapper::default_getDrawElements)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::PrimitiveSet::getNumPrimitives
        
            typedef unsigned int ( ::osg::PrimitiveSet::*getNumPrimitives_function_type)(  ) const;
            typedef unsigned int ( DrawArrays_wrapper::*default_getNumPrimitives_function_type)(  ) const;
            
            DrawArrays_exposer.def( 
                "getNumPrimitives"
                , getNumPrimitives_function_type(&::osg::PrimitiveSet::getNumPrimitives)
                , default_getNumPrimitives_function_type(&DrawArrays_wrapper::default_getNumPrimitives) );
        
        }
        { //::osg::PrimitiveSet::getTotalDataSize
        
            typedef unsigned int ( ::osg::PrimitiveSet::*getTotalDataSize_function_type)(  ) const;
            typedef unsigned int ( DrawArrays_wrapper::*default_getTotalDataSize_function_type)(  ) const;
            
            DrawArrays_exposer.def( 
                "getTotalDataSize"
                , getTotalDataSize_function_type(&::osg::PrimitiveSet::getTotalDataSize)
                , default_getTotalDataSize_function_type(&DrawArrays_wrapper::default_getTotalDataSize) );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced * ( ::osg::Object::*getUserData_function_type)(  ) ;
            typedef ::osg::Referenced * ( DrawArrays_wrapper::*default_getUserData_function_type)(  ) ;
            
            DrawArrays_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&DrawArrays_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced const * ( ::osg::Object::*getUserData_function_type)(  ) const;
            typedef ::osg::Referenced const * ( DrawArrays_wrapper::*default_getUserData_function_type)(  ) const;
            
            DrawArrays_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&DrawArrays_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::BufferData::resizeGLObjectBuffers
        
            typedef void ( ::osg::BufferData::*resizeGLObjectBuffers_function_type)( unsigned int ) ;
            typedef void ( DrawArrays_wrapper::*default_resizeGLObjectBuffers_function_type)( unsigned int ) ;
            
            DrawArrays_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::BufferData::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&DrawArrays_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("maxSize") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( ::std::string const & ) ;
            typedef void ( DrawArrays_wrapper::*default_setName_function_type)( ::std::string const & ) ;
            
            DrawArrays_exposer.def( 
                "setName"
                , setName_function_type(&::osg::Object::setName)
                , default_setName_function_type(&DrawArrays_wrapper::default_setName)
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( char const * ) ;
            
            DrawArrays_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Object::setName )
                , ( bp::arg("name") )
                , " Set the name of object using a C style string." );
        
        }
        { //::osg::Object::setThreadSafeRefUnref
        
            typedef void ( ::osg::Object::*setThreadSafeRefUnref_function_type)( bool ) ;
            typedef void ( DrawArrays_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
            
            DrawArrays_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Object::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&DrawArrays_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Object::setUserData
        
            typedef void ( ::osg::Object::*setUserData_function_type)( ::osg::Referenced * ) ;
            typedef void ( DrawArrays_wrapper::*default_setUserData_function_type)( ::osg::Referenced * ) ;
            
            DrawArrays_exposer.def( 
                "setUserData"
                , setUserData_function_type(&::osg::Object::setUserData)
                , default_setUserData_function_type(&DrawArrays_wrapper::default_setUserData)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::PrimitiveSet::supportsBufferObject
        
            typedef bool ( ::osg::PrimitiveSet::*supportsBufferObject_function_type)(  ) const;
            typedef bool ( DrawArrays_wrapper::*default_supportsBufferObject_function_type)(  ) const;
            
            DrawArrays_exposer.def( 
                "supportsBufferObject"
                , supportsBufferObject_function_type(&::osg::PrimitiveSet::supportsBufferObject)
                , default_supportsBufferObject_function_type(&DrawArrays_wrapper::default_supportsBufferObject) );
        
        }
    }

}
