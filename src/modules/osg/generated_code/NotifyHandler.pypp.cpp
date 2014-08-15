// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "notifyhandler.pypp.hpp"

namespace bp = boost::python;

struct NotifyHandler_wrapper : osg::NotifyHandler, bp::wrapper< osg::NotifyHandler > {

    NotifyHandler_wrapper()
    : osg::NotifyHandler()
      , bp::wrapper< osg::NotifyHandler >(){
        // null constructor
        
    }

    virtual void notify( ::osg::NotifySeverity severity, char const * message ){
        bp::override func_notify = this->get_override( "notify" );
        func_notify( severity, message );
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

void register_NotifyHandler_class(){

    bp::class_< NotifyHandler_wrapper, bp::bases< osg::Referenced >, boost::noncopyable >( "NotifyHandler" )    
        .def( 
            "notify"
            , bp::pure_virtual( (void ( ::osg::NotifyHandler::* )( ::osg::NotifySeverity,char const * ))(&::osg::NotifyHandler::notify) )
            , ( bp::arg("severity"), bp::arg("message") ) )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Referenced::* )( bool ))(&::osg::Referenced::setThreadSafeRefUnref)
            , (void ( NotifyHandler_wrapper::* )( bool ))(&NotifyHandler_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) );

}
