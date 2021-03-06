// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgtext.h"
#include "wrap_referenced.h"
#include "style.pypp.hpp"

namespace bp = boost::python;

struct Style_wrapper : osgText::Style, bp::wrapper< osgText::Style > {

    Style_wrapper( )
    : osgText::Style( )
      , bp::wrapper< osgText::Style >(){
        // null constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgText::Style::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgText::Style::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgText::Style::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgText::Style::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgText::Style::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgText::Style::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgText::Style::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgText::Style::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgText::Style::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgText::Style::libraryName( );
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

    virtual void resizeGLObjectBuffers( unsigned int arg0 ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( arg0 );
        else{
            this->osg::Object::resizeGLObjectBuffers( arg0 );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int arg0 ) {
        osg::Object::resizeGLObjectBuffers( arg0 );
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

};

void register_Style_class(){

    bp::class_< Style_wrapper, bp::bases< ::osg::Object >, osg::ref_ptr< Style_wrapper >, boost::noncopyable >( "Style", bp::init< >() )    
        .def( 
            "className"
            , (char const * ( ::osgText::Style::* )(  )const)(&::osgText::Style::className)
            , (char const * ( Style_wrapper::* )(  )const)(&Style_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgText::Style::* )( ::osg::CopyOp const & )const)(&::osgText::Style::clone)
            , (::osg::Object * ( Style_wrapper::* )( ::osg::CopyOp const & )const)(&Style_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgText::Style::* )(  )const)(&::osgText::Style::cloneType)
            , (::osg::Object * ( Style_wrapper::* )(  )const)(&Style_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "getBevel"
            , (::osgText::Bevel const * ( ::osgText::Style::* )(  )const)( &::osgText::Style::getBevel )
            , bp::return_internal_reference< >() )    
        .def( 
            "getDefaultStyle"
            , (::osg::ref_ptr< osgText::Style > & (*)(  ))( &::osgText::Style::getDefaultStyle )
            , bp::return_internal_reference< >()
            , " default Layout implementation used if no other is specified on TextNode" )    
        .def( 
            "getOutlineRatio"
            , (float ( ::osgText::Style::* )(  )const)( &::osgText::Style::getOutlineRatio ) )    
        .def( 
            "getSampleDensity"
            , (float ( ::osgText::Style::* )(  )const)( &::osgText::Style::getSampleDensity ) )    
        .def( 
            "getThicknessRatio"
            , (float ( ::osgText::Style::* )(  )const)( &::osgText::Style::getThicknessRatio ) )    
        .def( 
            "getWidthRatio"
            , (float ( ::osgText::Style::* )(  )const)( &::osgText::Style::getWidthRatio ) )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgText::Style::* )( ::osg::Object const * )const)(&::osgText::Style::isSameKindAs)
            , (bool ( Style_wrapper::* )( ::osg::Object const * )const)(&Style_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgText::Style::* )(  )const)(&::osgText::Style::libraryName)
            , (char const * ( Style_wrapper::* )(  )const)(&Style_wrapper::default_libraryName) )    
        .def( bp::self == bp::self )    
        .def( 
            "setBevel"
            , (void ( ::osgText::Style::* )( ::osgText::Bevel * ))( &::osgText::Style::setBevel )
            , ( bp::arg("bevel") )
            , " NULL is no bevel" )    
        .def( 
            "setOutlineRatio"
            , (void ( ::osgText::Style::* )( float ))( &::osgText::Style::setOutlineRatio )
            , ( bp::arg("outlineRatio") )
            , " 0 is off" )    
        .def( 
            "setSampleDensity"
            , (void ( ::osgText::Style::* )( float ))( &::osgText::Style::setSampleDensity )
            , ( bp::arg("sd") )
            , " 1.0 is default number of samples" )    
        .def( 
            "setThicknessRatio"
            , (void ( ::osgText::Style::* )( float ))( &::osgText::Style::setThicknessRatio )
            , ( bp::arg("thicknessRatio") )
            , " 0 is 2D text" )    
        .def( 
            "setWidthRatio"
            , (void ( ::osgText::Style::* )( float ))( &::osgText::Style::setWidthRatio )
            , ( bp::arg("widthRatio") )
            , " 1 is the default width of the text" )    
        .staticmethod( "getDefaultStyle" );

}
