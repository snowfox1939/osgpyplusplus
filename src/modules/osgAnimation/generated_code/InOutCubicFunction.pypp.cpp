// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osganimation.h"
#include "inoutcubicfunction.pypp.hpp"

namespace bp = boost::python;

void register_InOutCubicFunction_class(){

    bp::class_< osgAnimation::InOutCubicFunction >( "InOutCubicFunction" )    
        .def( 
            "getValueAt"
            , (void (*)( float,float & ))( &::osgAnimation::InOutCubicFunction::getValueAt )
            , ( bp::arg("t"), bp::arg("result") ) )    
        .staticmethod( "getValueAt" );

}
