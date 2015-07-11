#!/bin/env python

# Automatically translated python version of 
# OpenSceneGraph example program "osgatomiccounter"
# !!! This program will need manual tuning before it will work. !!!

import sys

from osgpypp import osg
from osgpypp import osgDB
from osgpypp import osgGA
from osgpypp import osgUtil
from osgpypp import osgViewer

# -*-c++-*- OpenSceneGraph - Copyright (C) 2012-2012 David Callu
 *
 * This application is open source and may be redistributed and/or modified
 * freely and without restriction, both in commercial and non commercial applications,
 * as long as this copyright notice is maintained.
 *
 * This application is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.


#include <osg/BufferIndexBinding>
#include <osg/BufferObject>
#include <osg/Camera>
#include <osg/Program>

#include <osgDB/ReadFile>
#include <osgUtil/Optimizer>

#include <osgViewer/Viewer>
#include <osgViewer/ViewerEventHandlers>

#include <osgGA/TrackballManipulator>
#include <osgGA/FlightManipulator>
#include <osgGA/DriveManipulator>
#include <osgGA/KeySwitchMatrixManipulator>
#include <osgGA/StateSetManipulator>
#include <osgGA/AnimationPathManipulator>
#include <osgGA/TerrainManipulator>
#include <osgGA/SphericalManipulator>

#include <iostream>


class AdaptNumPixelUniform : public osg.Camera.DrawCallback
    public:
        AdaptNumPixelUniform()
            _atomicCounterArray = new osg.UIntArray
            _atomicCounterArray.push_back(0)

        virtual void operator () (osg.RenderInfo renderInfo) 
            _acbb.readData(*renderInfo.getState(), *_atomicCounterArray)
            unsigned int numPixel = osg.maximum(1u, _atomicCounterArray.front())

            if renderInfo.getView().getFrameStamp().getFrameNumber() % 10 : == 0 :
                OSG_INFO, "osgatomiccounter : draw ", numPixel, " pixels."

            _invNumPixelUniform.set( 1.0f / static_cast<float>(numPixel) )

        osg.ref_ptr<osg.Uniform> _invNumPixelUniform
        osg.ref_ptr<osg.UIntArray> _atomicCounterArray
        osg.ref_ptr<osg.AtomicCounterBufferBinding> _acbb



def createProgram():
  vp = strstream()
  vp, "#version 420 compatibility\n", "\n", "void main(void)\n", "\n", "    gl_Position = ftransform()\n", "\n"
  vpShader =  new osg.Shader( osg.Shader.VERTEX, vp.str() )



  fp = strstream()
  fp, "#version 420 compatibility\n", "\n", "layout(binding = 0) uniform atomic_uint acRed\n", "layout(binding = 0, offset = 4) uniform atomic_uint acGreen\n", "layout(binding = 2) uniform atomic_uint acBlue\n", "\n", "uniform float invNumPixel\n", "\n", "void main(void)\n", "\n", "    float r = float(atomicCounterIncrement(acRed)) * invNumPixel\n", "    float g = float(atomicCounterIncrement(acGreen)) * invNumPixel\n", "    float b = float(atomicCounterIncrement(acBlue)) * invNumPixel\n", "    gl_FragColor = vec4(r, g, b, 1.0)\n", "\n", "\n"
  fpShader =  new osg.Shader( osg.Shader.FRAGMENT, fp.str() )

  program =  new osg.Program
  program.addShader(vpShader)
  program.addShader(fpShader)

  program = return()

class ResetAtomicCounter : public osg.StateAttributeCallback
    public:
        virtual void operator () (osg.StateAttribute* sa, osg.NodeVisitor*)
            acbb =  dynamic_cast<osg.AtomicCounterBufferBinding *>(sa)
            if acbb :
                acbo =  dynamic_cast<osg.AtomicCounterBufferObject*>(acbb.getBufferObject())
                if acbo  acbo.getBufferData(0) :
                    acbo.getBufferData(0).dirty()



def main(argc, argv):
    # use an ArgumentParser object to manage the program arguments.
    arguments = osg.ArgumentParser(argc,argv)

    arguments.getApplicationUsage().setApplicationName(arguments.getApplicationName())
    arguments.getApplicationUsage().setDescription(arguments.getApplicationName()+" is a simple example which show draw order of pixel.")
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

    # set up the camera manipulators.
    viewer.setCameraManipulator( new osgGA.TrackballManipulator() )

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

    # add the screen capture handler
    viewer.addEventHandler(new osgViewer.ScreenCaptureHandler)

    # load the data
    osg.ref_ptr<osg.Node> loadedModel = osgDB.readNodeFiles(arguments)
    if !loadedModel :
        quad =  osg.createTexturedQuadGeometry(osg.Vec3f(-2.0f, 0.0f, -2.0f),
                                                          osg.Vec3f(2.0f, 0.0f, 0.0f),
                                                          osg.Vec3f(0.0f, 0.0f, 2.0f) )

        geode =  new osg.Geode
        geode.addDrawable(quad)
        loadedModel = geode

    # any option left unread are converted into errors to write out later.
    arguments.reportRemainingOptionsAsUnrecognized()

    # report any errors if they have occurred when parsing the program arguments.
    if arguments.errors() :
        arguments.writeErrorMessages(std.cout)
        return 1


    ss =  loadedModel.asGeode().getDrawable(0).getOrCreateStateSet()
    ss.setAttributeAndModes( createProgram(), osg.StateAttribute.ON | osg.StateAttribute.OVERRIDE | osg.StateAttribute.PROTECTED )

    ss = loadedModel.getOrCreateStateSet()
    osg.ref_ptr<osg.UIntArray> atomicCounterArrayRedAndGreen = new osg.UIntArray
    atomicCounterArrayRedAndGreen.push_back(0)
    atomicCounterArrayRedAndGreen.push_back(0)

    osg.ref_ptr<osg.UIntArray> atomicCounterArrayBlue = new osg.UIntArray
    atomicCounterArrayBlue.push_back(0)

    osg.ref_ptr<osg.AtomicCounterBufferObject> acboRedAndGreen = new osg.AtomicCounterBufferObject
    acboRedAndGreen.setUsage(GL_STREAM_COPY)
    atomicCounterArrayRedAndGreen.setBufferObject(acboRedAndGreen.get())

    osg.ref_ptr<osg.AtomicCounterBufferObject> acboBlue = new osg.AtomicCounterBufferObject
    acboBlue.setUsage(GL_STREAM_COPY)
    atomicCounterArrayBlue.setBufferObject(acboBlue.get())

    osg.ref_ptr<osg.AtomicCounterBufferBinding> acbbRedAndGreen = new osg.AtomicCounterBufferBinding(0, acboRedAndGreen.get(), 0, sizeof(GLuint)*3)
    ss.setAttributeAndModes(acbbRedAndGreen.get())

    osg.ref_ptr<osg.AtomicCounterBufferBinding> acbbBlue = new osg.AtomicCounterBufferBinding(2, acboBlue.get(), 0, sizeof(GLuint))
    ss.setAttributeAndModes(acbbBlue.get())

    acbbRedAndGreen.setUpdateCallback(new ResetAtomicCounter)
    acbbBlue.setUpdateCallback(new ResetAtomicCounter)

    osg.ref_ptr<osg.Uniform> invNumPixelUniform = new osg.Uniform("invNumPixel", 1.0f/(800.0f*600.0f))
    ss.addUniform( invNumPixelUniform.get() )

    drawCallback =  new AdaptNumPixelUniform
    drawCallback._invNumPixelUniform = invNumPixelUniform
    drawCallback._acbb = acbbBlue

    viewer.getCamera().setFinalDrawCallback(drawCallback)

    # optimize the scene graph, remove redundant nodes and state etc.
    optimizer = osgUtil.Optimizer()
    optimizer.optimize(loadedModel.get())

    viewer.setSceneData( loadedModel.get() )

    viewer.realize()

    return viewer.run()



if __name__ == "__main__":
    main(sys.argv)
