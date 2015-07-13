// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "wrap_osgmanipulator.h"
#include "wrap_referenced.h"
#include "scale2dcommand.pypp.hpp"

namespace bp = boost::python;

struct Scale2DCommand_wrapper : osgManipulator::Scale2DCommand, bp::wrapper< osgManipulator::Scale2DCommand > {

    Scale2DCommand_wrapper( )
    : osgManipulator::Scale2DCommand( )
      , bp::wrapper< osgManipulator::Scale2DCommand >(){
        // null constructor
    
    }

    virtual void accept( ::osgManipulator::Constraint const & constraint ) {
        namespace bpl = boost::python;
        if( bpl::override func_accept = this->get_override( "accept" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_accept.ptr(), constraint );
        }
        else{
            osgManipulator::Scale2DCommand::accept( boost::ref(constraint) );
        }
    }
    
    static void default_accept_289ad61f697b095e2efb0253d5ca6ee7( ::osgManipulator::Scale2DCommand & inst, ::osgManipulator::Constraint & constraint ){
        if( dynamic_cast< Scale2DCommand_wrapper * >( boost::addressof( inst ) ) ){
            inst.::osgManipulator::Scale2DCommand::accept(constraint);
        }
        else{
            inst.accept(constraint);
        }
    }

    virtual void accept( ::osgManipulator::DraggerCallback & callback ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(callback) );
        else{
            this->osgManipulator::Scale2DCommand::accept( boost::ref(callback) );
        }
    }
    
    void default_accept( ::osgManipulator::DraggerCallback & callback ) {
        osgManipulator::Scale2DCommand::accept( boost::ref(callback) );
    }

    virtual ::osgManipulator::MotionCommand * createCommandInverse(  ) {
        if( bp::override func_createCommandInverse = this->get_override( "createCommandInverse" ) )
            return func_createCommandInverse(  );
        else{
            return this->osgManipulator::Scale2DCommand::createCommandInverse(  );
        }
    }
    
    ::osgManipulator::MotionCommand * default_createCommandInverse(  ) {
        return osgManipulator::Scale2DCommand::createCommandInverse( );
    }

    virtual ::osg::Matrix getMotionMatrix(  ) const  {
        if( bp::override func_getMotionMatrix = this->get_override( "getMotionMatrix" ) )
            return func_getMotionMatrix(  );
        else{
            return this->osgManipulator::Scale2DCommand::getMotionMatrix(  );
        }
    }
    
    ::osg::Matrix default_getMotionMatrix(  ) const  {
        return osgManipulator::Scale2DCommand::getMotionMatrix( );
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

void register_Scale2DCommand_class(){

    bp::class_< Scale2DCommand_wrapper, bp::bases< osgManipulator::MotionCommand >, osg::ref_ptr< ::osgManipulator::Scale2DCommand >, boost::noncopyable >( "Scale2DCommand", "\n Command for 2D scaling.\n", bp::no_init )    
        .def( bp::init< >("\n Command for 2D scaling.\n") )    
        .def( 
            "accept"
            , (void (*)( ::osgManipulator::Scale2DCommand &,::osgManipulator::Constraint & ))( &Scale2DCommand_wrapper::default_accept_289ad61f697b095e2efb0253d5ca6ee7 )
            , ( bp::arg("inst"), bp::arg("constraint") ) )    
        .def( 
            "accept"
            , (void ( ::osgManipulator::Scale2DCommand::* )( ::osgManipulator::DraggerCallback & ))(&::osgManipulator::Scale2DCommand::accept)
            , (void ( Scale2DCommand_wrapper::* )( ::osgManipulator::DraggerCallback & ))(&Scale2DCommand_wrapper::default_accept)
            , ( bp::arg("callback") ) )    
        .def( 
            "createCommandInverse"
            , (::osgManipulator::MotionCommand * ( ::osgManipulator::Scale2DCommand::* )(  ))(&::osgManipulator::Scale2DCommand::createCommandInverse)
            , (::osgManipulator::MotionCommand * ( Scale2DCommand_wrapper::* )(  ))(&Scale2DCommand_wrapper::default_createCommandInverse)
            , bp::return_internal_reference< >() )    
        .def( 
            "getMinScale"
            , (::osg::Vec2d const & ( ::osgManipulator::Scale2DCommand::* )(  )const)( &::osgManipulator::Scale2DCommand::getMinScale )
            , bp::return_internal_reference< >() )    
        .def( 
            "getMotionMatrix"
            , (::osg::Matrix ( ::osgManipulator::Scale2DCommand::* )(  )const)(&::osgManipulator::Scale2DCommand::getMotionMatrix)
            , (::osg::Matrix ( Scale2DCommand_wrapper::* )(  )const)(&Scale2DCommand_wrapper::default_getMotionMatrix) )    
        .def( 
            "getReferencePoint"
            , (::osg::Vec2d const & ( ::osgManipulator::Scale2DCommand::* )(  )const)( &::osgManipulator::Scale2DCommand::getReferencePoint )
            , bp::return_internal_reference< >() )    
        .def( 
            "getScale"
            , (::osg::Vec2d const & ( ::osgManipulator::Scale2DCommand::* )(  )const)( &::osgManipulator::Scale2DCommand::getScale )
            , bp::return_internal_reference< >() )    
        .def( 
            "getScaleCenter"
            , (::osg::Vec2d const & ( ::osgManipulator::Scale2DCommand::* )(  )const)( &::osgManipulator::Scale2DCommand::getScaleCenter )
            , bp::return_internal_reference< >() )    
        .def( 
            "setMinScale"
            , (void ( ::osgManipulator::Scale2DCommand::* )( ::osg::Vec2d const & ))( &::osgManipulator::Scale2DCommand::setMinScale )
            , ( bp::arg("min") ) )    
        .def( 
            "setReferencePoint"
            , (void ( ::osgManipulator::Scale2DCommand::* )( ::osg::Vec2d const & ))( &::osgManipulator::Scale2DCommand::setReferencePoint )
            , ( bp::arg("rp") )
            , " ReferencePoint is used only for snapping." )    
        .def( 
            "setScale"
            , (void ( ::osgManipulator::Scale2DCommand::* )( ::osg::Vec2d const & ))( &::osgManipulator::Scale2DCommand::setScale )
            , ( bp::arg("s") ) )    
        .def( 
            "setScaleCenter"
            , (void ( ::osgManipulator::Scale2DCommand::* )( ::osg::Vec2d const & ))( &::osgManipulator::Scale2DCommand::setScaleCenter )
            , ( bp::arg("center") ) );

}
