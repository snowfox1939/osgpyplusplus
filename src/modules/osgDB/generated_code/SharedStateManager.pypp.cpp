// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgdb.h"
#include "sharedstatemanager.pypp.hpp"

namespace bp = boost::python;

struct SharedStateManager_wrapper : osgDB::SharedStateManager, bp::wrapper< osgDB::SharedStateManager > {

    SharedStateManager_wrapper(unsigned int mode=(unsigned int)(::osgDB::SharedStateManager::SHARE_ALL) )
    : osgDB::SharedStateManager( mode )
      , bp::wrapper< osgDB::SharedStateManager >(){
        // constructor
    
    }

    virtual void apply( ::osg::Node & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgDB::SharedStateManager::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Node & node ) {
        osgDB::SharedStateManager::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Geode & geode ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(geode) );
        else{
            this->osgDB::SharedStateManager::apply( boost::ref(geode) );
        }
    }
    
    void default_apply( ::osg::Geode & geode ) {
        osgDB::SharedStateManager::apply( boost::ref(geode) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgDB::SharedStateManager::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgDB::SharedStateManager::className( );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgDB::SharedStateManager::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgDB::SharedStateManager::libraryName( );
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Referenced::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Referenced::setThreadSafeRefUnref( threadSafe );
    }

};

void register_SharedStateManager_class(){

    { //::osgDB::SharedStateManager
        typedef bp::class_< SharedStateManager_wrapper, boost::noncopyable > SharedStateManager_exposer_t;
        SharedStateManager_exposer_t SharedStateManager_exposer = SharedStateManager_exposer_t( "SharedStateManager", bp::init< bp::optional< unsigned int > >(( bp::arg("mode")=(unsigned int)((unsigned int)(::osgDB::SharedStateManager::SHARE_ALL)) )) );
        bp::scope SharedStateManager_scope( SharedStateManager_exposer );
        bp::enum_< osgDB::SharedStateManager::ShareMode>("ShareMode")
            .value("SHARE_NONE", osgDB::SharedStateManager::SHARE_NONE)
            .value("SHARE_STATIC_TEXTURES", osgDB::SharedStateManager::SHARE_STATIC_TEXTURES)
            .value("SHARE_UNSPECIFIED_TEXTURES", osgDB::SharedStateManager::SHARE_UNSPECIFIED_TEXTURES)
            .value("SHARE_DYNAMIC_TEXTURES", osgDB::SharedStateManager::SHARE_DYNAMIC_TEXTURES)
            .value("SHARE_STATIC_STATESETS", osgDB::SharedStateManager::SHARE_STATIC_STATESETS)
            .value("SHARE_UNSPECIFIED_STATESETS", osgDB::SharedStateManager::SHARE_UNSPECIFIED_STATESETS)
            .value("SHARE_DYNAMIC_STATESETS", osgDB::SharedStateManager::SHARE_DYNAMIC_STATESETS)
            .value("SHARE_TEXTURES", osgDB::SharedStateManager::SHARE_TEXTURES)
            .value("SHARE_STATESETS", osgDB::SharedStateManager::SHARE_STATESETS)
            .value("SHARE_ALL", osgDB::SharedStateManager::SHARE_ALL)
            .export_values()
            ;
        bp::implicitly_convertible< unsigned int, osgDB::SharedStateManager >();
        { //::osgDB::SharedStateManager::apply
        
            typedef void ( ::osgDB::SharedStateManager::*apply_function_type)( ::osg::Node & ) ;
            typedef void ( SharedStateManager_wrapper::*default_apply_function_type)( ::osg::Node & ) ;
            
            SharedStateManager_exposer.def( 
                "apply"
                , apply_function_type(&::osgDB::SharedStateManager::apply)
                , default_apply_function_type(&SharedStateManager_wrapper::default_apply)
                , ( bp::arg("node") ) );
        
        }
        { //::osgDB::SharedStateManager::apply
        
            typedef void ( ::osgDB::SharedStateManager::*apply_function_type)( ::osg::Geode & ) ;
            typedef void ( SharedStateManager_wrapper::*default_apply_function_type)( ::osg::Geode & ) ;
            
            SharedStateManager_exposer.def( 
                "apply"
                , apply_function_type(&::osgDB::SharedStateManager::apply)
                , default_apply_function_type(&SharedStateManager_wrapper::default_apply)
                , ( bp::arg("geode") ) );
        
        }
        { //::osgDB::SharedStateManager::className
        
            typedef char const * ( ::osgDB::SharedStateManager::*className_function_type)(  ) const;
            typedef char const * ( SharedStateManager_wrapper::*default_className_function_type)(  ) const;
            
            SharedStateManager_exposer.def( 
                "className"
                , className_function_type(&::osgDB::SharedStateManager::className)
                , default_className_function_type(&SharedStateManager_wrapper::default_className) );
        
        }
        { //::osgDB::SharedStateManager::getShareMode
        
            typedef unsigned int ( ::osgDB::SharedStateManager::*getShareMode_function_type)(  ) ;
            
            SharedStateManager_exposer.def( 
                "getShareMode"
                , getShareMode_function_type( &::osgDB::SharedStateManager::getShareMode ) );
        
        }
        { //::osgDB::SharedStateManager::isShared
        
            typedef bool ( ::osgDB::SharedStateManager::*isShared_function_type)( ::osg::StateSet * ) ;
            
            SharedStateManager_exposer.def( 
                "isShared"
                , isShared_function_type( &::osgDB::SharedStateManager::isShared )
                , ( bp::arg("stateSet") ) );
        
        }
        { //::osgDB::SharedStateManager::isShared
        
            typedef bool ( ::osgDB::SharedStateManager::*isShared_function_type)( ::osg::Texture * ) ;
            
            SharedStateManager_exposer.def( 
                "isShared"
                , isShared_function_type( &::osgDB::SharedStateManager::isShared )
                , ( bp::arg("texture") ) );
        
        }
        { //::osgDB::SharedStateManager::libraryName
        
            typedef char const * ( ::osgDB::SharedStateManager::*libraryName_function_type)(  ) const;
            typedef char const * ( SharedStateManager_wrapper::*default_libraryName_function_type)(  ) const;
            
            SharedStateManager_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osgDB::SharedStateManager::libraryName)
                , default_libraryName_function_type(&SharedStateManager_wrapper::default_libraryName) );
        
        }
        { //::osgDB::SharedStateManager::prune
        
            typedef void ( ::osgDB::SharedStateManager::*prune_function_type)(  ) ;
            
            SharedStateManager_exposer.def( 
                "prune"
                , prune_function_type( &::osgDB::SharedStateManager::prune ) );
        
        }
        { //::osgDB::SharedStateManager::releaseGLObjects
        
            typedef void ( ::osgDB::SharedStateManager::*releaseGLObjects_function_type)( ::osg::State * ) const;
            
            SharedStateManager_exposer.def( 
                "releaseGLObjects"
                , releaseGLObjects_function_type( &::osgDB::SharedStateManager::releaseGLObjects )
                , ( bp::arg("state") ) );
        
        }
        { //::osgDB::SharedStateManager::setShareMode
        
            typedef void ( ::osgDB::SharedStateManager::*setShareMode_function_type)( unsigned int ) ;
            
            SharedStateManager_exposer.def( 
                "setShareMode"
                , setShareMode_function_type( &::osgDB::SharedStateManager::setShareMode )
                , ( bp::arg("mode") ) );
        
        }
        { //::osgDB::SharedStateManager::share
        
            typedef void ( ::osgDB::SharedStateManager::*share_function_type)( ::osg::Node *,::OpenThreads::Mutex * ) ;
            
            SharedStateManager_exposer.def( 
                "share"
                , share_function_type( &::osgDB::SharedStateManager::share )
                , ( bp::arg("node"), bp::arg("mt")=bp::object() ) );
        
        }
    }

}
