// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgutil.h"
#include "wrap_referenced.h"
#include "renderleaf.pypp.hpp"

namespace bp = boost::python;

struct RenderLeaf_wrapper : osgUtil::RenderLeaf, bp::wrapper< osgUtil::RenderLeaf > {

    RenderLeaf_wrapper(::osg::Drawable * drawable, ::osg::RefMatrix * projection, ::osg::RefMatrix * modelview, float depth=0.0f, unsigned int traversalNumber=0 )
    : osgUtil::RenderLeaf( boost::python::ptr(drawable), boost::python::ptr(projection), boost::python::ptr(modelview), depth, traversalNumber )
      , bp::wrapper< osgUtil::RenderLeaf >(){
        // constructor
    
    }

    virtual void render( ::osg::RenderInfo & renderInfo, ::osgUtil::RenderLeaf * previous ) {
        if( bp::override func_render = this->get_override( "render" ) )
            func_render( boost::ref(renderInfo), boost::python::ptr(previous) );
        else{
            this->osgUtil::RenderLeaf::render( boost::ref(renderInfo), boost::python::ptr(previous) );
        }
    }
    
    void default_render( ::osg::RenderInfo & renderInfo, ::osgUtil::RenderLeaf * previous ) {
        osgUtil::RenderLeaf::render( boost::ref(renderInfo), boost::python::ptr(previous) );
    }

    static ::osgUtil::StateGraph * get__parent(osgUtil::RenderLeaf const & inst ){
        return inst._parent;
    }
    
    static void set__parent( osgUtil::RenderLeaf & inst, ::osgUtil::StateGraph * new_value ){ 
        inst._parent = new_value;
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

void register_RenderLeaf_class(){

    bp::class_< RenderLeaf_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< ::osgUtil::RenderLeaf >, boost::noncopyable >( "RenderLeaf", bp::init< osg::Drawable *, osg::RefMatrix *, osg::RefMatrix *, bp::optional< float, unsigned int > >(( bp::arg("drawable"), bp::arg("projection"), bp::arg("modelview"), bp::arg("depth")=0.0f, bp::arg("traversalNumber")=(unsigned int)(0) )) )    
        .def( 
            "getDrawable"
            , (::osg::Drawable const * ( ::osgUtil::RenderLeaf::* )(  )const)( &::osgUtil::RenderLeaf::getDrawable )
            , bp::return_internal_reference< >() )    
        .def( 
            "render"
            , (void ( ::osgUtil::RenderLeaf::* )( ::osg::RenderInfo &,::osgUtil::RenderLeaf * ))(&::osgUtil::RenderLeaf::render)
            , (void ( RenderLeaf_wrapper::* )( ::osg::RenderInfo &,::osgUtil::RenderLeaf * ))(&RenderLeaf_wrapper::default_render)
            , ( bp::arg("renderInfo"), bp::arg("previous") ) )    
        .def( 
            "reset"
            , (void ( ::osgUtil::RenderLeaf::* )(  ))( &::osgUtil::RenderLeaf::reset ) )    
        .def( 
            "set"
            , (void ( ::osgUtil::RenderLeaf::* )( ::osg::Drawable *,::osg::RefMatrix *,::osg::RefMatrix *,float,unsigned int ))( &::osgUtil::RenderLeaf::set )
            , ( bp::arg("drawable"), bp::arg("projection"), bp::arg("modelview"), bp::arg("depth")=0.0f, bp::arg("traversalNumber")=(unsigned int)(0) ) )    
        .def_readwrite( "_depth", &osgUtil::RenderLeaf::_depth )    
        .def_readwrite( "_drawable", &osgUtil::RenderLeaf::_drawable )    
        .def_readwrite( "_dynamic", &osgUtil::RenderLeaf::_dynamic )    
        .def_readwrite( "_modelview", &osgUtil::RenderLeaf::_modelview )    
        .add_property( "_parent"
                    , bp::make_function( (::osgUtil::StateGraph * (*)( ::osgUtil::RenderLeaf const & ))(&RenderLeaf_wrapper::get__parent), bp::return_internal_reference< >() )
                    , bp::make_function( (void (*)( ::osgUtil::RenderLeaf &,::osgUtil::StateGraph * ))(&RenderLeaf_wrapper::set__parent), bp::with_custodian_and_ward_postcall< 1, 2 >() ) )    
        .def_readwrite( "_projection", &osgUtil::RenderLeaf::_projection )    
        .def_readwrite( "_traversalNumber", &osgUtil::RenderLeaf::_traversalNumber );

}
