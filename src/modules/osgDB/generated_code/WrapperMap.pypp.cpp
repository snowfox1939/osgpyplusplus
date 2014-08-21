// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "wrap_osgdb.h"
#include "wrappermap.pypp.hpp"

namespace bp = boost::python;

void register_WrapperMap_class(){

    { //::std::map< std::string, osg::ref_ptr<osgDB::ObjectWrapper> >
        typedef bp::class_< std::map< std::string, osg::ref_ptr<osgDB::ObjectWrapper> > > WrapperMap_exposer_t;
        WrapperMap_exposer_t WrapperMap_exposer = WrapperMap_exposer_t( "WrapperMap" );
        bp::scope WrapperMap_scope( WrapperMap_exposer );
        //WARNING: the next line of code will not compile, because "::osg::ref_ptr<osgDB::ObjectWrapper>" does not have operator== !
        WrapperMap_exposer.def( bp::map_indexing_suite< ::std::map< std::string, osg::ref_ptr<osgDB::ObjectWrapper> > >() );
    }

}
