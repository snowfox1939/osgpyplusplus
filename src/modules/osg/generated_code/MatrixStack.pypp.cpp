// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "matrixstack.pypp.hpp"

namespace bp = boost::python;

void register_MatrixStack_class(){

    { //::osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > >
        typedef bp::class_< osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > > > MatrixStack_exposer_t;
        MatrixStack_exposer_t MatrixStack_exposer = MatrixStack_exposer_t( "MatrixStack", "\n Simple stack implementation that keeps the back() cached locally for fast access\n rather than at the back of the vector which is the traditional stack implementation.\n A conventional std::vector<> stores the rest of the stack. Although fast_back_stack\n  contains a stl container it only implements the back push_back(),pop_back()\n and back() methods so is not as general purpose as stl stack implementation.\n The focus of the fast_back_stack is purely to maximize the speed at which the\n back can be accessed.\n", bp::init< >("\n Simple stack implementation that keeps the back() cached locally for fast access\n rather than at the back of the vector which is the traditional stack implementation.\n A conventional std::vector<> stores the rest of the stack. Although fast_back_stack\n  contains a stl container it only implements the back push_back(),pop_back()\n and back() methods so is not as general purpose as stl stack implementation.\n The focus of the fast_back_stack is purely to maximize the speed at which the\n back can be accessed.\n") );
        bp::scope MatrixStack_scope( MatrixStack_exposer );
        MatrixStack_exposer.def( bp::init< osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > > const & >(( bp::arg("fbs") ), "\n Simple stack implementation that keeps the back() cached locally for fast access\n rather than at the back of the vector which is the traditional stack implementation.\n A conventional std::vector<> stores the rest of the stack. Although fast_back_stack\n  contains a stl container it only implements the back push_back(),pop_back()\n and back() methods so is not as general purpose as stl stack implementation.\n The focus of the fast_back_stack is purely to maximize the speed at which the\n back can be accessed.\n") );
        MatrixStack_exposer.def( bp::init< osg::ref_ptr< osg::RefMatrixd > const & >(( bp::arg("value") ), "\n Simple stack implementation that keeps the back() cached locally for fast access\n rather than at the back of the vector which is the traditional stack implementation.\n A conventional std::vector<> stores the rest of the stack. Although fast_back_stack\n  contains a stl container it only implements the back push_back(),pop_back()\n and back() methods so is not as general purpose as stl stack implementation.\n The focus of the fast_back_stack is purely to maximize the speed at which the\n back can be accessed.\n") );
        bp::implicitly_convertible< osg::ref_ptr< osg::RefMatrixd > const &, osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > > >();
        { //::osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > >::back
        
            typedef osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > > exported_class_t;
            typedef ::osg::ref_ptr< osg::RefMatrixd > & ( exported_class_t::*back_function_type)(  ) ;
            
            MatrixStack_exposer.def( 
                "back"
                , back_function_type( &::osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > >::back )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > >::back
        
            typedef osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > > exported_class_t;
            typedef ::osg::ref_ptr< osg::RefMatrixd > const & ( exported_class_t::*back_function_type)(  ) const;
            
            MatrixStack_exposer.def( 
                "back"
                , back_function_type( &::osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > >::back )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > >::clear
        
            typedef osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > > exported_class_t;
            typedef void ( exported_class_t::*clear_function_type)(  ) ;
            
            MatrixStack_exposer.def( 
                "clear"
                , clear_function_type( &::osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > >::clear ) );
        
        }
        { //::osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > >::empty
        
            typedef osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > > exported_class_t;
            typedef bool ( exported_class_t::*empty_function_type)(  ) const;
            
            MatrixStack_exposer.def( 
                "empty"
                , empty_function_type( &::osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > >::empty ) );
        
        }
        { //::osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > >::operator=
        
            typedef osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > > exported_class_t;
            typedef ::osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > > & ( exported_class_t::*assign_function_type)( ::osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > > const & ) ;
            
            MatrixStack_exposer.def( 
                "assign"
                , assign_function_type( &::osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > >::operator= )
                , ( bp::arg("fbs") )
                , bp::return_self< >()
                , "\n Simple stack implementation that keeps the back() cached locally for fast access\n rather than at the back of the vector which is the traditional stack implementation.\n A conventional std::vector<> stores the rest of the stack. Although fast_back_stack\n  contains a stl container it only implements the back push_back(),pop_back()\n and back() methods so is not as general purpose as stl stack implementation.\n The focus of the fast_back_stack is purely to maximize the speed at which the\n back can be accessed.\n" );
        
        }
        { //::osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > >::pop_back
        
            typedef osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > > exported_class_t;
            typedef void ( exported_class_t::*pop_back_function_type)(  ) ;
            
            MatrixStack_exposer.def( 
                "pop_back"
                , pop_back_function_type( &::osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > >::pop_back ) );
        
        }
        { //::osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > >::push_back
        
            typedef osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > > exported_class_t;
            typedef void ( exported_class_t::*push_back_function_type)(  ) ;
            
            MatrixStack_exposer.def( 
                "push_back"
                , push_back_function_type( &::osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > >::push_back ) );
        
        }
        { //::osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > >::push_back
        
            typedef osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > > exported_class_t;
            typedef void ( exported_class_t::*push_back_function_type)( ::osg::ref_ptr< osg::RefMatrixd > const & ) ;
            
            MatrixStack_exposer.def( 
                "push_back"
                , push_back_function_type( &::osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > >::push_back )
                , ( bp::arg("value") ) );
        
        }
        { //::osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > >::size
        
            typedef osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > > exported_class_t;
            typedef unsigned int ( exported_class_t::*size_function_type)(  ) const;
            
            MatrixStack_exposer.def( 
                "size"
                , size_function_type( &::osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > >::size ) );
        
        }
        MatrixStack_exposer.def_readwrite( "_size", &osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > >::_size );
        MatrixStack_exposer.def_readwrite( "_stack", &osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > >::_stack );
        MatrixStack_exposer.def_readwrite( "_value", &osg::fast_back_stack< osg::ref_ptr< osg::RefMatrixd > >::_value );
    }

}
