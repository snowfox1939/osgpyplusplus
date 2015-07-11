#!/bin/env python

# Automatically translated python version of 
# OpenSceneGraph example program "osgpdf"
# !!! This program will need manual tuning before it will work. !!!

import sys

from osgpypp import osgViewer
from osgpypp import osgWidget

#include <osgViewer/Viewer>
#include <osgViewer/ViewerEventHandlers>

#include <osgWidget/PdfReader>

def main(argc, argv):
    arguments = osg.ArgumentParser(argc, argv)
    viewer = osgViewer.Viewer(arguments)

    hints = osgWidget.GeometryHints(osg.Vec3(0.0f,0.0f,0.0f),
                                   osg.Vec3(1.0f,0.0f,0.0f),
                                   osg.Vec3(0.0f,0.0f,1.0f),
                                   osg.Vec4(1.0f,1.0f,1.0f,1.0f),
                                   osgWidget.GeometryHints.RESIZE_HEIGHT_TO_MAINTAINCE_ASPECT_RATIO)

    osg.ref_ptr<osg.Group> group = new osg.Group

    for(int i=1 i<arguments.argc() ++i)
        if !arguments.isOption(i) :
            osg.ref_ptr<osgWidget.PdfReader> pdfReader = new osgWidget.PdfReader
            if pdfReader.open(arguments[i], hints) :
                group.addChild(pdfReader.get())
                
                hints.position.x() += 1.1f

    viewer.setSceneData(group.get())

    viewer.addEventHandler(new osgViewer.StatsHandler)

    return viewer.run()



if __name__ == "__main__":
    main(sys.argv)
