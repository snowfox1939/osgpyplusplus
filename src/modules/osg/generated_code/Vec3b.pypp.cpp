// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "vec3b.pypp.hpp"

namespace bp = boost::python;

void register_Vec3b_class(){

    { //::osg::Vec3b
        typedef bp::class_< osg::Vec3b > Vec3b_exposer_t;
        Vec3b_exposer_t Vec3b_exposer = Vec3b_exposer_t( "Vec3b", "\n General purpose float triple.\n Uses include representation of color coordinates.\n No support yet added for float * Vec3b - is it necessary?\n Need to define a non-member non-friend operator*  etc.\n Vec3b * float is okay\n", bp::init< >("\n Constructor that sets all components of the vector to zero\n") );
        bp::scope Vec3b_scope( Vec3b_exposer );
        bp::scope().attr("num_components") = (int)osg::Vec3b::num_components;
        Vec3b_exposer.def( bp::init< signed char, signed char, signed char >(( bp::arg("r"), bp::arg("g"), bp::arg("b") )) );
        Vec3b_exposer.def( bp::self != bp::self );
        Vec3b_exposer.def( bp::self * bp::other< float >() );
        Vec3b_exposer.def( bp::self *= bp::other< float >() );
        Vec3b_exposer.def( bp::self + bp::self );
        Vec3b_exposer.def( bp::self += bp::self );
        Vec3b_exposer.def( bp::self - bp::self );
        Vec3b_exposer.def( bp::self -= bp::self );
        Vec3b_exposer.def( bp::self / bp::other< float >() );
        Vec3b_exposer.def( bp::self /= bp::other< float >() );
        Vec3b_exposer.def( bp::self < bp::self );
        Vec3b_exposer.def( bp::self == bp::self );
        { //::osg::Vec3b::operator[]
        
            typedef signed char & ( ::osg::Vec3b::*__getitem___function_type)( unsigned int ) ;
            
            Vec3b_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec3b::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec3b::operator[]
        
            typedef signed char ( ::osg::Vec3b::*__getitem___function_type)( unsigned int ) const;
            
            Vec3b_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec3b::operator[] )
                , ( bp::arg("i") ) );
        
        }
        { //::osg::Vec3b::set
        
            typedef void ( ::osg::Vec3b::*set_function_type)( signed char,signed char,signed char ) ;
            
            Vec3b_exposer.def( 
                "set"
                , set_function_type( &::osg::Vec3b::set )
                , ( bp::arg("r"), bp::arg("g"), bp::arg("b") ) );
        
        }
        { //::osg::Vec3b::set
        
            typedef void ( ::osg::Vec3b::*set_function_type)( ::osg::Vec3b const & ) ;
            
            Vec3b_exposer.def( 
                "set"
                , set_function_type( &::osg::Vec3b::set )
                , ( bp::arg("rhs") ) );
        
        }
        { //property "x"[fget=::osg::Vec3b::x]
        
            typedef signed char & ( ::osg::Vec3b::*fget)(  ) ;
            
            Vec3b_exposer.add_property( 
                "x"
                , bp::make_function( 
                      fget( &::osg::Vec3b::x )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "x"[fget=::osg::Vec3b::x]
        
            typedef signed char ( ::osg::Vec3b::*fget)(  ) const;
            
            Vec3b_exposer.add_property( 
                "x"
                , fget( &::osg::Vec3b::x ) );
        
        }
        { //property "y"[fget=::osg::Vec3b::y]
        
            typedef signed char & ( ::osg::Vec3b::*fget)(  ) ;
            
            Vec3b_exposer.add_property( 
                "y"
                , bp::make_function( 
                      fget( &::osg::Vec3b::y )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "y"[fget=::osg::Vec3b::y]
        
            typedef signed char ( ::osg::Vec3b::*fget)(  ) const;
            
            Vec3b_exposer.add_property( 
                "y"
                , fget( &::osg::Vec3b::y ) );
        
        }
        { //property "z"[fget=::osg::Vec3b::z]
        
            typedef signed char & ( ::osg::Vec3b::*fget)(  ) ;
            
            Vec3b_exposer.add_property( 
                "z"
                , bp::make_function( 
                      fget( &::osg::Vec3b::z )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "z"[fget=::osg::Vec3b::z]
        
            typedef signed char ( ::osg::Vec3b::*fget)(  ) const;
            
            Vec3b_exposer.add_property( 
                "z"
                , fget( &::osg::Vec3b::z ) );
        
        }
        { //property "r"[fget=::osg::Vec3b::r]
        
            typedef signed char & ( ::osg::Vec3b::*fget)(  ) ;
            
            Vec3b_exposer.add_property( 
                "r"
                , bp::make_function( 
                      fget( &::osg::Vec3b::r )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "r"[fget=::osg::Vec3b::r]
        
            typedef signed char ( ::osg::Vec3b::*fget)(  ) const;
            
            Vec3b_exposer.add_property( 
                "r"
                , fget( &::osg::Vec3b::r ) );
        
        }
        { //property "g"[fget=::osg::Vec3b::g]
        
            typedef signed char & ( ::osg::Vec3b::*fget)(  ) ;
            
            Vec3b_exposer.add_property( 
                "g"
                , bp::make_function( 
                      fget( &::osg::Vec3b::g )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "g"[fget=::osg::Vec3b::g]
        
            typedef signed char ( ::osg::Vec3b::*fget)(  ) const;
            
            Vec3b_exposer.add_property( 
                "g"
                , fget( &::osg::Vec3b::g ) );
        
        }
        { //property "b"[fget=::osg::Vec3b::b]
        
            typedef signed char & ( ::osg::Vec3b::*fget)(  ) ;
            
            Vec3b_exposer.add_property( 
                "b"
                , bp::make_function( 
                      fget( &::osg::Vec3b::b )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "b"[fget=::osg::Vec3b::b]
        
            typedef signed char ( ::osg::Vec3b::*fget)(  ) const;
            
            Vec3b_exposer.add_property( 
                "b"
                , fget( &::osg::Vec3b::b ) );
        
        }
        Vec3b_exposer.def( bp::self_ns::str( bp::self ) );
        Vec3b_exposer.def( bp::self_ns::str(bp::self) );
    }

}
