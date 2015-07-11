#!/bin/env python

# Automatically translated python version of 
# OpenSceneGraph example program "osgscreencapture"
# !!! This program will need manual tuning before it will work. !!!

import sys

from osgpypp import osg
from osgpypp import osgDB
from osgpypp import osgGA
from osgpypp import osgText
from osgpypp import osgUtil
from osgpypp import osgViewer

# -*-c++-*- OpenSceneGraph - Copyright (C) 1998-2006 Robert Osfield 
 *
 * This application is open source and may be redistributed and/or modified   
 * freely and without restriction, both in commercial and non commercial applications,
 * as long as this copyright notice is maintained.
 * 
 * This application is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.


#include <osgDB/ReadFile>
#include <osgDB/WriteFile>

#include <osgUtil/Optimizer>
#include <osg/CoordinateSystemNode>

#include <osg/Switch>
#include <osgText/Text>

#include <osgViewer/Viewer>
#include <osgViewer/ViewerEventHandlers>

#include <osgGA/TrackballManipulator>
#include <osgGA/FlightManipulator>
#include <osgGA/DriveManipulator>
#include <osgGA/KeySwitchMatrixManipulator>
#include <osgGA/StateSetManipulator>
#include <osgGA/AnimationPathManipulator>
#include <osgGA/TerrainManipulator>

#include <iostream>
#include <sstream>
#include <string.h>

class WindowCaptureCallback : public osg.Camera.DrawCallback
    public:
    
        enum Mode
            READ_PIXELS,
            SINGLE_PBO,
            DOUBLE_PBO,
            TRIPLE_PBO
        
    
        enum FramePosition
            START_FRAME,
            END_FRAME
        
    
        struct ContextData : public osg.Referenced
        
            ContextData(osg.GraphicsContext* gc, Mode mode, GLenum readBuffer,  str name):
                _gc(gc),
                _mode(mode),
                _readBuffer(readBuffer),
                _fileName(name),
                _pixelFormat(GL_BGRA),
                _type(GL_UNSIGNED_BYTE),
                _width(0),
                _height(0),
                _currentImageIndex(0),
                _currentPboIndex(0),
                _reportTimingFrequency(100),
                _numTimeValuesRecorded(0),
                _timeForReadPixels(0.0),
                _timeForFullCopy(0.0),
                _timeForMemCpy(0.0)

                _previousFrameTick = osg.Timer.instance().tick()

                if gc.getTraits() :
                    if gc.getTraits().alpha :
                        osg.notify(osg.NOTICE), "Select GL_BGRA read back format"
                        _pixelFormat = GL_BGRA
                    else: 
                        osg.notify(osg.NOTICE), "Select GL_BGR read back format"
                        _pixelFormat = GL_BGR 
            
                getSize(gc, _width, _height)
                
                print "Window size ", _width, ", ", _height
            
                # single buffered image
                _imageBuffer.push_back(new osg.Image)
                
                # double buffer PBO.
                switch(_mode)
                    case(READ_PIXELS):
                        osg.notify(osg.NOTICE), "Reading window usig glReadPixels, with out PixelBufferObject."
                        break
                    case(SINGLE_PBO): 
                        osg.notify(osg.NOTICE), "Reading window usig glReadPixels, with a single PixelBufferObject."
                        _pboBuffer.push_back(0) 
                        break
                    case(DOUBLE_PBO): 
                        osg.notify(osg.NOTICE), "Reading window usig glReadPixels, with a double buffer PixelBufferObject."
                        _pboBuffer.push_back(0) 
                        _pboBuffer.push_back(0) 
                        break
                    case(TRIPLE_PBO): 
                        osg.notify(osg.NOTICE), "Reading window usig glReadPixels, with a triple buffer PixelBufferObject."
                        _pboBuffer.push_back(0) 
                        _pboBuffer.push_back(0) 
                        _pboBuffer.push_back(0) 
                        break
                    default:
                        break                                
            
            def getSize(gc, width, height):
                if gc.getTraits() :
                    width = gc.getTraits().width
                    height = gc.getTraits().height
            
            updateTimings = void(osg.Timer_t tick_start,
                               osg.Timer_t tick_afterReadPixels,
                               osg.Timer_t tick_afterMemCpy,
                               unsigned int dataSize)

            def read():
                ext =  osg.GLBufferObject.getExtensions(_gc.getState().getContextID(),true)

                if ext.isPBOSupported()  !_pboBuffer.empty() :
                    if _pboBuffer.size()==1 :
                        singlePBO(ext)
                    else:
                        multiPBO(ext)
                else:
                    readPixels()
            
            readPixels = void()

            singlePBO = void(osg.GLBufferObject.Extensions* ext)

            multiPBO = void(osg.GLBufferObject.Extensions* ext)
        
            typedef std.vector< osg.ref_ptr<osg.Image> >             ImageBuffer
            typedef std.vector< GLuint > PBOBuffer
        
            _gc = osg.GraphicsContext*()
            _mode = Mode()
            _readBuffer = GLenum()
            _fileName = str()
            
            _pixelFormat = GLenum()
            _type = GLenum()
            _width = int()
            _height = int()
            
            unsigned int            _currentImageIndex
            _imageBuffer = ImageBuffer()
            
            unsigned int            _currentPboIndex
            _pboBuffer = PBOBuffer()

            unsigned int            _reportTimingFrequency
            unsigned int            _numTimeValuesRecorded
            _timeForReadPixels = double()
            _timeForFullCopy = double()
            _timeForMemCpy = double()
            _previousFrameTick = osg.Timer_t()
        
    
        WindowCaptureCallback(Mode mode, FramePosition position, GLenum readBuffer):
            _mode(mode),
            _position(position),
            _readBuffer(readBuffer)

        FramePosition getFramePosition()   return _position 

        ContextData* createContextData(osg.GraphicsContext* gc) 
            filename = strstream()
            filename, "test_", _contextDataMap.size(), ".jpg"
            return new ContextData(gc, _mode, _readBuffer, filename.str())
        
        ContextData* getContextData(osg.GraphicsContext* gc) 
            OpenThreads.ScopedLock<OpenThreads.Mutex> lock(_mutex)
            osg.ref_ptr<ContextData> data = _contextDataMap[gc]
            if !data : data = createContextData(gc)
            
            return data.get()

        virtual void operator () (osg.RenderInfo renderInfo) 
            glReadBuffer(_readBuffer)

            gc =  renderInfo.getState().getGraphicsContext()
            osg.ref_ptr<ContextData> cd = getContextData(gc)
            cd.read()
        
        typedef std.map<osg.GraphicsContext*, osg.ref_ptr<ContextData> > ContextDataMap

        _mode = Mode()        
        _position = FramePosition()
        _readBuffer = GLenum()
        mutable OpenThreads.Mutex  _mutex
        mutable ContextDataMap      _contextDataMap
        
        


void WindowCaptureCallback.ContextData.updateTimings(osg.Timer_t tick_start,
                                                       osg.Timer_t tick_afterReadPixels,
                                                       osg.Timer_t tick_afterMemCpy,
                                                       unsigned int dataSize)
    if !_reportTimingFrequency : return

    timeForReadPixels =  osg.Timer.instance().delta_s(tick_start, tick_afterReadPixels)
    timeForFullCopy =  osg.Timer.instance().delta_s(tick_start, tick_afterMemCpy)
    timeForMemCpy =  osg.Timer.instance().delta_s(tick_afterReadPixels, tick_afterMemCpy)

    _timeForReadPixels += timeForReadPixels
    _timeForFullCopy += timeForFullCopy
    _timeForMemCpy += timeForMemCpy
    
    ++_numTimeValuesRecorded
    
    if _numTimeValuesRecorded==_reportTimingFrequency :
        timeForReadPixels = _timeForReadPixels/double(_numTimeValuesRecorded)
        timeForFullCopy = _timeForFullCopy/double(_numTimeValuesRecorded)
        timeForMemCpy = _timeForMemCpy/double(_numTimeValuesRecorded)
        
        averageFrameTime =   osg.Timer.instance().delta_s(_previousFrameTick, tick_afterMemCpy)/double(_numTimeValuesRecorded)
        fps =  1.0/averageFrameTime    
        _previousFrameTick = tick_afterMemCpy

        _timeForReadPixels = 0.0
        _timeForFullCopy = 0.0
        _timeForMemCpy = 0.0

        _numTimeValuesRecorded = 0

        numMPixels =  double(_width * _height) / 1000000.0
        numMb =  double(dataSize) / (1024*1024)

        prec =  osg.notify(osg.NOTICE).precision(5)

        if timeForMemCpy==0.0 :
            osg.notify(osg.NOTICE), "fps = ", fps, ", full frame copy = ", timeForFullCopy*1000.0f, "ms rate = ", numMPixels / timeForFullCopy, " Mpixel/sec, copy speed = ", numMb / timeForFullCopy, " Mb/sec"
        else:
            osg.notify(osg.NOTICE), "fps = ", fps, ", full frame copy = ", timeForFullCopy*1000.0f, "ms rate = ", numMPixels / timeForFullCopy, " Mpixel/sec, ", numMb / timeForFullCopy, " Mb/sec ", "time for memcpy = ", timeForMemCpy*1000.0, "ms  memcpy speed = ", numMb / timeForMemCpy, " Mb/sec"
        osg.notify(osg.NOTICE).precision(prec)



void WindowCaptureCallback.ContextData.readPixels()
    # print "readPixels(", _fileName, " image ", _currentImageIndex, " ", _currentPboIndex

    unsigned int nextImageIndex = (_currentImageIndex+1)%_imageBuffer.size()
    unsigned int nextPboIndex = _pboBuffer.empty() ? 0 : (_currentPboIndex+1)%_pboBuffer.size()

    width = 0, height=0
    getSize(_gc, width, height)
    if width!=_width || _height!=height :
        print "   Window resized ", width, ", ", height
        _width = width
        _height = height

    image =  _imageBuffer[_currentImageIndex].get()

    tick_start =  osg.Timer.instance().tick()

#if 1
    image.readPixels(0,0,_width,_height,
                      _pixelFormat,_type)
#endif

    tick_afterReadPixels =  osg.Timer.instance().tick()

    updateTimings(tick_start, tick_afterReadPixels, tick_afterReadPixels, image.getTotalSizeInBytes())

    if !_fileName.empty() :
        # osgDB.writeImageFile(*image, _fileName)

    _currentImageIndex = nextImageIndex
    _currentPboIndex = nextPboIndex

void WindowCaptureCallback.ContextData.singlePBO(osg.GLBufferObject.Extensions* ext)
    # print "singelPBO(  ", _fileName, " image ", _currentImageIndex, " ", _currentPboIndex

    unsigned int nextImageIndex = (_currentImageIndex+1)%_imageBuffer.size()

    width = 0, height=0
    getSize(_gc, width, height)
    if width!=_width || _height!=height :
        print "   Window resized ", width, ", ", height
        _width = width
        _height = height

    pbo =  _pboBuffer[0]
    
    image =  _imageBuffer[_currentImageIndex].get()
    if image.s() != _width || 
        image.t() != _height :
        osg.notify(osg.NOTICE), "Allocating image "
        image.allocateImage(_width, _height, 1, _pixelFormat, _type)
        
        if pbo!=0 :
            osg.notify(osg.NOTICE), "deleting pbo ", pbo
            ext.glDeleteBuffers (1, pbo)
            pbo = 0
    
    
    if pbo==0 :
        ext.glGenBuffers(1, pbo)
        ext.glBindBuffer(GL_PIXEL_PACK_BUFFER_ARB, pbo)
        ext.glBufferData(GL_PIXEL_PACK_BUFFER_ARB, image.getTotalSizeInBytes(), 0, GL_STREAM_READ)

        osg.notify(osg.NOTICE), "Generating pbo ", pbo
    else:
        ext.glBindBuffer(GL_PIXEL_PACK_BUFFER_ARB, pbo)

    tick_start =  osg.Timer.instance().tick()

#if 1
    glReadPixels(0, 0, _width, _height, _pixelFormat, _type, 0)
#endif

    tick_afterReadPixels =  osg.Timer.instance().tick()

    src =  (GLubyte*)ext.glMapBuffer(GL_PIXEL_PACK_BUFFER_ARB,
                                              GL_READ_ONLY_ARB)
    if src :
        memcpy(image.data(), src, image.getTotalSizeInBytes())
        
        ext.glUnmapBuffer(GL_PIXEL_PACK_BUFFER_ARB)

    ext.glBindBuffer(GL_PIXEL_PACK_BUFFER_ARB, 0)

    tick_afterMemCpy =  osg.Timer.instance().tick()

    updateTimings(tick_start, tick_afterReadPixels, tick_afterMemCpy, image.getTotalSizeInBytes())

    if !_fileName.empty() :
        # osgDB.writeImageFile(*image, _fileName)


    _currentImageIndex = nextImageIndex

void WindowCaptureCallback.ContextData.multiPBO(osg.GLBufferObject.Extensions* ext)
    # print "multiPBO(  ", _fileName, " image ", _currentImageIndex, " ", _currentPboIndex
    unsigned int nextImageIndex = (_currentImageIndex+1)%_imageBuffer.size()
    unsigned int nextPboIndex = (_currentPboIndex+1)%_pboBuffer.size()

    width = 0, height=0
    getSize(_gc, width, height)
    if width!=_width || _height!=height :
        print "   Window resized ", width, ", ", height
        _width = width
        _height = height

    copy_pbo =  _pboBuffer[_currentPboIndex]
    read_pbo =  _pboBuffer[nextPboIndex]
    
    image =  _imageBuffer[_currentImageIndex].get()
    if image.s() != _width || 
        image.t() != _height :
        osg.notify(osg.NOTICE), "Allocating image "
        image.allocateImage(_width, _height, 1, _pixelFormat, _type)
        
        if read_pbo!=0 :
            osg.notify(osg.NOTICE), "deleting pbo ", read_pbo
            ext.glDeleteBuffers (1, read_pbo)
            read_pbo = 0

        if copy_pbo!=0 :
            osg.notify(osg.NOTICE), "deleting pbo ", copy_pbo
            ext.glDeleteBuffers (1, copy_pbo)
            copy_pbo = 0
    
    
    doCopy =  copy_pbo!=0
    if copy_pbo==0 :
        ext.glGenBuffers(1, copy_pbo)
        ext.glBindBuffer(GL_PIXEL_PACK_BUFFER_ARB, copy_pbo)
        ext.glBufferData(GL_PIXEL_PACK_BUFFER_ARB, image.getTotalSizeInBytes(), 0, GL_STREAM_READ)

        osg.notify(osg.NOTICE), "Generating pbo ", read_pbo

    if read_pbo==0 :
        ext.glGenBuffers(1, read_pbo)
        ext.glBindBuffer(GL_PIXEL_PACK_BUFFER_ARB, read_pbo)
        ext.glBufferData(GL_PIXEL_PACK_BUFFER_ARB, image.getTotalSizeInBytes(), 0, GL_STREAM_READ)

        osg.notify(osg.NOTICE), "Generating pbo ", read_pbo
    else:
        ext.glBindBuffer(GL_PIXEL_PACK_BUFFER_ARB, read_pbo)

    tick_start =  osg.Timer.instance().tick()

#if 1
    glReadPixels(0, 0, _width, _height, _pixelFormat, _type, 0)
#endif

    tick_afterReadPixels =  osg.Timer.instance().tick()

    if doCopy :

        ext.glBindBuffer(GL_PIXEL_PACK_BUFFER_ARB, copy_pbo)

        src =  (GLubyte*)ext.glMapBuffer(GL_PIXEL_PACK_BUFFER_ARB,
                                                  GL_READ_ONLY_ARB)
        if src :
            memcpy(image.data(), src, image.getTotalSizeInBytes())
            ext.glUnmapBuffer(GL_PIXEL_PACK_BUFFER_ARB)

        if !_fileName.empty() :
            # osgDB.writeImageFile(*image, _fileName)
    
    ext.glBindBuffer(GL_PIXEL_PACK_BUFFER_ARB, 0)

    tick_afterMemCpy =  osg.Timer.instance().tick()
    
    updateTimings(tick_start, tick_afterReadPixels, tick_afterMemCpy, image.getTotalSizeInBytes())

    _currentImageIndex = nextImageIndex
    _currentPboIndex = nextPboIndex

def addCallbackToViewer(viewer, callback):
    if callback.getFramePosition()==WindowCaptureCallback.START_FRAME :
        windows = osgViewer.ViewerBase.Windows()
        viewer.getWindows(windows)
        for(osgViewer.ViewerBase.Windows.iterator itr = windows.begin()
            itr != windows.end()
            ++itr)
            window =  *itr
            cameras =  window.getCameras()
            firstCamera =  0
            for(osg.GraphicsContext.Cameras.iterator cam_itr = cameras.begin()
                cam_itr != cameras.end()
                ++cam_itr)
                if firstCamera :
                    if *cam_itr :.getRenderOrder() < firstCamera.getRenderOrder() :
                        firstCamera = (*cam_itr)
                    if *cam_itr :.getRenderOrder() == firstCamera.getRenderOrder() 
                        (*cam_itr).getRenderOrderNum() < firstCamera.getRenderOrderNum() :
                        firstCamera = (*cam_itr)
                else:
                    firstCamera = *cam_itr

            if firstCamera :
                osg.notify(osg.NOTICE), "First camera ", firstCamera

                firstCamera.setInitialDrawCallback(callback)
            else:
                osg.notify(osg.NOTICE), "No camera found"
    else:
        windows = osgViewer.ViewerBase.Windows()
        viewer.getWindows(windows)
        for(osgViewer.ViewerBase.Windows.iterator itr = windows.begin()
            itr != windows.end()
            ++itr)
            window =  *itr
            cameras =  window.getCameras()
            lastCamera =  0
            for(osg.GraphicsContext.Cameras.iterator cam_itr = cameras.begin()
                cam_itr != cameras.end()
                ++cam_itr)
                if lastCamera :
                    if *cam_itr :.getRenderOrder() > lastCamera.getRenderOrder() :
                        lastCamera = (*cam_itr)
                    if *cam_itr :.getRenderOrder() == lastCamera.getRenderOrder() 
                        (*cam_itr).getRenderOrderNum() >= lastCamera.getRenderOrderNum() :
                        lastCamera = (*cam_itr)
                else:
                    lastCamera = *cam_itr

            if lastCamera :
                osg.notify(osg.NOTICE), "Last camera ", lastCamera

                lastCamera.setFinalDrawCallback(callback)
            else:
                osg.notify(osg.NOTICE), "No camera found"

def main(argc, argv):
    # use an ArgumentParser object to manage the program arguments.
    arguments = osg.ArgumentParser(argc,argv)

    arguments.getApplicationUsage().setApplicationName(arguments.getApplicationName())
    arguments.getApplicationUsage().setCommandLineUsage(arguments.getApplicationName()+" [options] filename ...")

    viewer = osgViewer.Viewer(arguments)

    unsigned int helpType = 0
    if helpType = arguments.readHelpType() : :
        arguments.getApplicationUsage().write(std.cout, helpType)
        return 1
    
    # report any errors if they have occurred when parsing the program arguments.
    if arguments.errors() :
        arguments.writeErrorMessages(std.cout)
        return 1
    
    if arguments.argc()<=1 :
        arguments.getApplicationUsage().write(std.cout,osg.ApplicationUsage.COMMAND_LINE_OPTION)
        return 1

    # set up the camera manipulators.
        osg.ref_ptr<osgGA.KeySwitchMatrixManipulator> keyswitchManipulator = new osgGA.KeySwitchMatrixManipulator

        keyswitchManipulator.addMatrixManipulator( '1', "Trackball", new osgGA.TrackballManipulator() )
        keyswitchManipulator.addMatrixManipulator( '2', "Flight", new osgGA.FlightManipulator() )
        keyswitchManipulator.addMatrixManipulator( '3', "Drive", new osgGA.DriveManipulator() )
        keyswitchManipulator.addMatrixManipulator( '4', "Terrain", new osgGA.TerrainManipulator() )

        pathfile = str()
        keyForAnimationPath =  '5'
        while arguments.read("-p",pathfile) :
            apm =  new osgGA.AnimationPathManipulator(pathfile)
            if apm || !apm.valid() : 
                unsigned int num = keyswitchManipulator.getNumMatrixManipulators()
                keyswitchManipulator.addMatrixManipulator( keyForAnimationPath, "Path", apm )
                keyswitchManipulator.selectMatrixManipulator(num)
                ++keyForAnimationPath

        viewer.setCameraManipulator( keyswitchManipulator.get() )

    # add the state manipulator
    viewer.addEventHandler( new osgGA.StateSetManipulator(viewer.getCamera().getOrCreateStateSet()) )
    
    # add the thread model handler
    viewer.addEventHandler(new osgViewer.ThreadingHandler)

    # add the window size toggle handler
    viewer.addEventHandler(new osgViewer.WindowSizeHandler)
        
    # add the stats handler
    viewer.addEventHandler(new osgViewer.StatsHandler)

    # add the help handler
    viewer.addEventHandler(new osgViewer.HelpHandler(arguments.getApplicationUsage()))

    # add the record camera path handler
    viewer.addEventHandler(new osgViewer.RecordCameraPathHandler)

    # add the LOD Scale handler
    viewer.addEventHandler(new osgViewer.LODScaleHandler)

    readBuffer =  GL_BACK
    position =  WindowCaptureCallback.END_FRAME
    mode =  WindowCaptureCallback.DOUBLE_PBO

    while arguments.read("--start-frame") :  position = WindowCaptureCallback.START_FRAME readBuffer = GL_FRONT 
    while arguments.read("--end-frame") : position = WindowCaptureCallback.END_FRAME

    while arguments.read("--front") : readBuffer = GL_FRONT
    while arguments.read("--back") : readBuffer = GL_BACK

    while arguments.read("--no-pbo") : mode = WindowCaptureCallback.READ_PIXELS
    while arguments.read("--single-pbo") : mode = WindowCaptureCallback.SINGLE_PBO
    while arguments.read("--double-pbo") : mode = WindowCaptureCallback.DOUBLE_PBO
    while arguments.read("--triple-pbo") : mode = WindowCaptureCallback.TRIPLE_PBO

    
    unsigned int width=1280
    unsigned int height=1024
    pbufferOnly =  false
    osg.ref_ptr<osg.GraphicsContext> pbuffer
    if arguments.read("--pbuffer",width,height) || 
        (pbufferOnly = arguments.read("--pbuffer-only",width,height)) :
        osg.ref_ptr<osg.GraphicsContext.Traits> traits = new osg.GraphicsContext.Traits
        traits.x = 0
        traits.y = 0
        traits.width = width
        traits.height = height
        traits.red = 8
        traits.green = 8
        traits.blue = 8
        traits.alpha = 8
        traits.windowDecoration = false
        traits.pbuffer = true
        traits.doubleBuffer = true
        traits.sharedContext = 0

        pbuffer = osg.GraphicsContext.createGraphicsContext(traits.get())
        if pbuffer.valid() :
            osg.notify(osg.NOTICE), "Pixel buffer has been created successfully."
        else:
            osg.notify(osg.NOTICE), "Pixel buffer has not been created successfully."

        
    # load the data
    osg.ref_ptr<osg.Node> loadedModel = osgDB.readNodeFiles(arguments)
    if !loadedModel : 
        print arguments.getApplicationName(), ": No data loaded"
        return 1

    # any option left unread are converted into errors to write out later.
    arguments.reportRemainingOptionsAsUnrecognized()

    # report any errors if they have occurred when parsing the program arguments.
    if arguments.errors() :
        arguments.writeErrorMessages(std.cout)
        return 1


    # optimize the scene graph, remove redundant nodes and state etc.
    optimizer = osgUtil.Optimizer()
    optimizer.optimize(loadedModel.get())

    viewer.setSceneData( loadedModel.get() )

    
    if pbuffer.valid() :
        osg.ref_ptr<osg.Camera> camera = new osg.Camera
        camera.setGraphicsContext(pbuffer.get())
        camera.setViewport(new osg.Viewport(0,0,width,height))
        buffer =  pbuffer.getTraits().doubleBuffer ? GL_BACK : GL_FRONT
        camera.setDrawBuffer(buffer)
        camera.setReadBuffer(buffer)
        camera.setFinalDrawCallback(new WindowCaptureCallback(mode, position, readBuffer))

        if pbufferOnly :
            viewer.addSlave(camera.get(), osg.Matrixd(), osg.Matrixd())

            viewer.realize()
        else:
            viewer.realize()

            viewer.stopThreading()

            pbuffer.realize()

            viewer.addSlave(camera.get(), osg.Matrixd(), osg.Matrixd())

            viewer.startThreading()
    else:
        viewer.realize()

        addCallbackToViewer(viewer, new WindowCaptureCallback(mode, position, readBuffer))

    return viewer.run()



if __name__ == "__main__":
    main(sys.argv)
