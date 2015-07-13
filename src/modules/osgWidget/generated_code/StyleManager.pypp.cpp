// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgwidget.h"
#include "wrap_referenced.h"
#include "stylemanager.pypp.hpp"

namespace bp = boost::python;

struct StyleManager_wrapper : osgWidget::StyleManager, bp::wrapper< osgWidget::StyleManager > {

    StyleManager_wrapper( )
    : osgWidget::StyleManager( )
      , bp::wrapper< osgWidget::StyleManager >(){
        // null constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgWidget::StyleManager::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgWidget::StyleManager::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgWidget::StyleManager::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgWidget::StyleManager::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgWidget::StyleManager::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgWidget::StyleManager::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgWidget::StyleManager::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgWidget::StyleManager::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgWidget::StyleManager::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgWidget::StyleManager::libraryName( );
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

void register_StyleManager_class(){

    bp::class_< StyleManager_wrapper, bp::bases< ::osg::Object >, osg::ref_ptr< ::osgWidget::StyleManager >, boost::noncopyable >( "StyleManager", bp::init< >() )    
        .def( 
            "addStyle"
            , (bool ( ::osgWidget::StyleManager::* )( ::osgWidget::Style * ))( &::osgWidget::StyleManager::addStyle )
            , ( bp::arg("arg0") ) )    
        .def( 
            "applyStyles"
            , (bool ( ::osgWidget::StyleManager::* )( ::osgWidget::Widget * ))( &::osgWidget::StyleManager::applyStyles )
            , ( bp::arg("widget") ) )    
        .def( 
            "applyStyles"
            , (bool ( ::osgWidget::StyleManager::* )( ::osgWidget::Window * ))( &::osgWidget::StyleManager::applyStyles )
            , ( bp::arg("window") ) )    
        .def( 
            "className"
            , (char const * ( ::osgWidget::StyleManager::* )(  )const)(&::osgWidget::StyleManager::className)
            , (char const * ( StyleManager_wrapper::* )(  )const)(&StyleManager_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgWidget::StyleManager::* )( ::osg::CopyOp const & )const)(&::osgWidget::StyleManager::clone)
            , (::osg::Object * ( StyleManager_wrapper::* )( ::osg::CopyOp const & )const)(&StyleManager_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgWidget::StyleManager::* )(  )const)(&::osgWidget::StyleManager::cloneType)
            , (::osg::Object * ( StyleManager_wrapper::* )(  )const)(&StyleManager_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgWidget::StyleManager::* )( ::osg::Object const * )const)(&::osgWidget::StyleManager::isSameKindAs)
            , (bool ( StyleManager_wrapper::* )( ::osg::Object const * )const)(&StyleManager_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgWidget::StyleManager::* )(  )const)(&::osgWidget::StyleManager::libraryName)
            , (char const * ( StyleManager_wrapper::* )(  )const)(&StyleManager_wrapper::default_libraryName) );

}
