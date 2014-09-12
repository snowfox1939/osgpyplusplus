// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "vec4f.pypp.hpp"

namespace bp = boost::python;

void register_Vec4f_class(){

    { //::osg::Vec4f
        typedef bp::class_< osg::Vec4f > Vec4f_exposer_t;
        Vec4f_exposer_t Vec4f_exposer = Vec4f_exposer_t( "Vec4f", "\n General purpose float quad. Uses include representation\n of color coordinates.\n No support yet added for float * Vec4f - is it necessary?\n Need to define a non-member non-friend operator*  etc.\n    Vec4f * float is okay\n", bp::init< >("\n Constructor that sets all components of the vector to zero\n") );
        bp::scope Vec4f_scope( Vec4f_exposer );
        bp::scope().attr("num_components") = (int)osg::Vec4f::num_components;
        Vec4f_exposer.def( bp::init< float, float, float, float >(( bp::arg("x"), bp::arg("y"), bp::arg("z"), bp::arg("w") )) );
        Vec4f_exposer.def( bp::init< osg::Vec3f const &, float >(( bp::arg("v3"), bp::arg("w") )) );
        { //::osg::Vec4f::asABGR
        
            typedef unsigned int ( ::osg::Vec4f::*asABGR_function_type)(  ) const;
            
            Vec4f_exposer.def( 
                "asABGR"
                , asABGR_function_type( &::osg::Vec4f::asABGR ) );
        
        }
        { //::osg::Vec4f::asRGBA
        
            typedef unsigned int ( ::osg::Vec4f::*asRGBA_function_type)(  ) const;
            
            Vec4f_exposer.def( 
                "asRGBA"
                , asRGBA_function_type( &::osg::Vec4f::asRGBA ) );
        
        }
        { //::osg::Vec4f::isNaN
        
            typedef bool ( ::osg::Vec4f::*isNaN_function_type)(  ) const;
            
            Vec4f_exposer.def( 
                "isNaN"
                , isNaN_function_type( &::osg::Vec4f::isNaN )
                , "\n Returns true if at least one component has value NaN.\n" );
        
        }
        { //::osg::Vec4f::length
        
            typedef float ( ::osg::Vec4f::*length_function_type)(  ) const;
            
            Vec4f_exposer.def( 
                "length"
                , length_function_type( &::osg::Vec4f::length )
                , "\n Length of the vector = sqrt( vec . vec )\n" );
        
        }
        { //::osg::Vec4f::length2
        
            typedef float ( ::osg::Vec4f::*length2_function_type)(  ) const;
            
            Vec4f_exposer.def( 
                "length2"
                , length2_function_type( &::osg::Vec4f::length2 )
                , "\n Length squared of the vector = vec . vec\n" );
        
        }
        { //::osg::Vec4f::normalize
        
            typedef float ( ::osg::Vec4f::*normalize_function_type)(  ) ;
            
            Vec4f_exposer.def( 
                "normalize"
                , normalize_function_type( &::osg::Vec4f::normalize )
                , "\n Normalize the vector so that it has length unity.\n Returns the previous length of the vector.\n" );
        
        }
        Vec4f_exposer.def( bp::self != bp::self );
        Vec4f_exposer.def( bp::self * bp::self );
        Vec4f_exposer.def( bp::self * bp::other< float >() );
        Vec4f_exposer.def( bp::self *= bp::other< float >() );
        Vec4f_exposer.def( bp::self + bp::self );
        Vec4f_exposer.def( bp::self += bp::self );
        Vec4f_exposer.def( bp::self - bp::self );
        Vec4f_exposer.def( -bp::self );
        Vec4f_exposer.def( bp::self -= bp::self );
        Vec4f_exposer.def( bp::self / bp::other< float >() );
        Vec4f_exposer.def( bp::self /= bp::other< float >() );
        Vec4f_exposer.def( bp::self < bp::self );
        Vec4f_exposer.def( bp::self == bp::self );
        { //::osg::Vec4f::operator[]
        
            typedef float & ( ::osg::Vec4f::*__getitem___function_type)( unsigned int ) ;
            
            Vec4f_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec4f::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec4f::operator[]
        
            typedef float ( ::osg::Vec4f::*__getitem___function_type)( unsigned int ) const;
            
            Vec4f_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec4f::operator[] )
                , ( bp::arg("i") ) );
        
        }
        { //::osg::Vec4f::set
        
            typedef void ( ::osg::Vec4f::*set_function_type)( float,float,float,float ) ;
            
            Vec4f_exposer.def( 
                "set"
                , set_function_type( &::osg::Vec4f::set )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("z"), bp::arg("w") ) );
        
        }
        { //::osg::Vec4f::valid
        
            typedef bool ( ::osg::Vec4f::*valid_function_type)(  ) const;
            
            Vec4f_exposer.def( 
                "valid"
                , valid_function_type( &::osg::Vec4f::valid )
                , "\n Returns true if all components have values that are not NaN.\n" );
        
        }
        { //property "x"[fget=::osg::Vec4f::x]
        
            typedef float & ( ::osg::Vec4f::*fget)(  ) ;
            
            Vec4f_exposer.add_property( 
                "x"
                , bp::make_function( 
                      fget( &::osg::Vec4f::x )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "x"[fget=::osg::Vec4f::x]
        
            typedef float ( ::osg::Vec4f::*fget)(  ) const;
            
            Vec4f_exposer.add_property( 
                "x"
                , fget( &::osg::Vec4f::x ) );
        
        }
        { //property "y"[fget=::osg::Vec4f::y]
        
            typedef float & ( ::osg::Vec4f::*fget)(  ) ;
            
            Vec4f_exposer.add_property( 
                "y"
                , bp::make_function( 
                      fget( &::osg::Vec4f::y )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "y"[fget=::osg::Vec4f::y]
        
            typedef float ( ::osg::Vec4f::*fget)(  ) const;
            
            Vec4f_exposer.add_property( 
                "y"
                , fget( &::osg::Vec4f::y ) );
        
        }
        { //property "z"[fget=::osg::Vec4f::z]
        
            typedef float & ( ::osg::Vec4f::*fget)(  ) ;
            
            Vec4f_exposer.add_property( 
                "z"
                , bp::make_function( 
                      fget( &::osg::Vec4f::z )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "z"[fget=::osg::Vec4f::z]
        
            typedef float ( ::osg::Vec4f::*fget)(  ) const;
            
            Vec4f_exposer.add_property( 
                "z"
                , fget( &::osg::Vec4f::z ) );
        
        }
        { //property "w"[fget=::osg::Vec4f::w]
        
            typedef float & ( ::osg::Vec4f::*fget)(  ) ;
            
            Vec4f_exposer.add_property( 
                "w"
                , bp::make_function( 
                      fget( &::osg::Vec4f::w )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "w"[fget=::osg::Vec4f::w]
        
            typedef float ( ::osg::Vec4f::*fget)(  ) const;
            
            Vec4f_exposer.add_property( 
                "w"
                , fget( &::osg::Vec4f::w ) );
        
        }
        { //property "r"[fget=::osg::Vec4f::r]
        
            typedef float & ( ::osg::Vec4f::*fget)(  ) ;
            
            Vec4f_exposer.add_property( 
                "r"
                , bp::make_function( 
                      fget( &::osg::Vec4f::r )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "r"[fget=::osg::Vec4f::r]
        
            typedef float ( ::osg::Vec4f::*fget)(  ) const;
            
            Vec4f_exposer.add_property( 
                "r"
                , fget( &::osg::Vec4f::r ) );
        
        }
        { //property "g"[fget=::osg::Vec4f::g]
        
            typedef float & ( ::osg::Vec4f::*fget)(  ) ;
            
            Vec4f_exposer.add_property( 
                "g"
                , bp::make_function( 
                      fget( &::osg::Vec4f::g )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "g"[fget=::osg::Vec4f::g]
        
            typedef float ( ::osg::Vec4f::*fget)(  ) const;
            
            Vec4f_exposer.add_property( 
                "g"
                , fget( &::osg::Vec4f::g ) );
        
        }
        { //property "b"[fget=::osg::Vec4f::b]
        
            typedef float & ( ::osg::Vec4f::*fget)(  ) ;
            
            Vec4f_exposer.add_property( 
                "b"
                , bp::make_function( 
                      fget( &::osg::Vec4f::b )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "b"[fget=::osg::Vec4f::b]
        
            typedef float ( ::osg::Vec4f::*fget)(  ) const;
            
            Vec4f_exposer.add_property( 
                "b"
                , fget( &::osg::Vec4f::b ) );
        
        }
        { //property "a"[fget=::osg::Vec4f::a]
        
            typedef float & ( ::osg::Vec4f::*fget)(  ) ;
            
            Vec4f_exposer.add_property( 
                "a"
                , bp::make_function( 
                      fget( &::osg::Vec4f::a )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "a"[fget=::osg::Vec4f::a]
        
            typedef float ( ::osg::Vec4f::*fget)(  ) const;
            
            Vec4f_exposer.add_property( 
                "a"
                , fget( &::osg::Vec4f::a ) );
        
        }
        Vec4f_exposer.def( bp::self * bp::other< osg::Matrixf >() );
        Vec4f_exposer.def( bp::self * bp::other< osg::Matrixd >() );
        Vec4f_exposer.def( bp::self * bp::other< osg::Vec3d >() );
        Vec4f_exposer.def( bp::self * bp::other< osg::Vec3f >() );
        Vec4f_exposer.def( bp::self_ns::str( bp::self ) );
        Vec4f_exposer.def( bp::self_ns::str(bp::self) );
    }

}
