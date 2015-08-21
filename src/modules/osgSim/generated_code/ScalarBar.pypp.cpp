// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgsim.h"
#include "wrap_referenced.h"
#include "scalarbar.pypp.hpp"

namespace bp = boost::python;

struct ScalarBar_wrapper : osgSim::ScalarBar, bp::wrapper< osgSim::ScalarBar > {

    struct ScalarPrinter_wrapper : osgSim::ScalarBar::ScalarPrinter, bp::wrapper< osgSim::ScalarBar::ScalarPrinter > {
    
        ScalarPrinter_wrapper()
        : osgSim::ScalarBar::ScalarPrinter()
          , bp::wrapper< osgSim::ScalarBar::ScalarPrinter >(){
            // null constructor
            
        }
    
        virtual ::std::string printScalar( float scalar ) {
            if( bp::override func_printScalar = this->get_override( "printScalar" ) )
                return func_printScalar( scalar );
            else{
                return this->osgSim::ScalarBar::ScalarPrinter::printScalar( scalar );
            }
        }
        
        ::std::string default_printScalar( float scalar ) {
            return osgSim::ScalarBar::ScalarPrinter::printScalar( scalar );
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

    ScalarBar_wrapper( )
    : osgSim::ScalarBar( )
      , bp::wrapper< osgSim::ScalarBar >(){
        // null constructor
    
    }

    virtual void accept( ::osg::NodeVisitor & nv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(nv) );
        else{
            this->osgSim::ScalarBar::accept( boost::ref(nv) );
        }
    }
    
    void default_accept( ::osg::NodeVisitor & nv ) {
        osgSim::ScalarBar::accept( boost::ref(nv) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgSim::ScalarBar::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgSim::ScalarBar::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgSim::ScalarBar::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgSim::ScalarBar::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgSim::ScalarBar::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgSim::ScalarBar::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgSim::ScalarBar::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgSim::ScalarBar::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgSim::ScalarBar::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgSim::ScalarBar::libraryName( );
    }

    virtual bool addDrawable( ::osg::Drawable * drawable ) {
        if( bp::override func_addDrawable = this->get_override( "addDrawable" ) )
            return func_addDrawable( boost::python::ptr(drawable) );
        else{
            return this->osg::Geode::addDrawable( boost::python::ptr(drawable) );
        }
    }
    
    bool default_addDrawable( ::osg::Drawable * drawable ) {
        return osg::Geode::addDrawable( boost::python::ptr(drawable) );
    }

    virtual ::osg::Camera * asCamera(  ) {
        if( bp::override func_asCamera = this->get_override( "asCamera" ) )
            return func_asCamera(  );
        else{
            return this->osg::Node::asCamera(  );
        }
    }
    
    ::osg::Camera * default_asCamera(  ) {
        return osg::Node::asCamera( );
    }

    virtual ::osg::Camera const * asCamera(  ) const  {
        if( bp::override func_asCamera = this->get_override( "asCamera" ) )
            return func_asCamera(  );
        else{
            return this->osg::Node::asCamera(  );
        }
    }
    
    ::osg::Camera const * default_asCamera(  ) const  {
        return osg::Node::asCamera( );
    }

    virtual ::osg::Geode * asGeode(  ) {
        if( bp::override func_asGeode = this->get_override( "asGeode" ) )
            return func_asGeode(  );
        else{
            return this->osg::Geode::asGeode(  );
        }
    }
    
    ::osg::Geode * default_asGeode(  ) {
        return osg::Geode::asGeode( );
    }

    virtual ::osg::Geode const * asGeode(  ) const  {
        if( bp::override func_asGeode = this->get_override( "asGeode" ) )
            return func_asGeode(  );
        else{
            return this->osg::Geode::asGeode(  );
        }
    }
    
    ::osg::Geode const * default_asGeode(  ) const  {
        return osg::Geode::asGeode( );
    }

    virtual ::osg::Group * asGroup(  ) {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Node::asGroup(  );
        }
    }
    
    ::osg::Group * default_asGroup(  ) {
        return osg::Node::asGroup( );
    }

    virtual ::osg::Group const * asGroup(  ) const  {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Node::asGroup(  );
        }
    }
    
    ::osg::Group const * default_asGroup(  ) const  {
        return osg::Node::asGroup( );
    }

    virtual ::osg::Switch * asSwitch(  ) {
        if( bp::override func_asSwitch = this->get_override( "asSwitch" ) )
            return func_asSwitch(  );
        else{
            return this->osg::Node::asSwitch(  );
        }
    }
    
    ::osg::Switch * default_asSwitch(  ) {
        return osg::Node::asSwitch( );
    }

    virtual ::osg::Switch const * asSwitch(  ) const  {
        if( bp::override func_asSwitch = this->get_override( "asSwitch" ) )
            return func_asSwitch(  );
        else{
            return this->osg::Node::asSwitch(  );
        }
    }
    
    ::osg::Switch const * default_asSwitch(  ) const  {
        return osg::Node::asSwitch( );
    }

    virtual ::osg::Transform * asTransform(  ) {
        if( bp::override func_asTransform = this->get_override( "asTransform" ) )
            return func_asTransform(  );
        else{
            return this->osg::Node::asTransform(  );
        }
    }
    
    ::osg::Transform * default_asTransform(  ) {
        return osg::Node::asTransform( );
    }

    virtual ::osg::Transform const * asTransform(  ) const  {
        if( bp::override func_asTransform = this->get_override( "asTransform" ) )
            return func_asTransform(  );
        else{
            return this->osg::Node::asTransform(  );
        }
    }
    
    ::osg::Transform const * default_asTransform(  ) const  {
        return osg::Node::asTransform( );
    }

    virtual void ascend( ::osg::NodeVisitor & nv ) {
        if( bp::override func_ascend = this->get_override( "ascend" ) )
            func_ascend( boost::ref(nv) );
        else{
            this->osg::Node::ascend( boost::ref(nv) );
        }
    }
    
    void default_ascend( ::osg::NodeVisitor & nv ) {
        osg::Node::ascend( boost::ref(nv) );
    }

    virtual ::osg::BoundingSphere computeBound(  ) const  {
        if( bp::override func_computeBound = this->get_override( "computeBound" ) )
            return func_computeBound(  );
        else{
            return this->osg::Geode::computeBound(  );
        }
    }
    
    ::osg::BoundingSphere default_computeBound(  ) const  {
        return osg::Geode::computeBound( );
    }

    virtual void computeDataVariance(  ) {
        if( bp::override func_computeDataVariance = this->get_override( "computeDataVariance" ) )
            func_computeDataVariance(  );
        else{
            this->osg::Object::computeDataVariance(  );
        }
    }
    
    void default_computeDataVariance(  ) {
        osg::Object::computeDataVariance( );
    }

    virtual ::osg::Referenced * getUserData(  ) {
        if( bp::override func_getUserData = this->get_override( "getUserData" ) )
            return func_getUserData(  );
        else{
            return this->osg::Object::getUserData(  );
        }
    }
    
    ::osg::Referenced * default_getUserData(  ) {
        return osg::Object::getUserData( );
    }

    virtual ::osg::Referenced const * getUserData(  ) const  {
        if( bp::override func_getUserData = this->get_override( "getUserData" ) )
            return func_getUserData(  );
        else{
            return this->osg::Object::getUserData(  );
        }
    }
    
    ::osg::Referenced const * default_getUserData(  ) const  {
        return osg::Object::getUserData( );
    }

    virtual bool removeDrawable( ::osg::Drawable * drawable ) {
        if( bp::override func_removeDrawable = this->get_override( "removeDrawable" ) )
            return func_removeDrawable( boost::python::ptr(drawable) );
        else{
            return this->osg::Geode::removeDrawable( boost::python::ptr(drawable) );
        }
    }
    
    bool default_removeDrawable( ::osg::Drawable * drawable ) {
        return osg::Geode::removeDrawable( boost::python::ptr(drawable) );
    }

    virtual bool removeDrawables( unsigned int i, unsigned int numDrawablesToRemove=1 ) {
        if( bp::override func_removeDrawables = this->get_override( "removeDrawables" ) )
            return func_removeDrawables( i, numDrawablesToRemove );
        else{
            return this->osg::Geode::removeDrawables( i, numDrawablesToRemove );
        }
    }
    
    bool default_removeDrawables( unsigned int i, unsigned int numDrawablesToRemove=1 ) {
        return osg::Geode::removeDrawables( i, numDrawablesToRemove );
    }

    virtual bool replaceDrawable( ::osg::Drawable * origDraw, ::osg::Drawable * newDraw ) {
        if( bp::override func_replaceDrawable = this->get_override( "replaceDrawable" ) )
            return func_replaceDrawable( boost::python::ptr(origDraw), boost::python::ptr(newDraw) );
        else{
            return this->osg::Geode::replaceDrawable( boost::python::ptr(origDraw), boost::python::ptr(newDraw) );
        }
    }
    
    bool default_replaceDrawable( ::osg::Drawable * origDraw, ::osg::Drawable * newDraw ) {
        return osg::Geode::replaceDrawable( boost::python::ptr(origDraw), boost::python::ptr(newDraw) );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::Geode::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::Geode::resizeGLObjectBuffers( maxSize );
    }

    virtual bool setDrawable( unsigned int i, ::osg::Drawable * drawable ) {
        if( bp::override func_setDrawable = this->get_override( "setDrawable" ) )
            return func_setDrawable( i, boost::python::ptr(drawable) );
        else{
            return this->osg::Geode::setDrawable( i, boost::python::ptr(drawable) );
        }
    }
    
    bool default_setDrawable( unsigned int i, ::osg::Drawable * drawable ) {
        return osg::Geode::setDrawable( i, boost::python::ptr(drawable) );
    }

    virtual void setName( ::std::string const & name ) {
        if( bp::override func_setName = this->get_override( "setName" ) )
            func_setName( name );
        else{
            this->osg::Object::setName( name );
        }
    }
    
    void default_setName( ::std::string const & name ) {
        osg::Object::setName( name );
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Geode::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Geode::setThreadSafeRefUnref( threadSafe );
    }

    virtual void setUserData( ::osg::Referenced * obj ) {
        if( bp::override func_setUserData = this->get_override( "setUserData" ) )
            func_setUserData( boost::python::ptr(obj) );
        else{
            this->osg::Object::setUserData( boost::python::ptr(obj) );
        }
    }
    
    void default_setUserData( ::osg::Referenced * obj ) {
        osg::Object::setUserData( boost::python::ptr(obj) );
    }

    virtual void traverse( ::osg::NodeVisitor & arg0 ) {
        if( bp::override func_traverse = this->get_override( "traverse" ) )
            func_traverse( boost::ref(arg0) );
        else{
            this->osg::Node::traverse( boost::ref(arg0) );
        }
    }
    
    void default_traverse( ::osg::NodeVisitor & arg0 ) {
        osg::Node::traverse( boost::ref(arg0) );
    }

};

void register_ScalarBar_class(){

    { //::osgSim::ScalarBar
        typedef bp::class_< ScalarBar_wrapper, bp::bases< ::osg::Geode >, osg::ref_ptr< ScalarBar_wrapper >, boost::noncopyable > ScalarBar_exposer_t;
        ScalarBar_exposer_t ScalarBar_exposer = ScalarBar_exposer_t( "ScalarBar", "\nA ScalarBar is an osg::Geode to render a colored bar representing a range\nof scalars. The scalar/color ranges are specified by an instance of\nScalarsToColors. There are a number of configurable properties on the\nScalarBar, such as the orientation, the number of labels to be displayed\nacross the range, the number of distinct colors to use when rendering the\nbar, text details etc.\n\nIn summary, the main configurables on the ScalarBar are:\n\n -# The range of scalars represented by the bar, and the colors\n    corresponding to this range - these are specified by the\n    ScalarsToColors object.\n -# The number of colors used when rendering the bar geometry -\n    this may be thought of as the bar density.\n -# The number of text labels to be used when displaying the bar.\n\nThe other configurables should be self-explanatory.\n", bp::no_init );
        bp::scope ScalarBar_scope( ScalarBar_exposer );
        bp::enum_< osgSim::ScalarBar::Orientation>("Orientation")
            .value("HORIZONTAL", osgSim::ScalarBar::HORIZONTAL)
            .value("VERTICAL", osgSim::ScalarBar::VERTICAL)
            .export_values()
            ;
        bp::class_< ScalarBar_wrapper::ScalarPrinter_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< ScalarBar_wrapper::ScalarPrinter_wrapper >, boost::noncopyable >( "ScalarPrinter", "\n    Users may provide their own ScalarPrinter by deriving from this base class and\n    overriding the printScalar() method. Users may map the scalar float passed in\n    to any string they wish.\n" )    
            .def( 
                "printScalar"
                , (::std::string ( ::osgSim::ScalarBar::ScalarPrinter::* )( float ))(&::osgSim::ScalarBar::ScalarPrinter::printScalar)
                , (::std::string ( ScalarBar_wrapper::ScalarPrinter_wrapper::* )( float ))(&ScalarBar_wrapper::ScalarPrinter_wrapper::default_printScalar)
                , ( bp::arg("scalar") ) );
        bp::class_< osgSim::ScalarBar::TextProperties >( "TextProperties", "    TextProperties allows users to specify a number of properties for the\n    text used to display the labels & title on the ScalarBar. Specifiying a character\n    size of 0 will cause the ScalarBar to estimate an appropriate size. Note that\n    the attributes are public, and may be set directly.", bp::init< >() )    
            .def_readwrite( "_characterSize", &osgSim::ScalarBar::TextProperties::_characterSize )    
            .def_readwrite( "_color", &osgSim::ScalarBar::TextProperties::_color )    
            .def_readwrite( "_fontFile", &osgSim::ScalarBar::TextProperties::_fontFile, "    TextProperties allows users to specify a number of properties for the\n    text used to display the labels & title on the ScalarBar. Specifiying a character\n    size of 0 will cause the ScalarBar to estimate an appropriate size. Note that\n    the attributes are public, and may be set directly." )    
            .def_readwrite( "_fontResolution", &osgSim::ScalarBar::TextProperties::_fontResolution );
        ScalarBar_exposer.def( bp::init< >("\n Default constructor.\n") );
        { //::osgSim::ScalarBar::accept
        
            typedef void ( ::osgSim::ScalarBar::*accept_function_type)( ::osg::NodeVisitor & ) ;
            typedef void ( ScalarBar_wrapper::*default_accept_function_type)( ::osg::NodeVisitor & ) ;
            
            ScalarBar_exposer.def( 
                "accept"
                , accept_function_type(&::osgSim::ScalarBar::accept)
                , default_accept_function_type(&ScalarBar_wrapper::default_accept)
                , ( bp::arg("nv") ) );
        
        }
        { //::osgSim::ScalarBar::className
        
            typedef char const * ( ::osgSim::ScalarBar::*className_function_type)(  ) const;
            typedef char const * ( ScalarBar_wrapper::*default_className_function_type)(  ) const;
            
            ScalarBar_exposer.def( 
                "className"
                , className_function_type(&::osgSim::ScalarBar::className)
                , default_className_function_type(&ScalarBar_wrapper::default_className) );
        
        }
        { //::osgSim::ScalarBar::clone
        
            typedef ::osg::Object * ( ::osgSim::ScalarBar::*clone_function_type)( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( ScalarBar_wrapper::*default_clone_function_type)( ::osg::CopyOp const & ) const;
            
            ScalarBar_exposer.def( 
                "clone"
                , clone_function_type(&::osgSim::ScalarBar::clone)
                , default_clone_function_type(&ScalarBar_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgSim::ScalarBar::cloneType
        
            typedef ::osg::Object * ( ::osgSim::ScalarBar::*cloneType_function_type)(  ) const;
            typedef ::osg::Object * ( ScalarBar_wrapper::*default_cloneType_function_type)(  ) const;
            
            ScalarBar_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osgSim::ScalarBar::cloneType)
                , default_cloneType_function_type(&ScalarBar_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgSim::ScalarBar::getAspectRatio
        
            typedef float ( ::osgSim::ScalarBar::*getAspectRatio_function_type)(  ) const;
            
            ScalarBar_exposer.def( 
                "getAspectRatio"
                , getAspectRatio_function_type( &::osgSim::ScalarBar::getAspectRatio )
                , " Get the aspect ration (y/x) for the displayed bar." );
        
        }
        { //::osgSim::ScalarBar::getNumColors
        
            typedef int ( ::osgSim::ScalarBar::*getNumColors_function_type)(  ) const;
            
            ScalarBar_exposer.def( 
                "getNumColors"
                , getNumColors_function_type( &::osgSim::ScalarBar::getNumColors )
                , " Get the number of distinct colours on the ScalarBar." );
        
        }
        { //::osgSim::ScalarBar::getNumLabels
        
            typedef int ( ::osgSim::ScalarBar::*getNumLabels_function_type)(  ) const;
            
            ScalarBar_exposer.def( 
                "getNumLabels"
                , getNumLabels_function_type( &::osgSim::ScalarBar::getNumLabels )
                , " Get the number of labels displayed along the ScalarBar." );
        
        }
        { //::osgSim::ScalarBar::getOrientation
        
            typedef ::osgSim::ScalarBar::Orientation ( ::osgSim::ScalarBar::*getOrientation_function_type)(  ) const;
            
            ScalarBar_exposer.def( 
                "getOrientation"
                , getOrientation_function_type( &::osgSim::ScalarBar::getOrientation )
                , " Get the orientation of the ScalarBar.  aee Orientation" );
        
        }
        { //::osgSim::ScalarBar::getPosition
        
            typedef ::osg::Vec3 const & ( ::osgSim::ScalarBar::*getPosition_function_type)(  ) const;
            
            ScalarBar_exposer.def( 
                "getPosition"
                , getPosition_function_type( &::osgSim::ScalarBar::getPosition )
                , bp::return_internal_reference< >()
                , " Get the position of scalar bar." );
        
        }
        { //::osgSim::ScalarBar::getScalarPrinter
        
            typedef ::osgSim::ScalarBar::ScalarPrinter const * ( ::osgSim::ScalarBar::*getScalarPrinter_function_type)(  ) const;
            
            ScalarBar_exposer.def( 
                "getScalarPrinter"
                , getScalarPrinter_function_type( &::osgSim::ScalarBar::getScalarPrinter )
                , bp::return_internal_reference< >()
                , " Get the ScalarPrinter object" );
        
        }
        { //::osgSim::ScalarBar::getScalarsToColors
        
            typedef ::osgSim::ScalarsToColors const * ( ::osgSim::ScalarBar::*getScalarsToColors_function_type)(  ) const;
            
            ScalarBar_exposer.def( 
                "getScalarsToColors"
                , getScalarsToColors_function_type( &::osgSim::ScalarBar::getScalarsToColors )
                , bp::return_internal_reference< >()
                , " Get the ScalarsToColors mapping object from the ScalarBar." );
        
        }
        { //::osgSim::ScalarBar::getTextProperties
        
            typedef ::osgSim::ScalarBar::TextProperties const & ( ::osgSim::ScalarBar::*getTextProperties_function_type)(  ) const;
            
            ScalarBar_exposer.def( 
                "getTextProperties"
                , getTextProperties_function_type( &::osgSim::ScalarBar::getTextProperties )
                , bp::return_internal_reference< >()
                , " Get the TextProperties for the labels & title. aee TextProperties" );
        
        }
        { //::osgSim::ScalarBar::getTitle
        
            typedef ::std::string const & ( ::osgSim::ScalarBar::*getTitle_function_type)(  ) const;
            
            ScalarBar_exposer.def( 
                "getTitle"
                , getTitle_function_type( &::osgSim::ScalarBar::getTitle )
                , bp::return_value_policy< bp::copy_const_reference >()
                , " Get the title for the ScalarBar." );
        
        }
        { //::osgSim::ScalarBar::getWidth
        
            typedef float ( ::osgSim::ScalarBar::*getWidth_function_type)(  ) const;
            
            ScalarBar_exposer.def( 
                "getWidth"
                , getWidth_function_type( &::osgSim::ScalarBar::getWidth )
                , " Get the width of the scalar bar." );
        
        }
        { //::osgSim::ScalarBar::isSameKindAs
        
            typedef bool ( ::osgSim::ScalarBar::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( ScalarBar_wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            ScalarBar_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osgSim::ScalarBar::isSameKindAs)
                , default_isSameKindAs_function_type(&ScalarBar_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osgSim::ScalarBar::libraryName
        
            typedef char const * ( ::osgSim::ScalarBar::*libraryName_function_type)(  ) const;
            typedef char const * ( ScalarBar_wrapper::*default_libraryName_function_type)(  ) const;
            
            ScalarBar_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osgSim::ScalarBar::libraryName)
                , default_libraryName_function_type(&ScalarBar_wrapper::default_libraryName) );
        
        }
        { //::osgSim::ScalarBar::setAspectRatio
        
            typedef void ( ::osgSim::ScalarBar::*setAspectRatio_function_type)( float ) ;
            
            ScalarBar_exposer.def( 
                "setAspectRatio"
                , setAspectRatio_function_type( &::osgSim::ScalarBar::setAspectRatio )
                , ( bp::arg("aspectRatio") )
                , " Set the aspect ration (y/x) for the displayed bar. Bear in mind you\n    may want to change this if you change the orientation." );
        
        }
        { //::osgSim::ScalarBar::setNumColors
        
            typedef void ( ::osgSim::ScalarBar::*setNumColors_function_type)( int ) ;
            
            ScalarBar_exposer.def( 
                "setNumColors"
                , setNumColors_function_type( &::osgSim::ScalarBar::setNumColors )
                , ( bp::arg("numColors") )
                , " Set the number of distinct colours on the ScalarBar." );
        
        }
        { //::osgSim::ScalarBar::setNumLabels
        
            typedef void ( ::osgSim::ScalarBar::*setNumLabels_function_type)( int ) ;
            
            ScalarBar_exposer.def( 
                "setNumLabels"
                , setNumLabels_function_type( &::osgSim::ScalarBar::setNumLabels )
                , ( bp::arg("numLabels") )
                , " Set the number of labels to display along the ScalarBar. There\n    will be one label at each end point, and evenly distributed labels\n    in between." );
        
        }
        { //::osgSim::ScalarBar::setOrientation
        
            typedef void ( ::osgSim::ScalarBar::*setOrientation_function_type)( ::osgSim::ScalarBar::Orientation ) ;
            
            ScalarBar_exposer.def( 
                "setOrientation"
                , setOrientation_function_type( &::osgSim::ScalarBar::setOrientation )
                , ( bp::arg("orientation") )
                , " Set the orientation of the ScalarBar. aee Orientation" );
        
        }
        { //::osgSim::ScalarBar::setPosition
        
            typedef void ( ::osgSim::ScalarBar::*setPosition_function_type)( ::osg::Vec3 const & ) ;
            
            ScalarBar_exposer.def( 
                "setPosition"
                , setPosition_function_type( &::osgSim::ScalarBar::setPosition )
                , ( bp::arg("pos") )
                , " Set the position of scalar bars lower left corner." );
        
        }
        { //::osgSim::ScalarBar::setScalarPrinter
        
            typedef void ( ::osgSim::ScalarBar::*setScalarPrinter_function_type)( ::osgSim::ScalarBar::ScalarPrinter * ) ;
            
            ScalarBar_exposer.def( 
                "setScalarPrinter"
                , setScalarPrinter_function_type( &::osgSim::ScalarBar::setScalarPrinter )
                , ( bp::arg("sp") )
                , " Set a ScalarPrinter object for the ScalarBar. For every displayed\n    ScalarBar label, the scalar value will be passed to the ScalarPrinter\n    object to turn it into a string. Users may override the default ScalarPrinter\n    object to map scalars to whatever strings they wish. aee ScalarPrinter" );
        
        }
        { //::osgSim::ScalarBar::setScalarsToColors
        
            typedef void ( ::osgSim::ScalarBar::*setScalarsToColors_function_type)( ::osgSim::ScalarsToColors * ) ;
            
            ScalarBar_exposer.def( 
                "setScalarsToColors"
                , setScalarsToColors_function_type( &::osgSim::ScalarBar::setScalarsToColors )
                , ( bp::arg("stc") )
                , " Set the ScalarsToColors mapping object for the ScalarBar." );
        
        }
        { //::osgSim::ScalarBar::setTextProperties
        
            typedef void ( ::osgSim::ScalarBar::*setTextProperties_function_type)( ::osgSim::ScalarBar::TextProperties const & ) ;
            
            ScalarBar_exposer.def( 
                "setTextProperties"
                , setTextProperties_function_type( &::osgSim::ScalarBar::setTextProperties )
                , ( bp::arg("tp") )
                , " Set the TextProperties for the labels & title. aee TextProperties" );
        
        }
        { //::osgSim::ScalarBar::setTitle
        
            typedef void ( ::osgSim::ScalarBar::*setTitle_function_type)( ::std::string const & ) ;
            
            ScalarBar_exposer.def( 
                "setTitle"
                , setTitle_function_type( &::osgSim::ScalarBar::setTitle )
                , ( bp::arg("title") )
                , " Set the title for the ScalarBar, set   for no title." );
        
        }
        { //::osgSim::ScalarBar::setWidth
        
            typedef void ( ::osgSim::ScalarBar::*setWidth_function_type)( float ) ;
            
            ScalarBar_exposer.def( 
                "setWidth"
                , setWidth_function_type( &::osgSim::ScalarBar::setWidth )
                , ( bp::arg("width") )
                , " Set the width of the scalar bar." );
        
        }
        { //::osgSim::ScalarBar::update
        
            typedef void ( ::osgSim::ScalarBar::*update_function_type)(  ) ;
            
            ScalarBar_exposer.def( 
                "update"
                , update_function_type( &::osgSim::ScalarBar::update )
                , " force update the drawables used to render the scalar bar." );
        
        }
    }

}