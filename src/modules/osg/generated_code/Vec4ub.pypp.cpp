// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "indexing_helpers.h"
#include "vec4ub.pypp.hpp"

namespace bp = boost::python;

void register_Vec4ub_class(){

    { //::osg::Vec4ub
        typedef bp::class_< osg::Vec4ub > Vec4ub_exposer_t;
        Vec4ub_exposer_t Vec4ub_exposer = Vec4ub_exposer_t( "Vec4ub", "\n General purpose float quad.\n Uses include representation of color coordinates.\n No support yet added for float * Vec4ub - is it necessary?\n Need to define a non-member non-friend operator*  etc.\n Vec4ub * float is okay\n", bp::init< >("\n Constructor that sets all components of the vector to zero\n") );
        bp::scope Vec4ub_scope( Vec4ub_exposer );
        bp::scope().attr("num_components") = (int)osg::Vec4ub::num_components;
        Vec4ub_exposer.def( bp::init< unsigned char, unsigned char, unsigned char, unsigned char >(( bp::arg("x"), bp::arg("y"), bp::arg("z"), bp::arg("w") )) );
        Vec4ub_exposer.def( bp::self != bp::self );
        Vec4ub_exposer.def( bp::self * bp::other< float >() );
        Vec4ub_exposer.def( bp::self *= bp::other< float >() );
        Vec4ub_exposer.def( bp::self + bp::self );
        Vec4ub_exposer.def( bp::self += bp::self );
        Vec4ub_exposer.def( bp::self - bp::self );
        Vec4ub_exposer.def( bp::self -= bp::self );
        Vec4ub_exposer.def( bp::self / bp::other< float >() );
        Vec4ub_exposer.def( bp::self /= bp::other< float >() );
        Vec4ub_exposer.def( bp::self < bp::self );
        Vec4ub_exposer.def( bp::self == bp::self );
        { //::osg::Vec4ub::operator[]
        
            typedef unsigned char & ( ::osg::Vec4ub::*__getitem___function_type)( unsigned int ) ;
            
            Vec4ub_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec4ub::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec4ub::operator[]
        
            typedef unsigned char ( ::osg::Vec4ub::*__getitem___function_type)( unsigned int ) const;
            
            Vec4ub_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec4ub::operator[] )
                , ( bp::arg("i") ) );
        
        }
        { //::osg::Vec4ub::set
        
            typedef void ( ::osg::Vec4ub::*set_function_type)( unsigned char,unsigned char,unsigned char,unsigned char ) ;
            
            Vec4ub_exposer.def( 
                "set"
                , set_function_type( &::osg::Vec4ub::set )
                , ( bp::arg("r"), bp::arg("g"), bp::arg("b"), bp::arg("a") ) );
        
        }
        { //property "r"[fget=::osg::Vec4ub::r]
        
            typedef unsigned char & ( ::osg::Vec4ub::*fget)(  ) ;
            
            Vec4ub_exposer.add_property( 
                "r"
                , bp::make_function( 
                      fget( &::osg::Vec4ub::r )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "r"[fget=::osg::Vec4ub::r]
        
            typedef unsigned char ( ::osg::Vec4ub::*fget)(  ) const;
            
            Vec4ub_exposer.add_property( 
                "r"
                , fget( &::osg::Vec4ub::r ) );
        
        }
        { //property "g"[fget=::osg::Vec4ub::g]
        
            typedef unsigned char & ( ::osg::Vec4ub::*fget)(  ) ;
            
            Vec4ub_exposer.add_property( 
                "g"
                , bp::make_function( 
                      fget( &::osg::Vec4ub::g )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "g"[fget=::osg::Vec4ub::g]
        
            typedef unsigned char ( ::osg::Vec4ub::*fget)(  ) const;
            
            Vec4ub_exposer.add_property( 
                "g"
                , fget( &::osg::Vec4ub::g ) );
        
        }
        { //property "b"[fget=::osg::Vec4ub::b]
        
            typedef unsigned char & ( ::osg::Vec4ub::*fget)(  ) ;
            
            Vec4ub_exposer.add_property( 
                "b"
                , bp::make_function( 
                      fget( &::osg::Vec4ub::b )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "b"[fget=::osg::Vec4ub::b]
        
            typedef unsigned char ( ::osg::Vec4ub::*fget)(  ) const;
            
            Vec4ub_exposer.add_property( 
                "b"
                , fget( &::osg::Vec4ub::b ) );
        
        }
        { //property "a"[fget=::osg::Vec4ub::a]
        
            typedef unsigned char & ( ::osg::Vec4ub::*fget)(  ) ;
            
            Vec4ub_exposer.add_property( 
                "a"
                , bp::make_function( 
                      fget( &::osg::Vec4ub::a )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "a"[fget=::osg::Vec4ub::a]
        
            typedef unsigned char ( ::osg::Vec4ub::*fget)(  ) const;
            
            Vec4ub_exposer.add_property( 
                "a"
                , fget( &::osg::Vec4ub::a ) );
        
        }
        Vec4ub_exposer.def( bp::self_ns::str( bp::self ) );
        Vec4ub_exposer.def(bp::indexing::container_suite<
                            osg::Vec4ub, 
                            bp::indexing::all_methods, 
                            OsgVec_algorithms<osg::Vec4ub, osg::Vec4ub::value_type, osg::Vec4ub::num_components> >());
    }

}
