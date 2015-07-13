// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "block.pypp.hpp"

namespace bp = boost::python;

void register_Block_class(){

    bp::class_< OpenThreads::Block, boost::noncopyable >( "Block", "\n Block is a block that can be used to halt a thread that is waiting another thread to release it.\n", bp::no_init )    
        .def( bp::init< >("\n Block is a block that can be used to halt a thread that is waiting another thread to release it.\n") )    
        .def( 
            "block"
            , (bool ( ::OpenThreads::Block::* )(  ))( &::OpenThreads::Block::block ) )    
        .def( 
            "block"
            , (bool ( ::OpenThreads::Block::* )( long unsigned int ))( &::OpenThreads::Block::block )
            , ( bp::arg("timeout") ) )    
        .def( 
            "release"
            , (void ( ::OpenThreads::Block::* )(  ))( &::OpenThreads::Block::release ) )    
        .def( 
            "reset"
            , (void ( ::OpenThreads::Block::* )(  ))( &::OpenThreads::Block::reset ) )    
        .def( 
            "set"
            , (void ( ::OpenThreads::Block::* )( bool ))( &::OpenThreads::Block::set )
            , ( bp::arg("doRelease") ) );

}
