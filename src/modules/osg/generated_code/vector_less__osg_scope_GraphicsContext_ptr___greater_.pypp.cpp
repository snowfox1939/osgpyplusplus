// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "wrap_osg.h"
#include "vector_less__osg_scope_graphicscontext_ptr___greater_.pypp.hpp"

namespace bp = boost::python;

void register_vector_less__osg_scope_GraphicsContext_ptr___greater__class(){

    bp::class_< std::vector< osg::GraphicsContext* > >("vector_less__osg_scope_GraphicsContext_ptr___greater_")    
        .def( bp::vector_indexing_suite< ::std::vector< osg::GraphicsContext* > >() );

}