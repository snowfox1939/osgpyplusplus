// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "wrap_osg.h"
#include "activeuniformmap.pypp.hpp"

namespace bp = boost::python;

void register_ActiveUniformMap_class(){

    { //::std::map< unsigned int, osg::Program::ActiveVarInfo >
        typedef bp::class_< std::map< unsigned int, osg::Program::ActiveVarInfo > > ActiveUniformMap_exposer_t;
        ActiveUniformMap_exposer_t ActiveUniformMap_exposer = ActiveUniformMap_exposer_t( "ActiveUniformMap" );
        bp::scope ActiveUniformMap_scope( ActiveUniformMap_exposer );
        //WARNING: the next line of code will not compile, because "::osg::Program::ActiveVarInfo" does not have operator== !
        ActiveUniformMap_exposer.def( bp::map_indexing_suite< ::std::map< unsigned int, osg::Program::ActiveVarInfo > >() );
    }

}