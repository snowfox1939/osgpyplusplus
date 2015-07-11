#!/bin/env python

# Automatically translated python version of 
# OpenSceneGraph example program "osgbillboard"
# !!! This program will need manual tuning before it will work. !!!

import sys

from osgpypp import osg
from osgpypp import osgDB
from osgpypp import osgGA
from osgpypp import osgViewer

# OpenSceneGraph example, osgbillboard.
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


#include <osg/Node>
#include <osg/Geometry>
#include <osg/Notify>
#include <osg/MatrixTransform>
#include <osg/Texture2D>
#include <osg/Billboard>
#include <osg/LineWidth>

#include <osgGA/TrackballManipulator>
#include <osgGA/FlightManipulator>
#include <osgGA/DriveManipulator>

#include <osgDB/Registry>
#include <osgDB/ReadFile>

#include <osgViewer/Viewer>

#
# A simple demo demonstrating different texturing modes,
# including using of texture extensions.
#


typedef std.vector< osg.ref_ptr<osg.Image> > ImageList

#* create quad at specified position. 
def createSquare(corner, width, height, image):
    # set up the Geometry.
    geom =  new osg.Geometry

    coords =  new osg.Vec3Array(4)
    (*coords)[0] = corner
    (*coords)[1] = corner+width
    (*coords)[2] = corner+width+height
    (*coords)[3] = corner+height


    geom.setVertexArray(coords)

    norms =  new osg.Vec3Array(1)
    (*norms)[0] = width^height
    (*norms)[0].normalize()

    geom.setNormalArray(norms, osg.Array.BIND_OVERALL)

    tcoords =  new osg.Vec2Array(4)
    (*tcoords)[0].set(0.0f,0.0f)
    (*tcoords)[1].set(1.0f,0.0f)
    (*tcoords)[2].set(1.0f,1.0f)
    (*tcoords)[3].set(0.0f,1.0f)
    geom.setTexCoordArray(0,tcoords)

    geom.addPrimitiveSet(new osg.DrawArrays(osg.PrimitiveSet.QUADS,0,4))

    if image :
        stateset =  new osg.StateSet
        texture =  new osg.Texture2D
        texture.setImage(image)
        stateset.setTextureAttributeAndModes(0,texture,osg.StateAttribute.ON)
        geom.setStateSet(stateset)

    geom = return()

def createAxis(corner, xdir, ydir, zdir):
    # set up the Geometry.
    geom =  new osg.Geometry

    coords =  new osg.Vec3Array(6)
    (*coords)[0] = corner
    (*coords)[1] = corner+xdir
    (*coords)[2] = corner
    (*coords)[3] = corner+ydir
    (*coords)[4] = corner
    (*coords)[5] = corner+zdir

    geom.setVertexArray(coords)

    x_color = osg.Vec4(0.0f,1.0f,1.0f,1.0f)
    y_color = osg.Vec4(0.0f,1.0f,1.0f,1.0f)
    z_color = osg.Vec4(1.0f,0.0f,0.0f,1.0f)

    color =  new osg.Vec4Array(6)
    (*color)[0] = x_color
    (*color)[1] = x_color
    (*color)[2] = y_color
    (*color)[3] = y_color
    (*color)[4] = z_color
    (*color)[5] = z_color

    geom.setColorArray(color, osg.Array.BIND_PER_VERTEX)

    geom.addPrimitiveSet(new osg.DrawArrays(osg.PrimitiveSet.LINES,0,6))

    stateset =  new osg.StateSet
    linewidth =  new osg.LineWidth()
    linewidth.setWidth(4.0f)
    stateset.setAttributeAndModes(linewidth,osg.StateAttribute.ON)
    stateset.setMode(GL_LIGHTING,osg.StateAttribute.OFF)
    geom.setStateSet(stateset)

    geom = return()

def createModel():
    # create the root node which will hold the model.
    root =  new osg.Group()

    # add the drawable into a single goede to be shared...
    center =  new osg.Billboard()
    center.setMode(osg.Billboard.POINT_ROT_EYE)
    center.addDrawable(
        createSquare(osg.Vec3(-0.5f,0.0f,-0.5f),osg.Vec3(1.0f,0.0f,0.0f),osg.Vec3(0.0f,0.0f,1.0f),osgDB.readImageFile("Images/reflect.rgb")),
        osg.Vec3(0.0f,0.0f,0.0f))

    x_arrow =  new osg.Billboard()
    x_arrow.setMode(osg.Billboard.AXIAL_ROT)
    x_arrow.setAxis(osg.Vec3(1.0f,0.0f,0.0f))
    x_arrow.setNormal(osg.Vec3(0.0f,-1.0f,0.0f))
    x_arrow.addDrawable(
       createSquare(osg.Vec3(-0.5f,0.0f,-0.5f),osg.Vec3(1.0f,0.0f,0.0f),osg.Vec3(0.0f,0.0f,1.0f),osgDB.readImageFile("Cubemap_axis/posx.png")),
       osg.Vec3(5.0f,0.0f,0.0f))

    y_arrow =  new osg.Billboard()
    y_arrow.setMode(osg.Billboard.AXIAL_ROT)
    y_arrow.setAxis(osg.Vec3(0.0f,1.0f,0.0f))
    y_arrow.setNormal(osg.Vec3(1.0f,0.0f,0.0f))
    y_arrow.addDrawable(
        createSquare(osg.Vec3(0.0f,-0.5f,-0.5f),osg.Vec3(0.0f,1.0f,0.0f),osg.Vec3(0.0f,0.0f,1.0f),osgDB.readImageFile("Cubemap_axis/posy.png")),
        osg.Vec3(0.0f,5.0f,0.0f))

    z_arrow =  new osg.Billboard()
    z_arrow.setMode(osg.Billboard.AXIAL_ROT)
    z_arrow.setAxis(osg.Vec3(0.0f,0.0f,1.0f))
    z_arrow.setNormal(osg.Vec3(0.0f,-1.0f,0.0f))
    z_arrow.addDrawable(
        createSquare(osg.Vec3(-0.5f,0.0f,-0.5f),osg.Vec3(1.0f,0.0f,0.0f),osg.Vec3(0.0f,0.0f,1.0f),osgDB.readImageFile("Cubemap_axis/posz.png")),
        osg.Vec3(0.0f,0.0f,5.0f))



    axis =  new osg.Geode()
    axis.addDrawable(createAxis(osg.Vec3(0.0f,0.0f,0.0f),osg.Vec3(5.0f,0.0f,0.0f),osg.Vec3(0.0f,5.0f,0.0f),osg.Vec3(0.0f,0.0f,5.0f)))


    root.addChild(center)
    root.addChild(x_arrow)
    root.addChild(y_arrow)
    root.addChild(z_arrow)
    root.addChild(axis)

    root = return()

int main(int, char**)
    # construct the viewer
    viewer = osgViewer.Viewer()

    # set the scene to render
    viewer.setSceneData(createModel())

    # run the viewers frame loop
    return viewer.run()


if __name__ == "__main__":
    main(sys.argv)
