// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgutil.h"
#include "drawelementtypesimplifier.pypp.hpp"

namespace bp = boost::python;

void register_DrawElementTypeSimplifier_class(){

    bp::class_< osgUtil::DrawElementTypeSimplifier >( "DrawElementTypeSimplifier" )    
        .def( 
            "simplify"
            , (void ( ::osgUtil::DrawElementTypeSimplifier::* )( ::osg::Geometry & )const)( &::osgUtil::DrawElementTypeSimplifier::simplify )
            , ( bp::arg("geometry") ) );

}
