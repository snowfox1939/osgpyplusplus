#!/bin/env python

# Automatically translated python version of 
# OpenSceneGraph example program "osglight"
# !!! This program will need manual tuning before it will work. !!!

import sys

from osgpypp import osg
from osgpypp import osgDB
from osgpypp import osgUtil
from osgpypp import osgViewer

# OpenSceneGraph example, osglight.
*
*  Permission is hereby granted, free of charge, to any person obtaining a copy
*  of this software and associated documentation files (the "Software"), to deal
*  in the Software without restriction, including without limitation the rights
*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*  copies of the Software, and to permit persons to whom the Software is
*  furnished to do so, subject to the following conditions:
*
*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
*  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
*  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
*  THE SOFTWARE.


#include <osgViewer/Viewer>

#include <osg/Group>
#include <osg/Node>

#include <osg/Light>
#include <osg/LightSource>
#include <osg/StateAttribute>
#include <osg/Geometry>
#include <osg/Point>

#include <osg/MatrixTransform>
#include <osg/PositionAttitudeTransform>

#include <osgDB/Registry>
#include <osgDB/ReadFile>

#include <osgUtil/Optimizer>
#include <osgUtil/SmoothingVisitor>

#include "stdio.h"


# callback to make the loaded model oscilate up and down.
class ModelTransformCallback : public osg.NodeCallback
    public:

        ModelTransformCallback( osg.BoundingSphere bs)
            _firstTime = 0.0
            _period = 4.0f
            _range = bs.radius()*0.5f

        virtual void operator()(osg.Node* node, osg.NodeVisitor* nv)
            pat =  dynamic_cast<osg.PositionAttitudeTransform*>(node)
            frameStamp =  nv.getFrameStamp()
            if pat  frameStamp :
                if _firstTime==0.0 :
                    _firstTime = frameStamp.getSimulationTime()

                phase =  (frameStamp.getSimulationTime()-_firstTime)/_period
                phase -= floor(phase)
                phase *= (2.0 * osg.PI)

                rotation = osg.Quat()
                rotation.makeRotate(phase,1.0f,1.0f,1.0f)

                pat.setAttitude(rotation)

                pat.setPosition(osg.Vec3(0.0f,0.0f,sin(phase))*_range)

            # must traverse the Node's subgraph
            traverse(node,nv)

        _firstTime = double()
        _period = double()
        _range = double()




def createLights(bb, rootStateSet):
    lightGroup =  new osg.Group

    modelSize =  bb.radius()

    # create a spot light.
    myLight1 =  new osg.Light
    myLight1.setLightNum(0)
    myLight1.setPosition(osg.Vec4(bb.corner(4),1.0f))
    myLight1.setAmbient(osg.Vec4(1.0f,0.0f,0.0f,1.0f))
    myLight1.setDiffuse(osg.Vec4(1.0f,0.0f,0.0f,1.0f))
    myLight1.setSpotCutoff(20.0f)
    myLight1.setSpotExponent(50.0f)
    myLight1.setDirection(osg.Vec3(1.0f,1.0f,-1.0f))

    lightS1 =  new osg.LightSource
    lightS1.setLight(myLight1)
    lightS1.setLocalStateSetModes(osg.StateAttribute.ON)

    lightS1.setStateSetModes(*rootStateSet,osg.StateAttribute.ON)
    lightGroup.addChild(lightS1)


    # create a local light.
    myLight2 =  new osg.Light
    myLight2.setLightNum(1)
    myLight2.setPosition(osg.Vec4(0.0,0.0,0.0,1.0f))
    myLight2.setAmbient(osg.Vec4(0.0f,1.0f,1.0f,1.0f))
    myLight2.setDiffuse(osg.Vec4(0.0f,1.0f,1.0f,1.0f))
    myLight2.setConstantAttenuation(1.0f)
    myLight2.setLinearAttenuation(2.0f/modelSize)
    myLight2.setQuadraticAttenuation(2.0f/osg.square(modelSize))

    lightS2 =  new osg.LightSource
    lightS2.setLight(myLight2)
    lightS2.setLocalStateSetModes(osg.StateAttribute.ON)

    lightS2.setStateSetModes(*rootStateSet,osg.StateAttribute.ON)

    mt =  new osg.MatrixTransform()
        # set up the animation path
        animationPath =  new osg.AnimationPath
        animationPath.insert(0.0,osg.AnimationPath.ControlPoint(bb.corner(0)))
        animationPath.insert(1.0,osg.AnimationPath.ControlPoint(bb.corner(1)))
        animationPath.insert(2.0,osg.AnimationPath.ControlPoint(bb.corner(2)))
        animationPath.insert(3.0,osg.AnimationPath.ControlPoint(bb.corner(3)))
        animationPath.insert(4.0,osg.AnimationPath.ControlPoint(bb.corner(4)))
        animationPath.insert(5.0,osg.AnimationPath.ControlPoint(bb.corner(5)))
        animationPath.insert(6.0,osg.AnimationPath.ControlPoint(bb.corner(6)))
        animationPath.insert(7.0,osg.AnimationPath.ControlPoint(bb.corner(7)))
        animationPath.insert(8.0,osg.AnimationPath.ControlPoint(bb.corner(0)))
        animationPath.setLoopMode(osg.AnimationPath.SWING)

        mt.setUpdateCallback(new osg.AnimationPathCallback(animationPath))

    # create marker for point light.
    marker =  new osg.Geometry
    vertices =  new osg.Vec3Array
    vertices.push_back(osg.Vec3(0.0,0.0,0.0))
    marker.setVertexArray(vertices)
    marker.addPrimitiveSet(new osg.DrawArrays(GL_POINTS,0,1))

    stateset =  new osg.StateSet
    point =  new osg.Point
    point.setSize(4.0f)
    stateset.setAttribute(point)

    marker.setStateSet(stateset)

    markerGeode =  new osg.Geode
    markerGeode.addDrawable(marker)

    mt.addChild(lightS2)
    mt.addChild(markerGeode)

    lightGroup.addChild(mt)

    lightGroup = return()

def createWall(v1, v2, v3, stateset):
   # create a drawable for occluder.
    geom =  new osg.Geometry

    geom.setStateSet(stateset)

    unsigned int noXSteps = 100
    unsigned int noYSteps = 100

    coords =  new osg.Vec3Array
    coords.reserve(noXSteps*noYSteps)


    dx =  (v2-v1)/((float)noXSteps-1.0f)
    dy =  (v3-v1)/((float)noYSteps-1.0f)

    unsigned int row
    vRowStart =  v1
    for(row=0row<noYSteps++row)
        v =  vRowStart
        for(unsigned int col=0col<noXSteps++col)
            coords.push_back(v)
            v += dx
        vRowStart+=dy

    geom.setVertexArray(coords)

    colors =  new osg.Vec4Array(1)
    (*colors)[0].set(1.0f,1.0f,1.0f,1.0f)
    geom.setColorArray(colors, osg.Array.BIND_OVERALL)


    for(row=0row<noYSteps-1++row)
        quadstrip =  new osg.DrawElementsUShort(osg.PrimitiveSet.QUAD_STRIP)
        quadstrip.reserve(noXSteps*2)
        for(unsigned int col=0col<noXSteps++col)
            quadstrip.push_back((row+1)*noXSteps+col)
            quadstrip.push_back(row*noXSteps+col)
        geom.addPrimitiveSet(quadstrip)

    # create the normals.
    osgUtil.SmoothingVisitor.smooth(*geom)

    geom = return()



def createRoom(loadedModel):
    # default scale for this model.
    bs = osg.BoundingSphere(osg.Vec3(0.0f,0.0f,0.0f),1.0f)

    root =  new osg.Group

    if loadedModel :
        loaded_bs =  loadedModel.getBound()

        pat =  new osg.PositionAttitudeTransform()
        pat.setPivotPoint(loaded_bs.center())

        pat.setUpdateCallback(new ModelTransformCallback(loaded_bs))
        pat.addChild(loadedModel)

        bs = pat.getBound()

        root.addChild(pat)


    bs.radius()*=1.5f

    # create a bounding box, which we'll use to size the room.
    bb = osg.BoundingBox()
    bb.expandBy(bs)


    # create statesets.
    rootStateSet =  new osg.StateSet
    root.setStateSet(rootStateSet)

    wall =  new osg.StateSet
    wall.setMode(GL_CULL_FACE,osg.StateAttribute.ON)

    floor =  new osg.StateSet
    floor.setMode(GL_CULL_FACE,osg.StateAttribute.ON)

    roof =  new osg.StateSet
    roof.setMode(GL_CULL_FACE,osg.StateAttribute.ON)

    geode =  new osg.Geode

    # create front side.
    geode.addDrawable(createWall(bb.corner(0),
                                  bb.corner(4),
                                  bb.corner(1),
                                  wall))

    # right side
    geode.addDrawable(createWall(bb.corner(1),
                                  bb.corner(5),
                                  bb.corner(3),
                                  wall))

    # left side
    geode.addDrawable(createWall(bb.corner(2),
                                  bb.corner(6),
                                  bb.corner(0),
                                  wall))
    # back side
    geode.addDrawable(createWall(bb.corner(3),
                                  bb.corner(7),
                                  bb.corner(2),
                                  wall))

    # floor
    geode.addDrawable(createWall(bb.corner(0),
                                  bb.corner(1),
                                  bb.corner(2),
                                  floor))

    # roof
    geode.addDrawable(createWall(bb.corner(6),
                                  bb.corner(7),
                                  bb.corner(4),
                                  roof))

    root.addChild(geode)

    root.addChild(createLights(bb,rootStateSet))

    root = return()


def main(argc, argv):
    # use an ArgumentParser object to manage the program arguments.
    arguments = osg.ArgumentParser(argc,argv)

    # construct the viewer.
    viewer = osgViewer.Viewer()

    # load the nodes from the commandline arguments.
    loadedModel =  osgDB.readNodeFiles(arguments)

    # if not loaded assume no arguments passed in, try use default mode instead.
    if !loadedModel : loadedModel = osgDB.readNodeFile("glider.osgt")

    # create a room made of foor walls, a floor, a roof, and swinging light fitting.
    rootnode =  createRoom(loadedModel)

    # run optimization over the scene graph
    optimzer = osgUtil.Optimizer()
    optimzer.optimize(rootnode)

    # add a viewport to the viewer and attach the scene graph.
    viewer.setSceneData( rootnode )


    # create the windows and run the threads.
    viewer.realize()

    viewer.getCamera().setCullingMode( viewer.getCamera().getCullingMode()  ~osg.CullStack.SMALL_FEATURE_CULLING)

    return viewer.run()


if __name__ == "__main__":
    main(sys.argv)
