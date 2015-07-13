// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgutil.h"
#include "wrap_referenced.h"
#include "positionalstatecontainer.pypp.hpp"

namespace bp = boost::python;

struct PositionalStateContainer_wrapper : osgUtil::PositionalStateContainer, bp::wrapper< osgUtil::PositionalStateContainer > {

    PositionalStateContainer_wrapper( )
    : osgUtil::PositionalStateContainer( )
      , bp::wrapper< osgUtil::PositionalStateContainer >(){
        // null constructor
    
    }

    virtual void addPositionedAttribute( ::osg::RefMatrix * matrix, ::osg::StateAttribute const * attr ) {
        if( bp::override func_addPositionedAttribute = this->get_override( "addPositionedAttribute" ) )
            func_addPositionedAttribute( boost::python::ptr(matrix), boost::python::ptr(attr) );
        else{
            this->osgUtil::PositionalStateContainer::addPositionedAttribute( boost::python::ptr(matrix), boost::python::ptr(attr) );
        }
    }
    
    void default_addPositionedAttribute( ::osg::RefMatrix * matrix, ::osg::StateAttribute const * attr ) {
        osgUtil::PositionalStateContainer::addPositionedAttribute( boost::python::ptr(matrix), boost::python::ptr(attr) );
    }

    virtual void addPositionedTextureAttribute( unsigned int textureUnit, ::osg::RefMatrix * matrix, ::osg::StateAttribute const * attr ) {
        if( bp::override func_addPositionedTextureAttribute = this->get_override( "addPositionedTextureAttribute" ) )
            func_addPositionedTextureAttribute( textureUnit, boost::python::ptr(matrix), boost::python::ptr(attr) );
        else{
            this->osgUtil::PositionalStateContainer::addPositionedTextureAttribute( textureUnit, boost::python::ptr(matrix), boost::python::ptr(attr) );
        }
    }
    
    void default_addPositionedTextureAttribute( unsigned int textureUnit, ::osg::RefMatrix * matrix, ::osg::StateAttribute const * attr ) {
        osgUtil::PositionalStateContainer::addPositionedTextureAttribute( textureUnit, boost::python::ptr(matrix), boost::python::ptr(attr) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgUtil::PositionalStateContainer::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgUtil::PositionalStateContainer::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & arg0 ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(arg0) );
        else{
            return this->osgUtil::PositionalStateContainer::clone( boost::ref(arg0) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & arg0 ) const  {
        return osgUtil::PositionalStateContainer::clone( boost::ref(arg0) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgUtil::PositionalStateContainer::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgUtil::PositionalStateContainer::cloneType( );
    }

    virtual void draw( ::osg::State & state, ::osgUtil::RenderLeaf * & previous, ::osg::Matrix const * postMultMatrix=0 ) {
        if( bp::override func_draw = this->get_override( "draw" ) )
            func_draw( boost::ref(state), boost::ref(previous), boost::python::ptr(postMultMatrix) );
        else{
            this->osgUtil::PositionalStateContainer::draw( boost::ref(state), boost::ref(previous), boost::python::ptr(postMultMatrix) );
        }
    }
    
    void default_draw( ::osg::State & state, ::osgUtil::RenderLeaf * & previous, ::osg::Matrix const * postMultMatrix=0 ) {
        osgUtil::PositionalStateContainer::draw( boost::ref(state), boost::ref(previous), boost::python::ptr(postMultMatrix) );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgUtil::PositionalStateContainer::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgUtil::PositionalStateContainer::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgUtil::PositionalStateContainer::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgUtil::PositionalStateContainer::libraryName( );
    }

    virtual void reset(  ) {
        if( bp::override func_reset = this->get_override( "reset" ) )
            func_reset(  );
        else{
            this->osgUtil::PositionalStateContainer::reset(  );
        }
    }
    
    void default_reset(  ) {
        osgUtil::PositionalStateContainer::reset( );
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

void register_PositionalStateContainer_class(){

    bp::class_< PositionalStateContainer_wrapper, bp::bases< ::osg::Object >, osg::ref_ptr< ::osgUtil::PositionalStateContainer >, boost::noncopyable >( "PositionalStateContainer", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "addPositionedAttribute"
            , (void ( ::osgUtil::PositionalStateContainer::* )( ::osg::RefMatrix *,::osg::StateAttribute const * ))(&::osgUtil::PositionalStateContainer::addPositionedAttribute)
            , (void ( PositionalStateContainer_wrapper::* )( ::osg::RefMatrix *,::osg::StateAttribute const * ))(&PositionalStateContainer_wrapper::default_addPositionedAttribute)
            , ( bp::arg("matrix"), bp::arg("attr") ) )    
        .def( 
            "addPositionedTextureAttribute"
            , (void ( ::osgUtil::PositionalStateContainer::* )( unsigned int,::osg::RefMatrix *,::osg::StateAttribute const * ))(&::osgUtil::PositionalStateContainer::addPositionedTextureAttribute)
            , (void ( PositionalStateContainer_wrapper::* )( unsigned int,::osg::RefMatrix *,::osg::StateAttribute const * ))(&PositionalStateContainer_wrapper::default_addPositionedTextureAttribute)
            , ( bp::arg("textureUnit"), bp::arg("matrix"), bp::arg("attr") ) )    
        .def( 
            "className"
            , (char const * ( ::osgUtil::PositionalStateContainer::* )(  )const)(&::osgUtil::PositionalStateContainer::className)
            , (char const * ( PositionalStateContainer_wrapper::* )(  )const)(&PositionalStateContainer_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgUtil::PositionalStateContainer::* )( ::osg::CopyOp const & )const)(&::osgUtil::PositionalStateContainer::clone)
            , (::osg::Object * ( PositionalStateContainer_wrapper::* )( ::osg::CopyOp const & )const)(&PositionalStateContainer_wrapper::default_clone)
            , ( bp::arg("arg0") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgUtil::PositionalStateContainer::* )(  )const)(&::osgUtil::PositionalStateContainer::cloneType)
            , (::osg::Object * ( PositionalStateContainer_wrapper::* )(  )const)(&PositionalStateContainer_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "draw"
            , (void ( ::osgUtil::PositionalStateContainer::* )( ::osg::State &,::osgUtil::RenderLeaf * &,::osg::Matrix const * ))(&::osgUtil::PositionalStateContainer::draw)
            , (void ( PositionalStateContainer_wrapper::* )( ::osg::State &,::osgUtil::RenderLeaf * &,::osg::Matrix const * ))(&PositionalStateContainer_wrapper::default_draw)
            , ( bp::arg("state"), bp::arg("previous"), bp::arg("postMultMatrix")=bp::object() ) )    
        .def( 
            "getAttrMatrixList"
            , (::std::vector< std::pair<osg::ref_ptr<osg::StateAttribute const>, osg::ref_ptr<osg::RefMatrixd> > > & ( ::osgUtil::PositionalStateContainer::* )(  ))( &::osgUtil::PositionalStateContainer::getAttrMatrixList )
            , bp::return_internal_reference< >() )    
        .def( 
            "getTexUnitAttrMatrixListMap"
            , (::std::map< unsigned int, std::vector< std::pair<osg::ref_ptr<osg::StateAttribute const>, osg::ref_ptr<osg::RefMatrixd> > > > & ( ::osgUtil::PositionalStateContainer::* )(  ))( &::osgUtil::PositionalStateContainer::getTexUnitAttrMatrixListMap )
            , bp::return_internal_reference< >() )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgUtil::PositionalStateContainer::* )( ::osg::Object const * )const)(&::osgUtil::PositionalStateContainer::isSameKindAs)
            , (bool ( PositionalStateContainer_wrapper::* )( ::osg::Object const * )const)(&PositionalStateContainer_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgUtil::PositionalStateContainer::* )(  )const)(&::osgUtil::PositionalStateContainer::libraryName)
            , (char const * ( PositionalStateContainer_wrapper::* )(  )const)(&PositionalStateContainer_wrapper::default_libraryName) )    
        .def( 
            "reset"
            , (void ( ::osgUtil::PositionalStateContainer::* )(  ))(&::osgUtil::PositionalStateContainer::reset)
            , (void ( PositionalStateContainer_wrapper::* )(  ))(&PositionalStateContainer_wrapper::default_reset) )    
        .def_readwrite( "_attrList", &osgUtil::PositionalStateContainer::_attrList )    
        .def_readwrite( "_texAttrListMap", &osgUtil::PositionalStateContainer::_texAttrListMap );

}
