// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "wrap_osg.h"
#include "bufferattachmentmap.pypp.hpp"

namespace bp = boost::python;

void register_BufferAttachmentMap_class(){

    { //::std::map< osg::Camera::BufferComponent, osg::Camera::Attachment >
        typedef bp::class_< std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > > BufferAttachmentMap_exposer_t;
        BufferAttachmentMap_exposer_t BufferAttachmentMap_exposer = BufferAttachmentMap_exposer_t( "BufferAttachmentMap" );
        bp::scope BufferAttachmentMap_scope( BufferAttachmentMap_exposer );
        //WARNING: the next line of code will not compile, because "::osg::Camera::Attachment" does not have operator== !
        BufferAttachmentMap_exposer.def( bp::map_indexing_suite< ::std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > >() );
    }

}