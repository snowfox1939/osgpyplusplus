// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "bufferobjectprofile.pypp.hpp"

namespace bp = boost::python;

void register_BufferObjectProfile_class(){

    { //::osg::BufferObjectProfile
        typedef bp::class_< osg::BufferObjectProfile > BufferObjectProfile_exposer_t;
        BufferObjectProfile_exposer_t BufferObjectProfile_exposer = BufferObjectProfile_exposer_t( "BufferObjectProfile", bp::init< >() );
        bp::scope BufferObjectProfile_scope( BufferObjectProfile_exposer );
        BufferObjectProfile_exposer.def( bp::init< GLenum, GLenum, unsigned int >(( bp::arg("target"), bp::arg("usage"), bp::arg("size") )) );
        BufferObjectProfile_exposer.def( bp::init< osg::BufferObjectProfile const & >(( bp::arg("bpo") )) );
        BufferObjectProfile_exposer.def( bp::self < bp::self );
        { //::osg::BufferObjectProfile::operator=
        
            typedef ::osg::BufferObjectProfile & ( ::osg::BufferObjectProfile::*assign_function_type)( ::osg::BufferObjectProfile const & ) ;
            
            BufferObjectProfile_exposer.def( 
                "assign"
                , assign_function_type( &::osg::BufferObjectProfile::operator= )
                , ( bp::arg("rhs") )
                , bp::return_self< >() );
        
        }
        BufferObjectProfile_exposer.def( bp::self == bp::self );
        { //::osg::BufferObjectProfile::setProfile
        
            typedef void ( ::osg::BufferObjectProfile::*setProfile_function_type)( ::GLenum,::GLenum,unsigned int ) ;
            
            BufferObjectProfile_exposer.def( 
                "setProfile"
                , setProfile_function_type( &::osg::BufferObjectProfile::setProfile )
                , ( bp::arg("target"), bp::arg("usage"), bp::arg("size") ) );
        
        }
        BufferObjectProfile_exposer.def_readwrite( "_size", &osg::BufferObjectProfile::_size );
        BufferObjectProfile_exposer.def_readwrite( "_target", &osg::BufferObjectProfile::_target );
        BufferObjectProfile_exposer.def_readwrite( "_usage", &osg::BufferObjectProfile::_usage );
    }

}
