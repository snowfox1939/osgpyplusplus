// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "wrap_osgmanipulator.h"
#include "wrap_referenced.h"
#include "translateinplanecommand.pypp.hpp"

namespace bp = boost::python;

struct TranslateInPlaneCommand_wrapper : osgManipulator::TranslateInPlaneCommand, bp::wrapper< osgManipulator::TranslateInPlaneCommand > {

    TranslateInPlaneCommand_wrapper( )
    : osgManipulator::TranslateInPlaneCommand( )
      , bp::wrapper< osgManipulator::TranslateInPlaneCommand >(){
        // null constructor
    
    }

    TranslateInPlaneCommand_wrapper(::osg::Plane const & plane )
    : osgManipulator::TranslateInPlaneCommand( boost::ref(plane) )
      , bp::wrapper< osgManipulator::TranslateInPlaneCommand >(){
        // constructor
    
    }

    virtual void accept( ::osgManipulator::Constraint const & constraint ) {
        namespace bpl = boost::python;
        if( bpl::override func_accept = this->get_override( "accept" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_accept.ptr(), constraint );
        }
        else{
            osgManipulator::TranslateInPlaneCommand::accept( boost::ref(constraint) );
        }
    }
    
    static void default_accept_11e21d72b817f8e19dbdc9e6c9a693ae( ::osgManipulator::TranslateInPlaneCommand & inst, ::osgManipulator::Constraint & constraint ){
        if( dynamic_cast< TranslateInPlaneCommand_wrapper * >( boost::addressof( inst ) ) ){
            inst.::osgManipulator::TranslateInPlaneCommand::accept(constraint);
        }
        else{
            inst.accept(constraint);
        }
    }

    virtual void accept( ::osgManipulator::DraggerCallback & callback ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(callback) );
        else{
            this->osgManipulator::TranslateInPlaneCommand::accept( boost::ref(callback) );
        }
    }
    
    void default_accept( ::osgManipulator::DraggerCallback & callback ) {
        osgManipulator::TranslateInPlaneCommand::accept( boost::ref(callback) );
    }

    virtual ::osgManipulator::MotionCommand * createCommandInverse(  ) {
        if( bp::override func_createCommandInverse = this->get_override( "createCommandInverse" ) )
            return func_createCommandInverse(  );
        else{
            return this->osgManipulator::TranslateInPlaneCommand::createCommandInverse(  );
        }
    }
    
    ::osgManipulator::MotionCommand * default_createCommandInverse(  ) {
        return osgManipulator::TranslateInPlaneCommand::createCommandInverse( );
    }

    virtual ::osg::Matrix getMotionMatrix(  ) const  {
        if( bp::override func_getMotionMatrix = this->get_override( "getMotionMatrix" ) )
            return func_getMotionMatrix(  );
        else{
            return this->osgManipulator::TranslateInPlaneCommand::getMotionMatrix(  );
        }
    }
    
    ::osg::Matrix default_getMotionMatrix(  ) const  {
        return osgManipulator::TranslateInPlaneCommand::getMotionMatrix( );
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

void register_TranslateInPlaneCommand_class(){

    { //::osgManipulator::TranslateInPlaneCommand
        typedef bp::class_< TranslateInPlaneCommand_wrapper, bp::bases< osgManipulator::MotionCommand >, osg::ref_ptr< ::osgManipulator::TranslateInPlaneCommand >, boost::noncopyable > TranslateInPlaneCommand_exposer_t;
        TranslateInPlaneCommand_exposer_t TranslateInPlaneCommand_exposer = TranslateInPlaneCommand_exposer_t( "TranslateInPlaneCommand", "\n Command for translating in a plane.\n", bp::no_init );
        bp::scope TranslateInPlaneCommand_scope( TranslateInPlaneCommand_exposer );
        TranslateInPlaneCommand_exposer.def( bp::init< >("\n Command for translating in a plane.\n") );
        TranslateInPlaneCommand_exposer.def( bp::init< osg::Plane const & >(( bp::arg("plane") )) );
        bp::implicitly_convertible< osg::Plane const &, osgManipulator::TranslateInPlaneCommand >();
        { //::osgManipulator::TranslateInPlaneCommand::accept
        
            typedef void ( *default_accept_function_type )( ::osgManipulator::TranslateInPlaneCommand &,::osgManipulator::Constraint & );
            
            TranslateInPlaneCommand_exposer.def( 
                "accept"
                , default_accept_function_type( &TranslateInPlaneCommand_wrapper::default_accept_11e21d72b817f8e19dbdc9e6c9a693ae )
                , ( bp::arg("inst"), bp::arg("constraint") ) );
        
        }
        { //::osgManipulator::TranslateInPlaneCommand::accept
        
            typedef void ( ::osgManipulator::TranslateInPlaneCommand::*accept_function_type)( ::osgManipulator::DraggerCallback & ) ;
            typedef void ( TranslateInPlaneCommand_wrapper::*default_accept_function_type)( ::osgManipulator::DraggerCallback & ) ;
            
            TranslateInPlaneCommand_exposer.def( 
                "accept"
                , accept_function_type(&::osgManipulator::TranslateInPlaneCommand::accept)
                , default_accept_function_type(&TranslateInPlaneCommand_wrapper::default_accept)
                , ( bp::arg("callback") ) );
        
        }
        { //::osgManipulator::TranslateInPlaneCommand::createCommandInverse
        
            typedef ::osgManipulator::MotionCommand * ( ::osgManipulator::TranslateInPlaneCommand::*createCommandInverse_function_type)(  ) ;
            typedef ::osgManipulator::MotionCommand * ( TranslateInPlaneCommand_wrapper::*default_createCommandInverse_function_type)(  ) ;
            
            TranslateInPlaneCommand_exposer.def( 
                "createCommandInverse"
                , createCommandInverse_function_type(&::osgManipulator::TranslateInPlaneCommand::createCommandInverse)
                , default_createCommandInverse_function_type(&TranslateInPlaneCommand_wrapper::default_createCommandInverse)
                , bp::return_internal_reference< >() );
        
        }
        { //::osgManipulator::TranslateInPlaneCommand::getMotionMatrix
        
            typedef ::osg::Matrix ( ::osgManipulator::TranslateInPlaneCommand::*getMotionMatrix_function_type)(  ) const;
            typedef ::osg::Matrix ( TranslateInPlaneCommand_wrapper::*default_getMotionMatrix_function_type)(  ) const;
            
            TranslateInPlaneCommand_exposer.def( 
                "getMotionMatrix"
                , getMotionMatrix_function_type(&::osgManipulator::TranslateInPlaneCommand::getMotionMatrix)
                , default_getMotionMatrix_function_type(&TranslateInPlaneCommand_wrapper::default_getMotionMatrix) );
        
        }
        { //::osgManipulator::TranslateInPlaneCommand::getPlane
        
            typedef ::osg::Plane const & ( ::osgManipulator::TranslateInPlaneCommand::*getPlane_function_type)(  ) const;
            
            TranslateInPlaneCommand_exposer.def( 
                "getPlane"
                , getPlane_function_type( &::osgManipulator::TranslateInPlaneCommand::getPlane )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgManipulator::TranslateInPlaneCommand::getReferencePoint
        
            typedef ::osg::Vec3d const & ( ::osgManipulator::TranslateInPlaneCommand::*getReferencePoint_function_type)(  ) const;
            
            TranslateInPlaneCommand_exposer.def( 
                "getReferencePoint"
                , getReferencePoint_function_type( &::osgManipulator::TranslateInPlaneCommand::getReferencePoint )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgManipulator::TranslateInPlaneCommand::getTranslation
        
            typedef ::osg::Vec3d const & ( ::osgManipulator::TranslateInPlaneCommand::*getTranslation_function_type)(  ) const;
            
            TranslateInPlaneCommand_exposer.def( 
                "getTranslation"
                , getTranslation_function_type( &::osgManipulator::TranslateInPlaneCommand::getTranslation )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgManipulator::TranslateInPlaneCommand::setPlane
        
            typedef void ( ::osgManipulator::TranslateInPlaneCommand::*setPlane_function_type)( ::osg::Plane const & ) ;
            
            TranslateInPlaneCommand_exposer.def( 
                "setPlane"
                , setPlane_function_type( &::osgManipulator::TranslateInPlaneCommand::setPlane )
                , ( bp::arg("plane") ) );
        
        }
        { //::osgManipulator::TranslateInPlaneCommand::setReferencePoint
        
            typedef void ( ::osgManipulator::TranslateInPlaneCommand::*setReferencePoint_function_type)( ::osg::Vec3d const & ) ;
            
            TranslateInPlaneCommand_exposer.def( 
                "setReferencePoint"
                , setReferencePoint_function_type( &::osgManipulator::TranslateInPlaneCommand::setReferencePoint )
                , ( bp::arg("rp") )
                , " ReferencePoint is used only for snapping." );
        
        }
        { //::osgManipulator::TranslateInPlaneCommand::setTranslation
        
            typedef void ( ::osgManipulator::TranslateInPlaneCommand::*setTranslation_function_type)( ::osg::Vec3d const & ) ;
            
            TranslateInPlaneCommand_exposer.def( 
                "setTranslation"
                , setTranslation_function_type( &::osgManipulator::TranslateInPlaneCommand::setTranslation )
                , ( bp::arg("t") ) );
        
        }
    }

}
