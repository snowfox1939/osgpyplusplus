// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "convexplanaroccluder.pypp.hpp"

namespace bp = boost::python;

struct ConvexPlanarOccluder_wrapper : osg::ConvexPlanarOccluder, bp::wrapper< osg::ConvexPlanarOccluder > {

    ConvexPlanarOccluder_wrapper( )
    : osg::ConvexPlanarOccluder( )
      , bp::wrapper< osg::ConvexPlanarOccluder >(){
        // null constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::ConvexPlanarOccluder::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::ConvexPlanarOccluder::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::ConvexPlanarOccluder::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::ConvexPlanarOccluder::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::ConvexPlanarOccluder::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::ConvexPlanarOccluder::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::ConvexPlanarOccluder::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::ConvexPlanarOccluder::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::ConvexPlanarOccluder::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::ConvexPlanarOccluder::libraryName( );
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

void register_ConvexPlanarOccluder_class(){

    bp::class_< ConvexPlanarOccluder_wrapper, bp::bases< osg::Object >, osg::ref_ptr< ::osg::ConvexPlanarOccluder >, boost::noncopyable >( "ConvexPlanarOccluder", "\n A class for representing convex clipping volumes made up of several ConvexPlanarPolygon.\n", bp::no_init )    
        .def( bp::init< >("\n A class for representing convex clipping volumes made up of several ConvexPlanarPolygon.\n") )    
        .def( 
            "addHole"
            , (void ( ::osg::ConvexPlanarOccluder::* )( ::osg::ConvexPlanarPolygon const & ))( &::osg::ConvexPlanarOccluder::addHole )
            , ( bp::arg("cpp") ) )    
        .def( 
            "className"
            , (char const * ( ::osg::ConvexPlanarOccluder::* )(  )const)(&::osg::ConvexPlanarOccluder::className)
            , (char const * ( ConvexPlanarOccluder_wrapper::* )(  )const)(&ConvexPlanarOccluder_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osg::ConvexPlanarOccluder::* )( ::osg::CopyOp const & )const)(&::osg::ConvexPlanarOccluder::clone)
            , (::osg::Object * ( ConvexPlanarOccluder_wrapper::* )( ::osg::CopyOp const & )const)(&ConvexPlanarOccluder_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osg::ConvexPlanarOccluder::* )(  )const)(&::osg::ConvexPlanarOccluder::cloneType)
            , (::osg::Object * ( ConvexPlanarOccluder_wrapper::* )(  )const)(&ConvexPlanarOccluder_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "getHoleList"
            , (::std::vector< osg::ConvexPlanarPolygon > & ( ::osg::ConvexPlanarOccluder::* )(  ))( &::osg::ConvexPlanarOccluder::getHoleList )
            , bp::return_internal_reference< >() )    
        .def( 
            "getHoleList"
            , (::std::vector< osg::ConvexPlanarPolygon > const & ( ::osg::ConvexPlanarOccluder::* )(  )const)( &::osg::ConvexPlanarOccluder::getHoleList )
            , bp::return_internal_reference< >() )    
        .def( 
            "getOccluder"
            , (::osg::ConvexPlanarPolygon & ( ::osg::ConvexPlanarOccluder::* )(  ))( &::osg::ConvexPlanarOccluder::getOccluder )
            , bp::return_internal_reference< >() )    
        .def( 
            "getOccluder"
            , (::osg::ConvexPlanarPolygon const & ( ::osg::ConvexPlanarOccluder::* )(  )const)( &::osg::ConvexPlanarOccluder::getOccluder )
            , bp::return_internal_reference< >() )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osg::ConvexPlanarOccluder::* )( ::osg::Object const * )const)(&::osg::ConvexPlanarOccluder::isSameKindAs)
            , (bool ( ConvexPlanarOccluder_wrapper::* )( ::osg::Object const * )const)(&ConvexPlanarOccluder_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osg::ConvexPlanarOccluder::* )(  )const)(&::osg::ConvexPlanarOccluder::libraryName)
            , (char const * ( ConvexPlanarOccluder_wrapper::* )(  )const)(&ConvexPlanarOccluder_wrapper::default_libraryName) )    
        .def( 
            "setHoleList"
            , (void ( ::osg::ConvexPlanarOccluder::* )( ::std::vector< osg::ConvexPlanarPolygon > const & ))( &::osg::ConvexPlanarOccluder::setHoleList )
            , ( bp::arg("holeList") ) )    
        .def( 
            "setOccluder"
            , (void ( ::osg::ConvexPlanarOccluder::* )( ::osg::ConvexPlanarPolygon const & ))( &::osg::ConvexPlanarOccluder::setOccluder )
            , ( bp::arg("cpp") ) )    
        .def( 
            "computeDataVariance"
            , (void ( ::osg::Object::* )(  ))(&::osg::Object::computeDataVariance)
            , (void ( ConvexPlanarOccluder_wrapper::* )(  ))(&ConvexPlanarOccluder_wrapper::default_computeDataVariance) )    
        .def( 
            "getUserData"
            , (::osg::Referenced * ( ::osg::Object::* )(  ))(&::osg::Object::getUserData)
            , (::osg::Referenced * ( ConvexPlanarOccluder_wrapper::* )(  ))(&ConvexPlanarOccluder_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "getUserData"
            , (::osg::Referenced const * ( ::osg::Object::* )(  )const)(&::osg::Object::getUserData)
            , (::osg::Referenced const * ( ConvexPlanarOccluder_wrapper::* )(  )const)(&ConvexPlanarOccluder_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "resizeGLObjectBuffers"
            , (void ( ::osg::Object::* )( unsigned int ))(&::osg::Object::resizeGLObjectBuffers)
            , (void ( ConvexPlanarOccluder_wrapper::* )( unsigned int ))(&ConvexPlanarOccluder_wrapper::default_resizeGLObjectBuffers)
            , ( bp::arg("arg0") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( ::std::string const & ))(&::osg::Object::setName)
            , (void ( ConvexPlanarOccluder_wrapper::* )( ::std::string const & ))(&ConvexPlanarOccluder_wrapper::default_setName)
            , ( bp::arg("name") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( char const * ))( &::osg::Object::setName )
            , ( bp::arg("name") )
            , " Set the name of object using a C style string." )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Object::* )( bool ))(&::osg::Object::setThreadSafeRefUnref)
            , (void ( ConvexPlanarOccluder_wrapper::* )( bool ))(&ConvexPlanarOccluder_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) )    
        .def( 
            "setUserData"
            , (void ( ::osg::Object::* )( ::osg::Referenced * ))(&::osg::Object::setUserData)
            , (void ( ConvexPlanarOccluder_wrapper::* )( ::osg::Referenced * ))(&ConvexPlanarOccluder_wrapper::default_setUserData)
            , ( bp::arg("obj") ) );

}
