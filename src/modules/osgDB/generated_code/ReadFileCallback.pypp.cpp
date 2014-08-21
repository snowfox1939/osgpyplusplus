// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgdb.h"
#include "readfilecallback.pypp.hpp"

namespace bp = boost::python;

struct ReadFileCallback_wrapper : osgDB::ReadFileCallback, bp::wrapper< osgDB::ReadFileCallback > {

    ReadFileCallback_wrapper()
    : osgDB::ReadFileCallback()
      , bp::wrapper< osgDB::ReadFileCallback >(){
        // null constructor
        
    }

    virtual ::osgDB::ReaderWriter::ReadResult openArchive( ::std::string const & filename, ::osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, ::osgDB::Options const * useObjectCache ) {
        if( bp::override func_openArchive = this->get_override( "openArchive" ) )
            return func_openArchive( filename, status, indexBlockSizeHint, boost::python::ptr(useObjectCache) );
        else{
            return this->osgDB::ReadFileCallback::openArchive( filename, status, indexBlockSizeHint, boost::python::ptr(useObjectCache) );
        }
    }
    
    ::osgDB::ReaderWriter::ReadResult default_openArchive( ::std::string const & filename, ::osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, ::osgDB::Options const * useObjectCache ) {
        return osgDB::ReadFileCallback::openArchive( filename, status, indexBlockSizeHint, boost::python::ptr(useObjectCache) );
    }

    virtual ::osgDB::ReaderWriter::ReadResult readHeightField( ::std::string const & filename, ::osgDB::Options const * options ) {
        if( bp::override func_readHeightField = this->get_override( "readHeightField" ) )
            return func_readHeightField( filename, boost::python::ptr(options) );
        else{
            return this->osgDB::ReadFileCallback::readHeightField( filename, boost::python::ptr(options) );
        }
    }
    
    ::osgDB::ReaderWriter::ReadResult default_readHeightField( ::std::string const & filename, ::osgDB::Options const * options ) {
        return osgDB::ReadFileCallback::readHeightField( filename, boost::python::ptr(options) );
    }

    virtual ::osgDB::ReaderWriter::ReadResult readImage( ::std::string const & filename, ::osgDB::Options const * options ) {
        if( bp::override func_readImage = this->get_override( "readImage" ) )
            return func_readImage( filename, boost::python::ptr(options) );
        else{
            return this->osgDB::ReadFileCallback::readImage( filename, boost::python::ptr(options) );
        }
    }
    
    ::osgDB::ReaderWriter::ReadResult default_readImage( ::std::string const & filename, ::osgDB::Options const * options ) {
        return osgDB::ReadFileCallback::readImage( filename, boost::python::ptr(options) );
    }

    virtual ::osgDB::ReaderWriter::ReadResult readNode( ::std::string const & filename, ::osgDB::Options const * options ) {
        if( bp::override func_readNode = this->get_override( "readNode" ) )
            return func_readNode( filename, boost::python::ptr(options) );
        else{
            return this->osgDB::ReadFileCallback::readNode( filename, boost::python::ptr(options) );
        }
    }
    
    ::osgDB::ReaderWriter::ReadResult default_readNode( ::std::string const & filename, ::osgDB::Options const * options ) {
        return osgDB::ReadFileCallback::readNode( filename, boost::python::ptr(options) );
    }

    virtual ::osgDB::ReaderWriter::ReadResult readObject( ::std::string const & filename, ::osgDB::Options const * options ) {
        if( bp::override func_readObject = this->get_override( "readObject" ) )
            return func_readObject( filename, boost::python::ptr(options) );
        else{
            return this->osgDB::ReadFileCallback::readObject( filename, boost::python::ptr(options) );
        }
    }
    
    ::osgDB::ReaderWriter::ReadResult default_readObject( ::std::string const & filename, ::osgDB::Options const * options ) {
        return osgDB::ReadFileCallback::readObject( filename, boost::python::ptr(options) );
    }

    virtual ::osgDB::ReaderWriter::ReadResult readShader( ::std::string const & filename, ::osgDB::Options const * options ) {
        if( bp::override func_readShader = this->get_override( "readShader" ) )
            return func_readShader( filename, boost::python::ptr(options) );
        else{
            return this->osgDB::ReadFileCallback::readShader( filename, boost::python::ptr(options) );
        }
    }
    
    ::osgDB::ReaderWriter::ReadResult default_readShader( ::std::string const & filename, ::osgDB::Options const * options ) {
        return osgDB::ReadFileCallback::readShader( filename, boost::python::ptr(options) );
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Referenced::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Referenced::setThreadSafeRefUnref( threadSafe );
    }

};

void register_ReadFileCallback_class(){

    bp::class_< ReadFileCallback_wrapper, bp::bases< ::osg::Referenced >, boost::noncopyable >( "ReadFileCallback", bp::no_init )    
        .def( 
            "openArchive"
            , (::osgDB::ReaderWriter::ReadResult ( ::osgDB::ReadFileCallback::* )( ::std::string const &,::osgDB::ReaderWriter::ArchiveStatus,unsigned int,::osgDB::Options const * ))(&::osgDB::ReadFileCallback::openArchive)
            , (::osgDB::ReaderWriter::ReadResult ( ReadFileCallback_wrapper::* )( ::std::string const &,::osgDB::ReaderWriter::ArchiveStatus,unsigned int,::osgDB::Options const * ))(&ReadFileCallback_wrapper::default_openArchive)
            , ( bp::arg("filename"), bp::arg("status"), bp::arg("indexBlockSizeHint"), bp::arg("useObjectCache") ) )    
        .def( 
            "readHeightField"
            , (::osgDB::ReaderWriter::ReadResult ( ::osgDB::ReadFileCallback::* )( ::std::string const &,::osgDB::Options const * ))(&::osgDB::ReadFileCallback::readHeightField)
            , (::osgDB::ReaderWriter::ReadResult ( ReadFileCallback_wrapper::* )( ::std::string const &,::osgDB::Options const * ))(&ReadFileCallback_wrapper::default_readHeightField)
            , ( bp::arg("filename"), bp::arg("options") ) )    
        .def( 
            "readImage"
            , (::osgDB::ReaderWriter::ReadResult ( ::osgDB::ReadFileCallback::* )( ::std::string const &,::osgDB::Options const * ))(&::osgDB::ReadFileCallback::readImage)
            , (::osgDB::ReaderWriter::ReadResult ( ReadFileCallback_wrapper::* )( ::std::string const &,::osgDB::Options const * ))(&ReadFileCallback_wrapper::default_readImage)
            , ( bp::arg("filename"), bp::arg("options") ) )    
        .def( 
            "readNode"
            , (::osgDB::ReaderWriter::ReadResult ( ::osgDB::ReadFileCallback::* )( ::std::string const &,::osgDB::Options const * ))(&::osgDB::ReadFileCallback::readNode)
            , (::osgDB::ReaderWriter::ReadResult ( ReadFileCallback_wrapper::* )( ::std::string const &,::osgDB::Options const * ))(&ReadFileCallback_wrapper::default_readNode)
            , ( bp::arg("filename"), bp::arg("options") ) )    
        .def( 
            "readObject"
            , (::osgDB::ReaderWriter::ReadResult ( ::osgDB::ReadFileCallback::* )( ::std::string const &,::osgDB::Options const * ))(&::osgDB::ReadFileCallback::readObject)
            , (::osgDB::ReaderWriter::ReadResult ( ReadFileCallback_wrapper::* )( ::std::string const &,::osgDB::Options const * ))(&ReadFileCallback_wrapper::default_readObject)
            , ( bp::arg("filename"), bp::arg("options") ) )    
        .def( 
            "readShader"
            , (::osgDB::ReaderWriter::ReadResult ( ::osgDB::ReadFileCallback::* )( ::std::string const &,::osgDB::Options const * ))(&::osgDB::ReadFileCallback::readShader)
            , (::osgDB::ReaderWriter::ReadResult ( ReadFileCallback_wrapper::* )( ::std::string const &,::osgDB::Options const * ))(&ReadFileCallback_wrapper::default_readShader)
            , ( bp::arg("filename"), bp::arg("options") ) );

}
