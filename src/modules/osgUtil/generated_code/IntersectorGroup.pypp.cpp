// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "wrap_osgutil.h"
#include "wrap_referenced.h"
#include "intersectorgroup.pypp.hpp"

namespace bp = boost::python;

struct IntersectorGroup_wrapper : osgUtil::IntersectorGroup, bp::wrapper< osgUtil::IntersectorGroup > {

    IntersectorGroup_wrapper( )
    : osgUtil::IntersectorGroup( )
      , bp::wrapper< osgUtil::IntersectorGroup >(){
        // null constructor
    
    }

    virtual ::osgUtil::Intersector * clone( ::osgUtil::IntersectionVisitor & iv ) {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(iv) );
        else{
            return this->osgUtil::IntersectorGroup::clone( boost::ref(iv) );
        }
    }
    
    ::osgUtil::Intersector * default_clone( ::osgUtil::IntersectionVisitor & iv ) {
        return osgUtil::IntersectorGroup::clone( boost::ref(iv) );
    }

    virtual bool containsIntersections(  ) {
        if( bp::override func_containsIntersections = this->get_override( "containsIntersections" ) )
            return func_containsIntersections(  );
        else{
            return this->osgUtil::IntersectorGroup::containsIntersections(  );
        }
    }
    
    bool default_containsIntersections(  ) {
        return osgUtil::IntersectorGroup::containsIntersections( );
    }

    virtual bool enter( ::osg::Node const & node ) {
        namespace bpl = boost::python;
        if( bpl::override func_enter = this->get_override( "enter" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_enter.ptr(), node );
            return bpl::extract< bool >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return osgUtil::IntersectorGroup::enter( boost::ref(node) );
        }
    }
    
    static boost::python::object default_enter( ::osgUtil::IntersectorGroup & inst, ::osg::Node & node ){
        bool result;
        if( dynamic_cast< IntersectorGroup_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::osgUtil::IntersectorGroup::enter(node);
        }
        else{
            result = inst.enter(node);
        }
        return bp::object( result );
    }

    virtual void intersect( ::osgUtil::IntersectionVisitor & iv, ::osg::Drawable * drawable ) {
        if( bp::override func_intersect = this->get_override( "intersect" ) )
            func_intersect( boost::ref(iv), boost::python::ptr(drawable) );
        else{
            this->osgUtil::IntersectorGroup::intersect( boost::ref(iv), boost::python::ptr(drawable) );
        }
    }
    
    void default_intersect( ::osgUtil::IntersectionVisitor & iv, ::osg::Drawable * drawable ) {
        osgUtil::IntersectorGroup::intersect( boost::ref(iv), boost::python::ptr(drawable) );
    }

    virtual void leave(  ) {
        if( bp::override func_leave = this->get_override( "leave" ) )
            func_leave(  );
        else{
            this->osgUtil::IntersectorGroup::leave(  );
        }
    }
    
    void default_leave(  ) {
        osgUtil::IntersectorGroup::leave( );
    }

    virtual void reset(  ) {
        if( bp::override func_reset = this->get_override( "reset" ) )
            func_reset(  );
        else{
            this->osgUtil::IntersectorGroup::reset(  );
        }
    }
    
    void default_reset(  ) {
        osgUtil::IntersectorGroup::reset( );
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

void register_IntersectorGroup_class(){

    bp::class_< IntersectorGroup_wrapper, bp::bases< osgUtil::Intersector >, osg::ref_ptr< IntersectorGroup_wrapper >, boost::noncopyable >( "IntersectorGroup", bp::init< >() )    
        .def( 
            "addIntersector"
            , (void ( ::osgUtil::IntersectorGroup::* )( ::osgUtil::Intersector * ))( &::osgUtil::IntersectorGroup::addIntersector )
            , ( bp::arg("intersector") ) )    
        .def( 
            "clear"
            , (void ( ::osgUtil::IntersectorGroup::* )(  ))( &::osgUtil::IntersectorGroup::clear ) )    
        .def( 
            "clone"
            , (::osgUtil::Intersector * ( ::osgUtil::IntersectorGroup::* )( ::osgUtil::IntersectionVisitor & ))(&::osgUtil::IntersectorGroup::clone)
            , (::osgUtil::Intersector * ( IntersectorGroup_wrapper::* )( ::osgUtil::IntersectionVisitor & ))(&IntersectorGroup_wrapper::default_clone)
            , ( bp::arg("iv") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "containsIntersections"
            , (bool ( ::osgUtil::IntersectorGroup::* )(  ))(&::osgUtil::IntersectorGroup::containsIntersections)
            , (bool ( IntersectorGroup_wrapper::* )(  ))(&IntersectorGroup_wrapper::default_containsIntersections) )    
        .def( 
            "enter"
            , (boost::python::object (*)( ::osgUtil::IntersectorGroup &,::osg::Node & ))( &IntersectorGroup_wrapper::default_enter )
            , ( bp::arg("inst"), bp::arg("node") ) )    
        .def( 
            "getIntersectors"
            , (::std::vector< osg::ref_ptr<osgUtil::Intersector> > & ( ::osgUtil::IntersectorGroup::* )(  ))( &::osgUtil::IntersectorGroup::getIntersectors )
            , bp::return_internal_reference< >() )    
        .def( 
            "intersect"
            , (void ( ::osgUtil::IntersectorGroup::* )( ::osgUtil::IntersectionVisitor &,::osg::Drawable * ))(&::osgUtil::IntersectorGroup::intersect)
            , (void ( IntersectorGroup_wrapper::* )( ::osgUtil::IntersectionVisitor &,::osg::Drawable * ))(&IntersectorGroup_wrapper::default_intersect)
            , ( bp::arg("iv"), bp::arg("drawable") ) )    
        .def( 
            "leave"
            , (void ( ::osgUtil::IntersectorGroup::* )(  ))(&::osgUtil::IntersectorGroup::leave)
            , (void ( IntersectorGroup_wrapper::* )(  ))(&IntersectorGroup_wrapper::default_leave) )    
        .def( 
            "reset"
            , (void ( ::osgUtil::IntersectorGroup::* )(  ))(&::osgUtil::IntersectorGroup::reset)
            , (void ( IntersectorGroup_wrapper::* )(  ))(&IntersectorGroup_wrapper::default_reset) );

}
