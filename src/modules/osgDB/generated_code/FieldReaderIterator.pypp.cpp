// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgdb.h"
#include "fieldreaderiterator.pypp.hpp"

namespace bp = boost::python;

struct FieldReaderIterator_wrapper : osgDB::FieldReaderIterator, bp::wrapper< osgDB::FieldReaderIterator > {

    FieldReaderIterator_wrapper( )
    : osgDB::FieldReaderIterator( )
      , bp::wrapper< osgDB::FieldReaderIterator >(){
        // null constructor
    
    }

    FieldReaderIterator_wrapper(::osgDB::FieldReaderIterator const & ic )
    : osgDB::FieldReaderIterator( boost::ref(ic) )
      , bp::wrapper< osgDB::FieldReaderIterator >(){
        // copy constructor
    
    }

    virtual bool eof(  ) const  {
        if( bp::override func_eof = this->get_override( "eof" ) )
            return func_eof(  );
        else{
            return this->osgDB::FieldReaderIterator::eof(  );
        }
    }
    
    bool default_eof(  ) const  {
        return osgDB::FieldReaderIterator::eof( );
    }

};

void register_FieldReaderIterator_class(){

    { //::osgDB::FieldReaderIterator
        typedef bp::class_< FieldReaderIterator_wrapper > FieldReaderIterator_exposer_t;
        FieldReaderIterator_exposer_t FieldReaderIterator_exposer = FieldReaderIterator_exposer_t( "FieldReaderIterator", bp::init< >() );
        bp::scope FieldReaderIterator_scope( FieldReaderIterator_exposer );
        bp::scope().attr("MINIMUM_FIELD_READER_QUEUE_SIZE") = (int)osgDB::FieldReaderIterator::MINIMUM_FIELD_READER_QUEUE_SIZE;
        FieldReaderIterator_exposer.def( bp::init< osgDB::FieldReaderIterator const & >(( bp::arg("ic") )) );
        { //::osgDB::FieldReaderIterator::advanceOverCurrentFieldOrBlock
        
            typedef void ( ::osgDB::FieldReaderIterator::*advanceOverCurrentFieldOrBlock_function_type)(  ) ;
            
            FieldReaderIterator_exposer.def( 
                "advanceOverCurrentFieldOrBlock"
                , advanceOverCurrentFieldOrBlock_function_type( &::osgDB::FieldReaderIterator::advanceOverCurrentFieldOrBlock ) );
        
        }
        { //::osgDB::FieldReaderIterator::advanceToEndOfBlock
        
            typedef void ( ::osgDB::FieldReaderIterator::*advanceToEndOfBlock_function_type)( int ) ;
            
            FieldReaderIterator_exposer.def( 
                "advanceToEndOfBlock"
                , advanceToEndOfBlock_function_type( &::osgDB::FieldReaderIterator::advanceToEndOfBlock )
                , ( bp::arg("noNestBrackets") ) );
        
        }
        { //::osgDB::FieldReaderIterator::advanceToEndOfCurrentBlock
        
            typedef void ( ::osgDB::FieldReaderIterator::*advanceToEndOfCurrentBlock_function_type)(  ) ;
            
            FieldReaderIterator_exposer.def( 
                "advanceToEndOfCurrentBlock"
                , advanceToEndOfCurrentBlock_function_type( &::osgDB::FieldReaderIterator::advanceToEndOfCurrentBlock ) );
        
        }
        { //::osgDB::FieldReaderIterator::attach
        
            typedef void ( ::osgDB::FieldReaderIterator::*attach_function_type)( ::std::istream * ) ;
            
            FieldReaderIterator_exposer.def( 
                "attach"
                , attach_function_type( &::osgDB::FieldReaderIterator::attach )
                , ( bp::arg("input") ) );
        
        }
        { //::osgDB::FieldReaderIterator::detach
        
            typedef void ( ::osgDB::FieldReaderIterator::*detach_function_type)(  ) ;
            
            FieldReaderIterator_exposer.def( 
                "detach"
                , detach_function_type( &::osgDB::FieldReaderIterator::detach ) );
        
        }
        { //::osgDB::FieldReaderIterator::eof
        
            typedef bool ( ::osgDB::FieldReaderIterator::*eof_function_type)(  ) const;
            typedef bool ( FieldReaderIterator_wrapper::*default_eof_function_type)(  ) const;
            
            FieldReaderIterator_exposer.def( 
                "eof"
                , eof_function_type(&::osgDB::FieldReaderIterator::eof)
                , default_eof_function_type(&FieldReaderIterator_wrapper::default_eof) );
        
        }
        { //::osgDB::FieldReaderIterator::field
        
            typedef ::osgDB::Field & ( ::osgDB::FieldReaderIterator::*field_function_type)( int ) ;
            
            FieldReaderIterator_exposer.def( 
                "field"
                , field_function_type( &::osgDB::FieldReaderIterator::field )
                , ( bp::arg("pos") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgDB::FieldReaderIterator::getFieldReader
        
            typedef ::osgDB::FieldReader & ( ::osgDB::FieldReaderIterator::*getFieldReader_function_type)(  ) ;
            
            FieldReaderIterator_exposer.def( 
                "getFieldReader"
                , getFieldReader_function_type( &::osgDB::FieldReaderIterator::getFieldReader )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgDB::FieldReaderIterator::insert
        
            typedef void ( ::osgDB::FieldReaderIterator::*insert_function_type)( int,::osgDB::Field * ) ;
            
            FieldReaderIterator_exposer.def( 
                "insert"
                , insert_function_type( &::osgDB::FieldReaderIterator::insert )
                , ( bp::arg("pos"), bp::arg("field") ) );
        
        }
        { //::osgDB::FieldReaderIterator::insert
        
            typedef void ( ::osgDB::FieldReaderIterator::*insert_function_type)( int,char const * ) ;
            
            FieldReaderIterator_exposer.def( 
                "insert"
                , insert_function_type( &::osgDB::FieldReaderIterator::insert )
                , ( bp::arg("pos"), bp::arg("str") ) );
        
        }
        { //::osgDB::FieldReaderIterator::matchSequence
        
            typedef bool ( ::osgDB::FieldReaderIterator::*matchSequence_function_type)( char const * ) ;
            
            FieldReaderIterator_exposer.def( 
                "matchSequence"
                , matchSequence_function_type( &::osgDB::FieldReaderIterator::matchSequence )
                , ( bp::arg("str") ) );
        
        }
        FieldReaderIterator_exposer.def( bp::self += bp::other< int >() );
        { //::osgDB::FieldReaderIterator::operator=
        
            typedef ::osgDB::FieldReaderIterator & ( ::osgDB::FieldReaderIterator::*assign_function_type)( ::osgDB::FieldReaderIterator const & ) ;
            
            FieldReaderIterator_exposer.def( 
                "assign"
                , assign_function_type( &::osgDB::FieldReaderIterator::operator= )
                , ( bp::arg("ic") )
                , bp::return_self< >() );
        
        }
        { //::osgDB::FieldReaderIterator::operator[]
        
            typedef ::osgDB::Field & ( ::osgDB::FieldReaderIterator::*__getitem___function_type)( int ) ;
            
            FieldReaderIterator_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osgDB::FieldReaderIterator::operator[] )
                , ( bp::arg("pos") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgDB::FieldReaderIterator::readSequence
        
            typedef bool ( ::osgDB::FieldReaderIterator::*readSequence_function_type)( char const *,::std::string & ) ;
            
            FieldReaderIterator_exposer.def( 
                "readSequence"
                , readSequence_function_type( &::osgDB::FieldReaderIterator::readSequence )
                , ( bp::arg("keyword"), bp::arg("value") ) );
        
        }
        { //::osgDB::FieldReaderIterator::readSequence
        
            typedef bool ( ::osgDB::FieldReaderIterator::*readSequence_function_type)( char const *,unsigned int & ) ;
            
            FieldReaderIterator_exposer.def( 
                "readSequence"
                , readSequence_function_type( &::osgDB::FieldReaderIterator::readSequence )
                , ( bp::arg("keyword"), bp::arg("value") ) );
        
        }
        { //::osgDB::FieldReaderIterator::readSequence
        
            typedef bool ( ::osgDB::FieldReaderIterator::*readSequence_function_type)( char const *,int & ) ;
            
            FieldReaderIterator_exposer.def( 
                "readSequence"
                , readSequence_function_type( &::osgDB::FieldReaderIterator::readSequence )
                , ( bp::arg("keyword"), bp::arg("value") ) );
        
        }
        { //::osgDB::FieldReaderIterator::readSequence
        
            typedef bool ( ::osgDB::FieldReaderIterator::*readSequence_function_type)( char const *,float & ) ;
            
            FieldReaderIterator_exposer.def( 
                "readSequence"
                , readSequence_function_type( &::osgDB::FieldReaderIterator::readSequence )
                , ( bp::arg("keyword"), bp::arg("value") ) );
        
        }
        { //::osgDB::FieldReaderIterator::readSequence
        
            typedef bool ( ::osgDB::FieldReaderIterator::*readSequence_function_type)( char const *,::osg::Vec2f & ) ;
            
            FieldReaderIterator_exposer.def( 
                "readSequence"
                , readSequence_function_type( &::osgDB::FieldReaderIterator::readSequence )
                , ( bp::arg("keyword"), bp::arg("value") ) );
        
        }
        { //::osgDB::FieldReaderIterator::readSequence
        
            typedef bool ( ::osgDB::FieldReaderIterator::*readSequence_function_type)( char const *,::osg::Vec3f & ) ;
            
            FieldReaderIterator_exposer.def( 
                "readSequence"
                , readSequence_function_type( &::osgDB::FieldReaderIterator::readSequence )
                , ( bp::arg("keyword"), bp::arg("value") ) );
        
        }
        { //::osgDB::FieldReaderIterator::readSequence
        
            typedef bool ( ::osgDB::FieldReaderIterator::*readSequence_function_type)( char const *,::osg::Vec4f & ) ;
            
            FieldReaderIterator_exposer.def( 
                "readSequence"
                , readSequence_function_type( &::osgDB::FieldReaderIterator::readSequence )
                , ( bp::arg("keyword"), bp::arg("value") ) );
        
        }
        { //::osgDB::FieldReaderIterator::readSequence
        
            typedef bool ( ::osgDB::FieldReaderIterator::*readSequence_function_type)( char const *,::osg::Vec2d & ) ;
            
            FieldReaderIterator_exposer.def( 
                "readSequence"
                , readSequence_function_type( &::osgDB::FieldReaderIterator::readSequence )
                , ( bp::arg("keyword"), bp::arg("value") ) );
        
        }
        { //::osgDB::FieldReaderIterator::readSequence
        
            typedef bool ( ::osgDB::FieldReaderIterator::*readSequence_function_type)( char const *,::osg::Vec3d & ) ;
            
            FieldReaderIterator_exposer.def( 
                "readSequence"
                , readSequence_function_type( &::osgDB::FieldReaderIterator::readSequence )
                , ( bp::arg("keyword"), bp::arg("value") ) );
        
        }
        { //::osgDB::FieldReaderIterator::readSequence
        
            typedef bool ( ::osgDB::FieldReaderIterator::*readSequence_function_type)( char const *,::osg::Vec4d & ) ;
            
            FieldReaderIterator_exposer.def( 
                "readSequence"
                , readSequence_function_type( &::osgDB::FieldReaderIterator::readSequence )
                , ( bp::arg("keyword"), bp::arg("value") ) );
        
        }
        { //::osgDB::FieldReaderIterator::readSequence
        
            typedef bool ( ::osgDB::FieldReaderIterator::*readSequence_function_type)( ::std::string & ) ;
            
            FieldReaderIterator_exposer.def( 
                "readSequence"
                , readSequence_function_type( &::osgDB::FieldReaderIterator::readSequence )
                , ( bp::arg("value") ) );
        
        }
        { //::osgDB::FieldReaderIterator::readSequence
        
            typedef bool ( ::osgDB::FieldReaderIterator::*readSequence_function_type)( unsigned int & ) ;
            
            FieldReaderIterator_exposer.def( 
                "readSequence"
                , readSequence_function_type( &::osgDB::FieldReaderIterator::readSequence )
                , ( bp::arg("value") ) );
        
        }
        { //::osgDB::FieldReaderIterator::readSequence
        
            typedef bool ( ::osgDB::FieldReaderIterator::*readSequence_function_type)( int & ) ;
            
            FieldReaderIterator_exposer.def( 
                "readSequence"
                , readSequence_function_type( &::osgDB::FieldReaderIterator::readSequence )
                , ( bp::arg("value") ) );
        
        }
        { //::osgDB::FieldReaderIterator::readSequence
        
            typedef bool ( ::osgDB::FieldReaderIterator::*readSequence_function_type)( float & ) ;
            
            FieldReaderIterator_exposer.def( 
                "readSequence"
                , readSequence_function_type( &::osgDB::FieldReaderIterator::readSequence )
                , ( bp::arg("value") ) );
        
        }
        { //::osgDB::FieldReaderIterator::readSequence
        
            typedef bool ( ::osgDB::FieldReaderIterator::*readSequence_function_type)( ::osg::Vec2f & ) ;
            
            FieldReaderIterator_exposer.def( 
                "readSequence"
                , readSequence_function_type( &::osgDB::FieldReaderIterator::readSequence )
                , ( bp::arg("value") ) );
        
        }
        { //::osgDB::FieldReaderIterator::readSequence
        
            typedef bool ( ::osgDB::FieldReaderIterator::*readSequence_function_type)( ::osg::Vec3f & ) ;
            
            FieldReaderIterator_exposer.def( 
                "readSequence"
                , readSequence_function_type( &::osgDB::FieldReaderIterator::readSequence )
                , ( bp::arg("value") ) );
        
        }
        { //::osgDB::FieldReaderIterator::readSequence
        
            typedef bool ( ::osgDB::FieldReaderIterator::*readSequence_function_type)( ::osg::Vec4f & ) ;
            
            FieldReaderIterator_exposer.def( 
                "readSequence"
                , readSequence_function_type( &::osgDB::FieldReaderIterator::readSequence )
                , ( bp::arg("value") ) );
        
        }
        { //::osgDB::FieldReaderIterator::readSequence
        
            typedef bool ( ::osgDB::FieldReaderIterator::*readSequence_function_type)( ::osg::Vec2d & ) ;
            
            FieldReaderIterator_exposer.def( 
                "readSequence"
                , readSequence_function_type( &::osgDB::FieldReaderIterator::readSequence )
                , ( bp::arg("value") ) );
        
        }
        { //::osgDB::FieldReaderIterator::readSequence
        
            typedef bool ( ::osgDB::FieldReaderIterator::*readSequence_function_type)( ::osg::Vec3d & ) ;
            
            FieldReaderIterator_exposer.def( 
                "readSequence"
                , readSequence_function_type( &::osgDB::FieldReaderIterator::readSequence )
                , ( bp::arg("value") ) );
        
        }
        { //::osgDB::FieldReaderIterator::readSequence
        
            typedef bool ( ::osgDB::FieldReaderIterator::*readSequence_function_type)( ::osg::Vec4d & ) ;
            
            FieldReaderIterator_exposer.def( 
                "readSequence"
                , readSequence_function_type( &::osgDB::FieldReaderIterator::readSequence )
                , ( bp::arg("value") ) );
        
        }
    }

}
