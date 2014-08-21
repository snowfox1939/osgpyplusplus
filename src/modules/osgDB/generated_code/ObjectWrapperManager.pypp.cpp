// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgdb.h"
#include "objectwrappermanager.pypp.hpp"

namespace bp = boost::python;

struct ObjectWrapperManager_wrapper : osgDB::ObjectWrapperManager, bp::wrapper< osgDB::ObjectWrapperManager > {

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

void register_ObjectWrapperManager_class(){

    bp::class_< ObjectWrapperManager_wrapper, bp::bases< ::osg::Referenced >, boost::noncopyable >( "ObjectWrapperManager", bp::no_init )    
        .def( 
            "addCompressor"
            , (void ( ::osgDB::ObjectWrapperManager::* )( ::osgDB::BaseCompressor * ))( &::osgDB::ObjectWrapperManager::addCompressor )
            , ( bp::arg("compressor") ) )    
        .def( 
            "addWrapper"
            , (void ( ::osgDB::ObjectWrapperManager::* )( ::osgDB::ObjectWrapper * ))( &::osgDB::ObjectWrapperManager::addWrapper )
            , ( bp::arg("wrapper") ) )    
        .def( 
            "findCompressor"
            , (::osgDB::BaseCompressor * ( ::osgDB::ObjectWrapperManager::* )( ::std::string const & ))( &::osgDB::ObjectWrapperManager::findCompressor )
            , ( bp::arg("name") )
            , bp::return_internal_reference< >() )    
        .def( 
            "findWrapper"
            , (::osgDB::ObjectWrapper * ( ::osgDB::ObjectWrapperManager::* )( ::std::string const & ))( &::osgDB::ObjectWrapperManager::findWrapper )
            , ( bp::arg("name") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getCompressorMap"
            , (::std::map< std::string, osg::ref_ptr<osgDB::BaseCompressor> > & ( ::osgDB::ObjectWrapperManager::* )(  ))( &::osgDB::ObjectWrapperManager::getCompressorMap )
            , bp::return_internal_reference< >() )    
        .def( 
            "getCompressorMap"
            , (::std::map< std::string, osg::ref_ptr<osgDB::BaseCompressor> > const & ( ::osgDB::ObjectWrapperManager::* )(  )const)( &::osgDB::ObjectWrapperManager::getCompressorMap )
            , bp::return_internal_reference< >() )    
        .def( 
            "getString"
            , (::std::string const & ( ::osgDB::ObjectWrapperManager::* )( ::std::string const &,int ))( &::osgDB::ObjectWrapperManager::getString )
            , ( bp::arg("group"), bp::arg("value") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getValue"
            , (int ( ::osgDB::ObjectWrapperManager::* )( ::std::string const &,::std::string const & ))( &::osgDB::ObjectWrapperManager::getValue )
            , ( bp::arg("group"), bp::arg("str") ) )    
        .def( 
            "getWrapperMap"
            , (::std::map< std::string, osg::ref_ptr<osgDB::ObjectWrapper> > & ( ::osgDB::ObjectWrapperManager::* )(  ))( &::osgDB::ObjectWrapperManager::getWrapperMap )
            , bp::return_internal_reference< >() )    
        .def( 
            "getWrapperMap"
            , (::std::map< std::string, osg::ref_ptr<osgDB::ObjectWrapper> > const & ( ::osgDB::ObjectWrapperManager::* )(  )const)( &::osgDB::ObjectWrapperManager::getWrapperMap )
            , bp::return_internal_reference< >() )    
        .def( 
            "removeCompressor"
            , (void ( ::osgDB::ObjectWrapperManager::* )( ::osgDB::BaseCompressor * ))( &::osgDB::ObjectWrapperManager::removeCompressor )
            , ( bp::arg("compressor") ) )    
        .def( 
            "removeWrapper"
            , (void ( ::osgDB::ObjectWrapperManager::* )( ::osgDB::ObjectWrapper * ))( &::osgDB::ObjectWrapperManager::removeWrapper )
            , ( bp::arg("wrapper") ) );

}
