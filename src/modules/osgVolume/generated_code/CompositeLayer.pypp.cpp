// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgvolume.h"
#include "wrap_referenced.h"
#include "compositelayer.pypp.hpp"

namespace bp = boost::python;

struct CompositeLayer_wrapper : osgVolume::CompositeLayer, bp::wrapper< osgVolume::CompositeLayer > {

    CompositeLayer_wrapper( )
    : osgVolume::CompositeLayer( )
      , bp::wrapper< osgVolume::CompositeLayer >(){
        // null constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgVolume::CompositeLayer::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgVolume::CompositeLayer::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgVolume::CompositeLayer::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgVolume::CompositeLayer::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgVolume::CompositeLayer::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgVolume::CompositeLayer::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgVolume::CompositeLayer::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgVolume::CompositeLayer::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgVolume::CompositeLayer::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgVolume::CompositeLayer::libraryName( );
    }

    virtual bool requiresUpdateTraversal(  ) const  {
        if( bp::override func_requiresUpdateTraversal = this->get_override( "requiresUpdateTraversal" ) )
            return func_requiresUpdateTraversal(  );
        else{
            return this->osgVolume::CompositeLayer::requiresUpdateTraversal(  );
        }
    }
    
    bool default_requiresUpdateTraversal(  ) const  {
        return osgVolume::CompositeLayer::requiresUpdateTraversal( );
    }

    virtual void update( ::osg::NodeVisitor & arg0 ) {
        if( bp::override func_update = this->get_override( "update" ) )
            func_update( boost::ref(arg0) );
        else{
            this->osgVolume::CompositeLayer::update( boost::ref(arg0) );
        }
    }
    
    void default_update( ::osg::NodeVisitor & arg0 ) {
        osgVolume::CompositeLayer::update( boost::ref(arg0) );
    }

    virtual ::osg::BoundingSphere computeBound(  ) const  {
        if( bp::override func_computeBound = this->get_override( "computeBound" ) )
            return func_computeBound(  );
        else{
            return this->osgVolume::Layer::computeBound(  );
        }
    }
    
    ::osg::BoundingSphere default_computeBound(  ) const  {
        return osgVolume::Layer::computeBound( );
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

    virtual void dirty(  ) {
        if( bp::override func_dirty = this->get_override( "dirty" ) )
            func_dirty(  );
        else{
            this->osgVolume::Layer::dirty(  );
        }
    }
    
    void default_dirty(  ) {
        osgVolume::Layer::dirty( );
    }

    virtual ::osg::Image * getImage(  ) {
        if( bp::override func_getImage = this->get_override( "getImage" ) )
            return func_getImage(  );
        else{
            return this->osgVolume::Layer::getImage(  );
        }
    }
    
    ::osg::Image * default_getImage(  ) {
        return osgVolume::Layer::getImage( );
    }

    virtual ::osg::Image const * getImage(  ) const  {
        if( bp::override func_getImage = this->get_override( "getImage" ) )
            return func_getImage(  );
        else{
            return this->osgVolume::Layer::getImage(  );
        }
    }
    
    ::osg::Image const * default_getImage(  ) const  {
        return osgVolume::Layer::getImage( );
    }

    virtual unsigned int getModifiedCount(  ) const  {
        if( bp::override func_getModifiedCount = this->get_override( "getModifiedCount" ) )
            return func_getModifiedCount(  );
        else{
            return this->osgVolume::Layer::getModifiedCount(  );
        }
    }
    
    unsigned int default_getModifiedCount(  ) const  {
        return osgVolume::Layer::getModifiedCount( );
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

    virtual void setFileName( ::std::string const & filename ) {
        if( bp::override func_setFileName = this->get_override( "setFileName" ) )
            func_setFileName( filename );
        else{
            this->osgVolume::Layer::setFileName( filename );
        }
    }
    
    void default_setFileName( ::std::string const & filename ) {
        osgVolume::Layer::setFileName( filename );
    }

    virtual void setModifiedCount( unsigned int arg0 ) {
        if( bp::override func_setModifiedCount = this->get_override( "setModifiedCount" ) )
            func_setModifiedCount( arg0 );
        else{
            this->osgVolume::Layer::setModifiedCount( arg0 );
        }
    }
    
    void default_setModifiedCount( unsigned int arg0 ) {
        osgVolume::Layer::setModifiedCount( arg0 );
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

void register_CompositeLayer_class(){

    bp::class_< CompositeLayer_wrapper, bp::bases< osgVolume::Layer >, osg::ref_ptr< CompositeLayer_wrapper >, boost::noncopyable >( "CompositeLayer", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "addLayer"
            , (void ( ::osgVolume::CompositeLayer::* )( ::osgVolume::Layer * ))( &::osgVolume::CompositeLayer::addLayer )
            , ( bp::arg("layer") ) )    
        .def( 
            "className"
            , (char const * ( ::osgVolume::CompositeLayer::* )(  )const)(&::osgVolume::CompositeLayer::className)
            , (char const * ( CompositeLayer_wrapper::* )(  )const)(&CompositeLayer_wrapper::default_className) )    
        .def( 
            "clear"
            , (void ( ::osgVolume::CompositeLayer::* )(  ))( &::osgVolume::CompositeLayer::clear ) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgVolume::CompositeLayer::* )( ::osg::CopyOp const & )const)(&::osgVolume::CompositeLayer::clone)
            , (::osg::Object * ( CompositeLayer_wrapper::* )( ::osg::CopyOp const & )const)(&CompositeLayer_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgVolume::CompositeLayer::* )(  )const)(&::osgVolume::CompositeLayer::cloneType)
            , (::osg::Object * ( CompositeLayer_wrapper::* )(  )const)(&CompositeLayer_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "getFileName"
            , (::std::string const & ( ::osgVolume::CompositeLayer::* )( unsigned int )const)( &::osgVolume::CompositeLayer::getFileName )
            , ( bp::arg("i") )
            , bp::return_value_policy< bp::copy_const_reference >() )    
        .def( 
            "getLayer"
            , (::osgVolume::Layer * ( ::osgVolume::CompositeLayer::* )( unsigned int ))( &::osgVolume::CompositeLayer::getLayer )
            , ( bp::arg("i") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getLayer"
            , (::osgVolume::Layer const * ( ::osgVolume::CompositeLayer::* )( unsigned int )const)( &::osgVolume::CompositeLayer::getLayer )
            , ( bp::arg("i") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getNumLayers"
            , (unsigned int ( ::osgVolume::CompositeLayer::* )(  )const)( &::osgVolume::CompositeLayer::getNumLayers ) )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgVolume::CompositeLayer::* )( ::osg::Object const * )const)(&::osgVolume::CompositeLayer::isSameKindAs)
            , (bool ( CompositeLayer_wrapper::* )( ::osg::Object const * )const)(&CompositeLayer_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgVolume::CompositeLayer::* )(  )const)(&::osgVolume::CompositeLayer::libraryName)
            , (char const * ( CompositeLayer_wrapper::* )(  )const)(&CompositeLayer_wrapper::default_libraryName) )    
        .def( 
            "removeLayer"
            , (void ( ::osgVolume::CompositeLayer::* )( unsigned int ))( &::osgVolume::CompositeLayer::removeLayer )
            , ( bp::arg("i") ) )    
        .def( 
            "requiresUpdateTraversal"
            , (bool ( ::osgVolume::CompositeLayer::* )(  )const)(&::osgVolume::CompositeLayer::requiresUpdateTraversal)
            , (bool ( CompositeLayer_wrapper::* )(  )const)(&CompositeLayer_wrapper::default_requiresUpdateTraversal) )    
        .def( 
            "setFileName"
            , (void ( ::osgVolume::CompositeLayer::* )( unsigned int,::std::string const & ))( &::osgVolume::CompositeLayer::setFileName )
            , ( bp::arg("i"), bp::arg("filename") ) )    
        .def( 
            "setLayer"
            , (void ( ::osgVolume::CompositeLayer::* )( unsigned int,::osgVolume::Layer * ))( &::osgVolume::CompositeLayer::setLayer )
            , ( bp::arg("i"), bp::arg("layer") ) )    
        .def( 
            "update"
            , (void ( ::osgVolume::CompositeLayer::* )( ::osg::NodeVisitor & ))(&::osgVolume::CompositeLayer::update)
            , (void ( CompositeLayer_wrapper::* )( ::osg::NodeVisitor & ))(&CompositeLayer_wrapper::default_update)
            , ( bp::arg("arg0") ) )    
        .def( 
            "computeBound"
            , (::osg::BoundingSphere ( ::osgVolume::Layer::* )(  )const)(&::osgVolume::Layer::computeBound)
            , (::osg::BoundingSphere ( CompositeLayer_wrapper::* )(  )const)(&CompositeLayer_wrapper::default_computeBound) )    
        .def( 
            "dirty"
            , (void ( ::osgVolume::Layer::* )(  ))(&::osgVolume::Layer::dirty)
            , (void ( CompositeLayer_wrapper::* )(  ))(&CompositeLayer_wrapper::default_dirty) )    
        .def( 
            "getFileName"
            , (::std::string const & ( ::osgVolume::Layer::* )(  )const)(&::osgVolume::Layer::getFileName)
            , bp::return_value_policy< bp::copy_const_reference >() )    
        .def( 
            "getImage"
            , (::osg::Image * ( ::osgVolume::Layer::* )(  ))(&::osgVolume::Layer::getImage)
            , (::osg::Image * ( CompositeLayer_wrapper::* )(  ))(&CompositeLayer_wrapper::default_getImage)
            , bp::return_internal_reference< >() )    
        .def( 
            "getImage"
            , (::osg::Image const * ( ::osgVolume::Layer::* )(  )const)(&::osgVolume::Layer::getImage)
            , (::osg::Image const * ( CompositeLayer_wrapper::* )(  )const)(&CompositeLayer_wrapper::default_getImage)
            , bp::return_internal_reference< >() )    
        .def( 
            "getModifiedCount"
            , (unsigned int ( ::osgVolume::Layer::* )(  )const)(&::osgVolume::Layer::getModifiedCount)
            , (unsigned int ( CompositeLayer_wrapper::* )(  )const)(&CompositeLayer_wrapper::default_getModifiedCount) )    
        .def( 
            "setFileName"
            , (void ( ::osgVolume::Layer::* )( ::std::string const & ))(&::osgVolume::Layer::setFileName)
            , (void ( CompositeLayer_wrapper::* )( ::std::string const & ))(&CompositeLayer_wrapper::default_setFileName)
            , ( bp::arg("filename") ) )    
        .def( 
            "setModifiedCount"
            , (void ( ::osgVolume::Layer::* )( unsigned int ))(&::osgVolume::Layer::setModifiedCount)
            , (void ( CompositeLayer_wrapper::* )( unsigned int ))(&CompositeLayer_wrapper::default_setModifiedCount)
            , ( bp::arg("arg0") ) );

}
