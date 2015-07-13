// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgwidget.h"
#include "wrap_referenced.h"
#include "vncclient.pypp.hpp"

namespace bp = boost::python;

struct VncClient_wrapper : osgWidget::VncClient, bp::wrapper< osgWidget::VncClient > {

    VncClient_wrapper( )
    : osgWidget::VncClient( )
      , bp::wrapper< osgWidget::VncClient >(){
        // null constructor
    
    }

    VncClient_wrapper(::std::string const & hostname, ::osgWidget::GeometryHints const & hints=osgWidget::GeometryHints() )
    : osgWidget::VncClient( hostname, boost::ref(hints) )
      , bp::wrapper< osgWidget::VncClient >(){
        // constructor
    
    }

    virtual void accept( ::osg::NodeVisitor & nv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(nv) );
        else{
            this->osg::Geode::accept( boost::ref(nv) );
        }
    }
    
    void default_accept( ::osg::NodeVisitor & nv ) {
        osg::Geode::accept( boost::ref(nv) );
    }

    virtual bool addDrawable( ::osg::Drawable * drawable ) {
        if( bp::override func_addDrawable = this->get_override( "addDrawable" ) )
            return func_addDrawable( boost::python::ptr(drawable) );
        else{
            return this->osg::Geode::addDrawable( boost::python::ptr(drawable) );
        }
    }
    
    bool default_addDrawable( ::osg::Drawable * drawable ) {
        return osg::Geode::addDrawable( boost::python::ptr(drawable) );
    }

    virtual ::osg::Camera * asCamera(  ) {
        if( bp::override func_asCamera = this->get_override( "asCamera" ) )
            return func_asCamera(  );
        else{
            return this->osg::Node::asCamera(  );
        }
    }
    
    ::osg::Camera * default_asCamera(  ) {
        return osg::Node::asCamera( );
    }

    virtual ::osg::Camera const * asCamera(  ) const  {
        if( bp::override func_asCamera = this->get_override( "asCamera" ) )
            return func_asCamera(  );
        else{
            return this->osg::Node::asCamera(  );
        }
    }
    
    ::osg::Camera const * default_asCamera(  ) const  {
        return osg::Node::asCamera( );
    }

    virtual ::osg::Geode * asGeode(  ) {
        if( bp::override func_asGeode = this->get_override( "asGeode" ) )
            return func_asGeode(  );
        else{
            return this->osg::Geode::asGeode(  );
        }
    }
    
    ::osg::Geode * default_asGeode(  ) {
        return osg::Geode::asGeode( );
    }

    virtual ::osg::Geode const * asGeode(  ) const  {
        if( bp::override func_asGeode = this->get_override( "asGeode" ) )
            return func_asGeode(  );
        else{
            return this->osg::Geode::asGeode(  );
        }
    }
    
    ::osg::Geode const * default_asGeode(  ) const  {
        return osg::Geode::asGeode( );
    }

    virtual ::osg::Group * asGroup(  ) {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Node::asGroup(  );
        }
    }
    
    ::osg::Group * default_asGroup(  ) {
        return osg::Node::asGroup( );
    }

    virtual ::osg::Group const * asGroup(  ) const  {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Node::asGroup(  );
        }
    }
    
    ::osg::Group const * default_asGroup(  ) const  {
        return osg::Node::asGroup( );
    }

    virtual ::osg::Switch * asSwitch(  ) {
        if( bp::override func_asSwitch = this->get_override( "asSwitch" ) )
            return func_asSwitch(  );
        else{
            return this->osg::Node::asSwitch(  );
        }
    }
    
    ::osg::Switch * default_asSwitch(  ) {
        return osg::Node::asSwitch( );
    }

    virtual ::osg::Switch const * asSwitch(  ) const  {
        if( bp::override func_asSwitch = this->get_override( "asSwitch" ) )
            return func_asSwitch(  );
        else{
            return this->osg::Node::asSwitch(  );
        }
    }
    
    ::osg::Switch const * default_asSwitch(  ) const  {
        return osg::Node::asSwitch( );
    }

    virtual ::osg::Transform * asTransform(  ) {
        if( bp::override func_asTransform = this->get_override( "asTransform" ) )
            return func_asTransform(  );
        else{
            return this->osg::Node::asTransform(  );
        }
    }
    
    ::osg::Transform * default_asTransform(  ) {
        return osg::Node::asTransform( );
    }

    virtual ::osg::Transform const * asTransform(  ) const  {
        if( bp::override func_asTransform = this->get_override( "asTransform" ) )
            return func_asTransform(  );
        else{
            return this->osg::Node::asTransform(  );
        }
    }
    
    ::osg::Transform const * default_asTransform(  ) const  {
        return osg::Node::asTransform( );
    }

    virtual void ascend( ::osg::NodeVisitor & nv ) {
        if( bp::override func_ascend = this->get_override( "ascend" ) )
            func_ascend( boost::ref(nv) );
        else{
            this->osg::Node::ascend( boost::ref(nv) );
        }
    }
    
    void default_ascend( ::osg::NodeVisitor & nv ) {
        osg::Node::ascend( boost::ref(nv) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::Geode::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::Geode::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::Geode::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::Geode::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::Geode::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::Geode::cloneType( );
    }

    virtual ::osg::BoundingSphere computeBound(  ) const  {
        if( bp::override func_computeBound = this->get_override( "computeBound" ) )
            return func_computeBound(  );
        else{
            return this->osg::Geode::computeBound(  );
        }
    }
    
    ::osg::BoundingSphere default_computeBound(  ) const  {
        return osg::Geode::computeBound( );
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

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::Geode::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::Geode::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::Geode::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::Geode::libraryName( );
    }

    virtual bool removeDrawable( ::osg::Drawable * drawable ) {
        if( bp::override func_removeDrawable = this->get_override( "removeDrawable" ) )
            return func_removeDrawable( boost::python::ptr(drawable) );
        else{
            return this->osg::Geode::removeDrawable( boost::python::ptr(drawable) );
        }
    }
    
    bool default_removeDrawable( ::osg::Drawable * drawable ) {
        return osg::Geode::removeDrawable( boost::python::ptr(drawable) );
    }

    virtual bool removeDrawables( unsigned int i, unsigned int numDrawablesToRemove=1 ) {
        if( bp::override func_removeDrawables = this->get_override( "removeDrawables" ) )
            return func_removeDrawables( i, numDrawablesToRemove );
        else{
            return this->osg::Geode::removeDrawables( i, numDrawablesToRemove );
        }
    }
    
    bool default_removeDrawables( unsigned int i, unsigned int numDrawablesToRemove=1 ) {
        return osg::Geode::removeDrawables( i, numDrawablesToRemove );
    }

    virtual bool replaceDrawable( ::osg::Drawable * origDraw, ::osg::Drawable * newDraw ) {
        if( bp::override func_replaceDrawable = this->get_override( "replaceDrawable" ) )
            return func_replaceDrawable( boost::python::ptr(origDraw), boost::python::ptr(newDraw) );
        else{
            return this->osg::Geode::replaceDrawable( boost::python::ptr(origDraw), boost::python::ptr(newDraw) );
        }
    }
    
    bool default_replaceDrawable( ::osg::Drawable * origDraw, ::osg::Drawable * newDraw ) {
        return osg::Geode::replaceDrawable( boost::python::ptr(origDraw), boost::python::ptr(newDraw) );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::Geode::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::Geode::resizeGLObjectBuffers( maxSize );
    }

    virtual bool setDrawable( unsigned int i, ::osg::Drawable * drawable ) {
        if( bp::override func_setDrawable = this->get_override( "setDrawable" ) )
            return func_setDrawable( i, boost::python::ptr(drawable) );
        else{
            return this->osg::Geode::setDrawable( i, boost::python::ptr(drawable) );
        }
    }
    
    bool default_setDrawable( unsigned int i, ::osg::Drawable * drawable ) {
        return osg::Geode::setDrawable( i, boost::python::ptr(drawable) );
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
            this->osg::Geode::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Geode::setThreadSafeRefUnref( threadSafe );
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

    virtual void traverse( ::osg::NodeVisitor & arg0 ) {
        if( bp::override func_traverse = this->get_override( "traverse" ) )
            func_traverse( boost::ref(arg0) );
        else{
            this->osg::Node::traverse( boost::ref(arg0) );
        }
    }
    
    void default_traverse( ::osg::NodeVisitor & arg0 ) {
        osg::Node::traverse( boost::ref(arg0) );
    }

};

void register_VncClient_class(){

    { //::osgWidget::VncClient
        typedef bp::class_< VncClient_wrapper, bp::bases< ::osg::Geode >, osg::ref_ptr< ::osgWidget::VncClient >, boost::noncopyable > VncClient_exposer_t;
        VncClient_exposer_t VncClient_exposer = VncClient_exposer_t( "VncClient", "\n Convinience Vnc Client class that provides a interactive quad that can be placed directly in the scene.\n", bp::init< >("\n Convinience Vnc Client class that provides a interactive quad that can be placed directly in the scene.\n") );
        bp::scope VncClient_scope( VncClient_exposer );
        VncClient_exposer.def( bp::init< std::string const &, bp::optional< osgWidget::GeometryHints const & > >(( bp::arg("hostname"), bp::arg("hints")=osgWidget::GeometryHints() ), "\n Convinience Vnc Client class that provides a interactive quad that can be placed directly in the scene.\n") );
        bp::implicitly_convertible< std::string const &, osgWidget::VncClient >();
        { //::osgWidget::VncClient::assign
        
            typedef bool ( ::osgWidget::VncClient::*assign_function_type)( ::osgWidget::VncImage *,::osgWidget::GeometryHints const & ) ;
            
            VncClient_exposer.def( 
                "assign"
                , assign_function_type( &::osgWidget::VncClient::assign )
                , ( bp::arg("vncImage"), bp::arg("hints")=osgWidget::GeometryHints() ) );
        
        }
        { //::osgWidget::VncClient::close
        
            typedef void ( ::osgWidget::VncClient::*close_function_type)(  ) ;
            
            VncClient_exposer.def( 
                "close"
                , close_function_type( &::osgWidget::VncClient::close ) );
        
        }
        { //::osgWidget::VncClient::connect
        
            typedef bool ( ::osgWidget::VncClient::*connect_function_type)( ::std::string const &,::osgWidget::GeometryHints const & ) ;
            
            VncClient_exposer.def( 
                "connect"
                , connect_function_type( &::osgWidget::VncClient::connect )
                , ( bp::arg("hostname"), bp::arg("hints")=osgWidget::GeometryHints() ) );
        
        }
    }

}
