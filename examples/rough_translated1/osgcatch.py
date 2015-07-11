#!/bin/env python

# Automatically translated python version of 
# OpenSceneGraph example program "osgcatch"
# !!! This program will need manual tuning before it will work. !!!

import sys

from osgpypp import osg
from osgpypp import osgDB
from osgpypp import osgGA
from osgpypp import osgParticle
from osgpypp import osgText
from osgpypp import osgUtil
from osgpypp import osgViewer

# OpenSceneGraph example, osgcatch.
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


#include <osgDB/ReadFile>
#include <osgDB/WriteFile>

#include <osgUtil/Optimizer>
#include <osgUtil/GLObjectsVisitor>

#include <osgText/Text>

#include <osg/Geode>
#include <osg/Notify>
#include <osg/MatrixTransform>
#include <osg/PositionAttitudeTransform>
#include <osg/Switch>
#include <osg/TexMat>
#include <osg/Texture2D>
#include <osg/Timer>
#include <osg/io_utils>

#include <osgGA/GUIEventHandler>

#include <osgParticle/ExplosionEffect>
#include <osgParticle/ExplosionDebrisEffect>
#include <osgParticle/SmokeEffect>
#include <osgParticle/FireEffect>

#include <osgViewer/Viewer>

#include <iostream>
#include <sstream>

typedef std.vector<str> FileList
typedef std.map<str, osg.ref_ptr<osg.Node> >  ObjectMap

static ObjectMap    s_objectMap

class Character : public osg.Referenced
public:
    Character()
    
    setCharacter = void( str filename,  str name,  osg.Vec3 orgin,  osg.Vec3 width,  osg.Vec3 catchPos, float positionRatio)
    
    setLives = void( str filename,  osg.Vec3 orgin,  osg.Vec3 delta, unsigned int numLives)
    
    setCatches = void( str filename,  osg.Vec3 orgin,  osg.Vec3 delta, unsigned int numLives)

    moveLeft = void()
    moveRight = void()
    moveTo = void(float positionRatio)

    reset = void()

    resetCatches = void()

    addCatch = bool()
    
    looseLife = bool()

    osg.Vec3 getCurrentCenterOfBasket()   return _character.getPosition()+_centerBasket 
    float getCurrentRadiusOfBasket()   return _radiusBasket 

    osg.Vec3 getLowerLeft()   return _character.getPosition() 
    osg.Vec3 getUpperRight()   return _character.getPosition() 

    _origin = osg.Vec3()
    _width = osg.Vec3()

    _positionRatio = float()
    osg.ref_ptr<osg.PositionAttitudeTransform> _character

    unsigned int                                 _numLives
    osg.ref_ptr<osg.Switch>                    _livesSwitch

    unsigned int                                 _numCatches
    osg.ref_ptr<osg.Switch>                    _catchSwitch
    
    osg.ref_ptr<osg.Group>                     _objectsGroup
    
    _centerBasket = osg.Vec3()
    _radiusBasket = float()
    


Character.Character():
    _positionRatio(0.5f),
    _numLives(3),
    _numCatches(0)


void Character.setCharacter( str filename,  str name,  osg.Vec3 origin,  osg.Vec3 width,  osg.Vec3 catchPos, float positionRatio)
    _origin = origin
    _width = width
    _positionRatio = positionRatio
    _numLives = 3
    _numCatches = 0

    _characterSize =  _width.length()*0.2f

    image =  osgDB.readImageFile(filename)
    if image :
        pos = osg.Vec3(-0.5f*_characterSize,0.0f,0.0f)
        width = osg.Vec3(_characterSize*((float)image.s())/(float)(image.t()),0.0f,0.0)
        height = osg.Vec3(0.0f,0.0f,_characterSize)

        geometry =  osg.createTexturedQuadGeometry(pos,width,height)
        stateset =  geometry.getOrCreateStateSet()
        stateset.setTextureAttributeAndModes(0,new osg.Texture2D(image),osg.StateAttribute.ON)
        stateset.setMode(GL_BLEND,osg.StateAttribute.ON)
        stateset.setRenderingHint(osg.StateSet.TRANSPARENT_BIN)

        geode =  new osg.Geode
        geode.addDrawable(geometry)

        _character = new osg.PositionAttitudeTransform
        _character.setName(name)
        _character.addChild(geode)
        
        moveTo(positionRatio)

        _centerBasket = width*catchPos.x() + height*catchPos.y() + pos
        _radiusBasket = width.length()*catchPos.z()

    

void Character.setLives( str filename,  osg.Vec3 origin,  osg.Vec3 delta, unsigned int numLives)
    characterSize =  delta.length()

    _numLives = numLives
    _livesSwitch = new osg.Switch

    image =  osgDB.readImageFile(filename)
    if image :
        stateset =  _livesSwitch.getOrCreateStateSet()
        stateset.setTextureAttributeAndModes(0,new osg.Texture2D(image),osg.StateAttribute.ON)
        stateset.setMode(GL_BLEND,osg.StateAttribute.ON)
        stateset.setRenderingHint(osg.StateSet.TRANSPARENT_BIN)

        for(unsigned int i=0 i<numLives ++i)
            pos =  origin + delta*(float)i + osg.Vec3(0.0f,0.0f,0.0f)
            width = osg.Vec3(characterSize*((float)image.s())/(float)(image.t()),0.0f,0.0)
            height = osg.Vec3(0.0f,0.0f,characterSize)

            geometry =  osg.createTexturedQuadGeometry(pos,width,height)

            geode =  new osg.Geode
            geode.addDrawable(geometry)

            _livesSwitch.addChild(geode,true)



void Character.setCatches( str filename,  osg.Vec3 origin,  osg.Vec3 delta, unsigned int numCatches)
    characterSize =  delta.length()

    _numCatches = 0
    _catchSwitch = new osg.Switch

    image =  osgDB.readImageFile(filename)
    if image :
        stateset =  _catchSwitch.getOrCreateStateSet()
        stateset.setTextureAttributeAndModes(0,new osg.Texture2D(image),osg.StateAttribute.ON)
        stateset.setMode(GL_BLEND,osg.StateAttribute.ON)
        stateset.setRenderingHint(osg.StateSet.TRANSPARENT_BIN)

        for(unsigned int i=0 i<numCatches ++i)
            pos =  origin + delta*(float)i + osg.Vec3(0.0f,0.0f,0.0f)
            width = osg.Vec3(characterSize,0.0f,0.0)
            height = osg.Vec3(0.0f,0.0f,characterSize*((float)image.t())/(float)(image.s()))

            geometry =  osg.createTexturedQuadGeometry(pos,width,height)

            geode =  new osg.Geode
            geode.addDrawable(geometry)

            _catchSwitch.addChild(geode,false)



void Character.moveLeft()
    moveTo(_positionRatio - 0.01f)

void Character.moveRight()
    moveTo(_positionRatio + 0.01f)

void Character.moveTo(float positionRatio)
    if positionRatio<0.0f : positionRatio = 0.0f
    if positionRatio>1.0f : positionRatio = 1.0f

    _positionRatio = positionRatio
    _character.setPosition(_origin+_width*+positionRatio)

void Character.reset()
    _numCatches = 0
    _numLives = _livesSwitch.getNumChildren()

    _livesSwitch.setAllChildrenOn()
    _catchSwitch.setAllChildrenOff()

void Character.resetCatches()
    _numCatches = 0
    _catchSwitch.setAllChildrenOff()

bool Character.addCatch()
    if !_catchSwitch || _numCatches>=_catchSwitch.getNumChildren() : return false
    
    _catchSwitch.setValue(_numCatches,true)
    ++_numCatches
    
    true = return()

bool Character.looseLife()
    if !_livesSwitch || _numLives==0 : return false
    
    --_numLives
    _livesSwitch.setValue(_numLives,false)
    
    return (_numLives!=0)


#############################################################
#
class CatchableObject  : public osg.Referenced
    public:
        CatchableObject()

        setObject = void( str filename,  str name,  osg.Vec3 center, float size,  osg.Vec3 direction)

        anyInside = bool( osg.Vec3 lower_left,  osg.Vec3 top_right)

        centerInside = bool( osg.Vec3 center, float radius)
        
        explode = void()
        
        bool dangerous()  return _dangerous 

        void stop()  _stopped = true 
        
        bool stopped()  return _stopped 
        
        void setTimeToRemove(double time)  _timeToRemove=time 
        
        double getTimeToRemove()  return _timeToRemove 
        
        bool needToRemove(double time)  return  _timeToRemove>=0.0  time>_timeToRemove 
        
        osg.ref_ptr<osg.PositionAttitudeTransform> _object
        _velocity = osg.Vec3()
        _mass = float()
        _radius = float()

        _stopped = bool()
        _dangerous = bool()

        _timeToRemove = double()

        static void setUpCatchablesMap( FileList fileList)

    public:
    
        # update position and velocity
        update = void(double dt)

        #/ Set the viscosity of the fluid.
        inline void setFluidViscosity(float v)
            _viscosity = v
            _viscosityCoefficient = 6 * osg.PI * _viscosity
       
        #/ Get the viscosity of the fluid.
        inline float getFluidViscosity()   return _viscosity 

        #/ Set the density of the fluid.
        inline void setFluidDensity(float d)
            _density = d
            _densityCoefficeint = 0.2f * osg.PI * _density

        #/ Get the density of the fluid.
        inline float getFluidDensity()   return _density 
        
        
        #/ Set the wind vector.
        inline void setWind( osg.Vec3 wind)  _wind = wind 
        
        #/ Get the wind vector.
        inline  osg.Vec3 getWind()   return _wind 
        
        #/ Set the acceleration vector.
        inline void setAcceleration( osg.Vec3 v)  _acceleration = v 
        
        #/ Get the acceleration vector.
        inline  osg.Vec3 getAcceleration()   return _acceleration 

        #* Set the acceleration vector to the gravity on earth (0, 0, -9.81).
            The acceleration will be multiplied by the <CODE>scale</CODE> parameter.
        
        inline void setToGravity(float scale = 1.0f)  _acceleration.set(0, 0, -9.81f*scale) 

        #/ Set the fluid parameters as for air (20�C temperature).
        inline void setFluidToAir()
            setToGravity(1.0f)
            setFluidDensity(1.2929f)
            setFluidViscosity(1.8e-5f)
        
        #/ Set the fluid parameters as for pure water (20�C temperature).
        inline void setFluidToWater()
            setToGravity(1.0f)
            setFluidDensity(1.0f)
            setFluidViscosity(1.002e-3f)
            

    protected:

        _acceleration = osg.Vec3()
        _viscosity = float()
        _density = float()
        _wind = osg.Vec3()

        _viscosityCoefficient = float()
        _densityCoefficeint = float()
        
 


CatchableObject.CatchableObject()
    _stopped = false
    _dangerous = false
    
    _timeToRemove = -1.0 # do not remove.
    setFluidToAir()

void CatchableObject.setUpCatchablesMap( FileList fileList)
    for(FileList.const_iterator itr=fileList.begin()
        itr!=fileList.end()
        ++itr)
        filename =  *itr
        image =  osgDB.readImageFile(filename)
        if image :
            osg.ref_ptr<osg.StateSet> stateset = new osg.StateSet()
            stateset.setTextureAttributeAndModes(0,new osg.Texture2D(image),osg.StateAttribute.ON)
            stateset.setMode(GL_BLEND,osg.StateAttribute.ON)
            stateset.setRenderingHint(osg.StateSet.TRANSPARENT_BIN)
            
            width = osg.Vec3((float)(image.s())/(float)(image.t()),0.0f,0.0)
            height = osg.Vec3(0.0f,0.0f,1.0f)
            pos =  (width+height)*-0.5f

            geometry =  osg.createTexturedQuadGeometry(pos,width,height)
            geometry.setStateSet(stateset.get())

            geode =  new osg.Geode
            geode.addDrawable(geometry)

            s_objectMap[filename] = geode

void CatchableObject.setObject( str filename,  str name,  osg.Vec3 center, float characterSize,  osg.Vec3 velocity)
    _radius = 0.5f*characterSize
    Area =  osg.PI*_radius*_radius
    Volume =  Area*_radius*4.0f/3.0f

    _velocity = velocity
    _mass = 1000.0*Volume

    if s_objectMap.count(filename)!=0 :
        scaleTransform =  new osg.PositionAttitudeTransform
        scaleTransform.setScale(osg.Vec3(characterSize,characterSize,characterSize))
        scaleTransform.addChild(s_objectMap[filename].get())

        _object = new osg.PositionAttitudeTransform
        _object.setName(name)
        _object.setPosition(center)
        _object.addChild(scaleTransform)
    else:
        osg.notify(osg.NOTICE), "CatchableObject.setObject(", filename, ") not able to create catchable object."

void CatchableObject.update(double dt)
    if _stopped : return

    Area =  osg.PI*_radius*_radius
    Volume =  Area*_radius*4.0f/3.0f

    # compute force due to gravity + boyancy of displacing the fluid that the particle is emersed in.
    force =  _acceleration * (_mass - _density*Volume)

    # compute force due to friction
    relative_wind =  _velocity-_wind            
    force -= relative_wind * Area * (_viscosityCoefficient + _densityCoefficeint*relative_wind.length())            

    # divide force by mass to get acceleration.
    _velocity += force*(dt/_mass)
    _object.setPosition(_object.getPosition()+_velocity*dt)

bool CatchableObject.anyInside( osg.Vec3 lower_left,  osg.Vec3 upper_right)
    pos =  _object.getPosition()
    
    if pos.x()+_radius < lower_left.x() : return false
    if pos.x()-_radius > upper_right.x() : return false
    if pos.z()+_radius < lower_left.z() : return false
    if pos.z()-_radius > upper_right.z() : return false

    true = return()

bool CatchableObject.centerInside( osg.Vec3 center, float radius)
    delta =  _object.getPosition() - center
    return (delta.length()<radius)


void CatchableObject.explode()
    position = osg.Vec3(0.0f,0.0f,0.0f)
    explosion =  new osgParticle.ExplosionEffect(position, _radius)
    explosionDebri =  new osgParticle.ExplosionDebrisEffect(position, _radius)
    smoke =  new osgParticle.SmokeEffect(position, _radius)
    fire =  new osgParticle.FireEffect(position, _radius)

    explosion.setWind(_wind)
    explosionDebri.setWind(_wind)
    smoke.setWind(_wind)
    fire.setWind(_wind)

    _object.addChild(explosion)
    _object.addChild(explosionDebri)
    _object.addChild(smoke)
    _object.addChild(fire)

    _dangerous = true




#############################################################
#
class GameEventHandler : public osgGA.GUIEventHandler
public:

    GameEventHandler()
    
    META_Object(osgStereImageApp,GameEventHandler)

    virtual bool handle( osgGA.GUIEventAdapter ea,osgGA.GUIActionAdapter)
    
    virtual void getUsage(osg.ApplicationUsage usage) 
    
    getCameraPosition = osg.Matrix()
    
    def compileGLObjects(state):
        compile = osgUtil.GLObjectsVisitor()
        compile.setState(state)
    
        for(ObjectMap.iterator itr = s_objectMap.begin()
            itr != s_objectMap.end()
            ++itr)
            itr.second.accept(compile)
    
    createScene = osg.Node*()
    
    void setFOVY(float fovy)  _fovy = fovy 
    float getFOVY()   return _fovy 
    
    createNewCatchable = void()
    
    def clearCatchables():
        for(CatchableObjectList.iterator itr=_catchableObjects.begin()
            itr!=_catchableObjects.end()
            ++itr)
            # need to remove
            # remove child from parents.
            osg.ref_ptr<osg.PositionAttitudeTransform> child = (*itr)._object
            parents =  child.getParents()
            for(osg.Node.ParentList.iterator pitr=parents.begin()
                pitr!=parents.end()
                ++pitr)
                (*pitr).removeChild(child.get())

        _catchableObjects.clear()
    
    def resetLevel():
        _level = 0
        _levelSwitch.setSingleChildOn(_level)
        clearCatchables()

        updateLevelText()

        _levelStartTick = osg.Timer.instance().tick()
    
    def nextLevel():
        ++_level
        if _level < _levelSwitch.getNumChildren() :
            _levelSwitch.setSingleChildOn(_level)
            clearCatchables()

        updateLevelText()

        _levelStartTick = osg.Timer.instance().tick()

    def gameComplete():
        return _level >= _levelSwitch.getNumChildren()

    def resetGame():
        _currentScore = 0
        
        updateTextWithScore()

        clearCatchables()
        resetLevel()
        
        for(unsigned int i=0i<_numberOfPlayers++i)
            _players[i].reset()


    enum Players
        PLAYER_GIRL,
        PLAYER_BOY
    

    def addPlayer(player):
        livesPosition = osg.Vec3()
        catchesPosition = osg.Vec3()
        if _numberOfPlayers==0 :
            livesPosition = _originBaseLine+osg.Vec3(0.0f,-0.5f,0.0f)
            catchesPosition = _originBaseLine+osg.Vec3(100.0f,-0.5f,0.0f)
        else:
            livesPosition = _originBaseLine+osg.Vec3(1000.0f,-0.5f,000.0f)
            catchesPosition = _originBaseLine+osg.Vec3(1100.0f,-0.5f,0.0f)
        
        switch(player)
            case PLAYER_GIRL:
                player_one =  "Catch/girl.png" 
                catchPos = osg.Vec3(0.2, 0.57, 0.34)

                _players[_numberOfPlayers].setCharacter(player_one,"girl", _originBaseLine + osg.Vec3(0.0f,-1.0f,0.0f), _widthBaseLine, catchPos, 0.5f)
                _players[_numberOfPlayers].setLives(player_one,livesPosition, osg.Vec3(0.0f,0.0f,100.0f),3)
                _players[_numberOfPlayers].setCatches("Catch/broach.png",catchesPosition, osg.Vec3(0.0f,0.0f,100.0f),10)

                ++_numberOfPlayers
                break
            case PLAYER_BOY:
                player_two =  "Catch/boy.png" 
                catchPos = osg.Vec3(0.8, 0.57, 0.34)

                _players[_numberOfPlayers].setCharacter(player_two,"boy", _originBaseLine + osg.Vec3(0.0f,-2.0f,0.0f), _widthBaseLine, catchPos, 0.5f)
                _players[_numberOfPlayers].setLives(player_two,livesPosition, osg.Vec3(0.0f,0.0f,100.0f),3)
                _players[_numberOfPlayers].setCatches("Catch/broach.png",catchesPosition, osg.Vec3(0.0f,0.0f,100.0f),10)

                 ++_numberOfPlayers
               break
    
    
    typedef std.vector< osg.ref_ptr<osgText.Text> > TextList

    def updateScoreWithCatch():
        _currentScore += 1
        updateTextWithScore()

    def updateScoreWithLevel():
        newTick =  osg.Timer.instance().tick()
        timeForLevel =  osg.Timer.instance().delta_s(_levelStartTick, newTick)

        # a ten second level gets you 10 points, 
        # a twenty second levels gets you 5 points.        
        _currentScore += static_cast<unsigned int>(10000.0f/(timeForLevel*timeForLevel))

        updateTextWithScore()


    def updateTextWithScore():
        os = std.ostringstream()
        os, "Score: ", _currentScore
        
        textString =  os.str()
    
        for(TextList.iterator itr = _scoreTextList.begin()
            itr != _scoreTextList.end()
            ++itr)
            (*itr).setText(textString)
    
    def updateLevelText():
        os = std.ostringstream()
        os, "Level: ", _level+1
        _levelText.setText(os.str())
        

protected:

    ~GameEventHandler() 
    GameEventHandler( GameEventHandler, osg.CopyOp) 

    _origin = osg.Vec3()
    _width = osg.Vec3()
    _height = osg.Vec3()
    _originBaseLine = osg.Vec3()
    _widthBaseLine = osg.Vec3()
    _characterSize = float()
    
    _fovy = float()

    _level = unsigned()
    
    _chanceOfExplodingAtStart = float()
    _initialNumDropsPerSecond = float()
    
    osg.ref_ptr<osg.Switch>   _gameSwitch
    osg.ref_ptr<osg.Group>    _gameGroup
    osg.ref_ptr<osg.Switch>   _levelSwitch
    
    unsigned int                _currentIndex
    unsigned int                _welcomeIndex
    unsigned int                _lostIndex
    unsigned int                _wonIndex
    unsigned int                _gameIndex
    
    _levelStartTick = osg.Timer_t()
    unsigned int                _currentScore
    
    osg.ref_ptr<osgText.Text> _levelText
    _scoreTextList = TextList()
    
    unsigned int _numberOfPlayers
    Character _players[2]

    typedef std.list< osg.ref_ptr<CatchableObject> > CatchableObjectList
    _catchableObjects = CatchableObjectList()
    
    _backgroundFiles = FileList()
    _benignCatachables = FileList()

    _leftKeyPressed = bool()
    _rightKeyPressed = bool()
    
    osg.ref_ptr<CatchableObject> _dummyCatchable
    
        





GameEventHandler.GameEventHandler()
    _origin.set(0.0f,0.0f,0.0f)
    _width.set(1280.0f,0.0f,0.0f)
    _height.set(0.0f,0.0f,1024.0f)
    _widthBaseLine = _width*0.9f
    _originBaseLine = _origin+_width*0.5-_widthBaseLine*0.5f
    _characterSize = _width.length()*0.2f

    _numberOfPlayers = 0
    _level = 0

    _chanceOfExplodingAtStart = 0.1f
    _initialNumDropsPerSecond = 1.0f

    _leftKeyPressed=false
    _rightKeyPressed=false

    _backgroundFiles.push_back("Catch/sky1.JPG")
    _backgroundFiles.push_back("Catch/sky3.JPG")
    _backgroundFiles.push_back("Catch/sky2.JPG")
    _backgroundFiles.push_back("Catch/farm.JPG")

    _benignCatachables.push_back("Catch/a.png")
    _benignCatachables.push_back("Catch/b.png")
    _benignCatachables.push_back("Catch/c.png")
    _benignCatachables.push_back("Catch/m.png")
    _benignCatachables.push_back("Catch/n.png")
    _benignCatachables.push_back("Catch/s.png")
    _benignCatachables.push_back("Catch/t.png")
    _benignCatachables.push_back("Catch/u.png")
    _benignCatachables.push_back("Catch/ball.png")
    
    CatchableObject.setUpCatchablesMap(_benignCatachables)
    
    _currentScore = 0
    
    setFOVY(osg.DegreesToRadians(60.0))


bool GameEventHandler.handle( osgGA.GUIEventAdapter ea,osgGA.GUIActionAdapter)
    if _currentIndex==_welcomeIndex :
        # welcome screen
        switch(ea.getEventType())
            case(osgGA.GUIEventAdapter.KEYDOWN):
                _currentIndex = _gameIndex
                _gameSwitch.setSingleChildOn(_currentIndex)
                resetGame()
                true = return()
            default:
                false = return()
        
    else: if _currentIndex==_lostIndex :
        # lost screen
        switch(ea.getEventType())
            case(osgGA.GUIEventAdapter.KEYDOWN):
                _currentIndex = _gameIndex
                _gameSwitch.setSingleChildOn(_currentIndex)
                resetGame()
                true = return()
            default:
                false = return()
        
    else: if _currentIndex==_wonIndex :
        # won screen
        switch(ea.getEventType())
            case(osgGA.GUIEventAdapter.KEYDOWN):
                _currentIndex = _gameIndex
                _gameSwitch.setSingleChildOn(_currentIndex)
                resetGame()
                true = return()
            default:
                false = return()
        
    else: if _currentIndex==_gameIndex :
        # in game.

        switch(ea.getEventType())
            case(osgGA.GUIEventAdapter.FRAME):
                # move characters
                if _leftKeyPressed :
                    if _numberOfPlayers>=2 : _players[1].moveLeft()

                if _rightKeyPressed :
                    if _numberOfPlayers>=2 : _players[1].moveRight()

                static double previous_time = ea.getTime()
                dt =  ea.getTime()-previous_time
                previous_time = ea.getTime()

                # move objects
                for(CatchableObjectList.iterator itr=_catchableObjects.begin()
                    itr!=_catchableObjects.end()
                    ++itr)
                    (*itr).update(dt)

                    removeEntry =  false

                    for(unsigned int i=0i<_numberOfPlayers++i)
                        inBasket =  ((*itr).centerInside(_players[i].getCurrentCenterOfBasket(),_players[i].getCurrentRadiusOfBasket()))
                    
                        if *itr :.dangerous() :
                            if *itr :.anyInside(_players[i].getLowerLeft(),_players[i].getUpperRight()) || inBasket :
                                # player has hit or caught a dangerous object, must loose a life.
                                if !_players[i].looseLife() :
                                    _currentIndex = _lostIndex
                                    _gameSwitch.setSingleChildOn(_currentIndex)

                                    true = return()
                                else:
                                    clearCatchables()
                                    true = return()
                        else: if inBasket :
                            # player has caught a safe object.
                            updateScoreWithCatch()
                            
                            if !_players[i].addCatch() :
                                _players[i].resetCatches()
                                updateScoreWithLevel()
                                nextLevel()
                                if gameComplete() :
                                    _currentIndex = _wonIndex
                                    _gameSwitch.setSingleChildOn(_currentIndex)
                                true = return()

                            removeEntry = true

                    if !(*itr).anyInside(_origin, _origin+_width+_height) || 
                        (*itr).needToRemove(ea.getTime()) ||
                        removeEntry :
                        # need to remove
                        # remove child from parents.
                        osg.ref_ptr<osg.PositionAttitudeTransform> child = (*itr)._object
                        parents =  child.getParents()
                        for(osg.Node.ParentList.iterator pitr=parents.begin()
                            pitr!=parents.end()
                            ++pitr)
                            (*pitr).removeChild(child.get())

                        # remove child from catchable list
                        itr = _catchableObjects.erase(itr)

                    else: if *itr :.anyInside(_origin, _origin+_width)  !(*itr).stopped() :
                        # hit base line
                        (*itr).explode()
                        (*itr).stop()
                        (*itr).setTimeToRemove(ea.getTime()+3.0)



                # create new catchable objects
                static double previousTime = ea.getTime()
                deltaTime =  ea.getTime()-previousTime
                previousTime = ea.getTime()

                numDropsPerSecond =  _initialNumDropsPerSecond * (_level+1)
                r =  (float)rand()/(float)RAND_MAX
                if r < deltaTime*numDropsPerSecond :
                    createNewCatchable()



            case(osgGA.GUIEventAdapter.KEYDOWN):
                if ea.getKey()==osgGA.GUIEventAdapter.KEY_Left :
                    _leftKeyPressed=true
                    true = return()
                else: if ea.getKey()==osgGA.GUIEventAdapter.KEY_Right :
                    _rightKeyPressed=true
                    true = return()
            case(osgGA.GUIEventAdapter.KEYUP):
                if ea.getKey()==osgGA.GUIEventAdapter.KEY_Left :
                    _leftKeyPressed=false
                    true = return()
                else: if ea.getKey()==osgGA.GUIEventAdapter.KEY_Right :
                    _rightKeyPressed=false
                    true = return()
            case(osgGA.GUIEventAdapter.DRAG):
            case(osgGA.GUIEventAdapter.MOVE):
                px =  (ea.getXnormalized()+1.0f)*0.5f

                if _numberOfPlayers>=1 : _players[0].moveTo(px)

                true = return()

            default:
                false = return()
    false = return()    

void GameEventHandler.getUsage(osg.ApplicationUsage) 

osg.Matrix GameEventHandler.getCameraPosition()
    cameraPosition = osg.Matrix()
    center =  _origin+(_width+_height)*0.5f
    
    distance =  _height.length()/(2.0f*tanf(_fovy*0.5f))
    
    cameraPosition.makeLookAt(center-osg.Vec3(0.0f,distance,0.0f),center,osg.Vec3(0.0f,0.0f,1.0f))
    cameraPosition = return()

osg.Node* GameEventHandler.createScene()
    _gameSwitch = new osg.Switch
    
    # create a dummy catchable to load all the particule textures to reduce 
    # latency later on..
    _dummyCatchable = new CatchableObject
    _dummyCatchable.setObject("Catch/a.png","a",osg.Vec3(0.0f,0.0,0.0f),1.0f,osg.Vec3(0.0f,0.0,0.0f))
    _dummyCatchable.explode()

    # set up welcome subgraph
        geode =  new osg.Geode

        # set up the background
        image =  osgDB.readImageFile("Catch/Welcome.jpg")
        if image :
            geometry =  osg.createTexturedQuadGeometry(_origin,_width,_height)
            stateset =  geometry.getOrCreateStateSet()
            stateset.setTextureAttributeAndModes(0,new osg.Texture2D(image),osg.StateAttribute.ON)

            geode.addDrawable(geometry)
        
        # set up the text
        textPosition =  _origin+_width*0.5f+_height*0.8f -osg.Vec3(0.0f,0.1f,0.0f)
            text =  new osgText.Text
            text.setText("osgcatch is a childrens catching game\nMove your character using the mouse to\ncatch falling objects in your net\nbut avoid burning objects - they kill!!")
            text.setFont("fonts/dirtydoz.ttf")
            text.setPosition(textPosition)
            text.setCharacterSize(_width.length()*0.025f)
            text.setColor(osg.Vec4(0.0f,0.2f,0.2f,1.0f))
            text.setAlignment(osgText.Text.CENTER_CENTER)
            text.setAxisAlignment(osgText.Text.XZ_PLANE)

            geode.addDrawable(text)
        
            textPosition -= _height*0.25f
            text =  new osgText.Text
            text.setText("Move mouse left and right to move character\nCatch ten objects to advance to next level\nComplete four levels to win.")
            text.setFont("fonts/dirtydoz.ttf")
            text.setPosition(textPosition)
            text.setCharacterSize(_width.length()*0.025f)
            text.setColor(osg.Vec4(0.0f,0.2f,0.2f,1.0f))
            text.setAlignment(osgText.Text.CENTER_CENTER)
            text.setAxisAlignment(osgText.Text.XZ_PLANE)

            geode.addDrawable(text)

            textPosition -= _height*0.25f
            text =  new osgText.Text
            text.setText("Game concept and artwork - Caitlin Osfield, aged 5!\nSoftware development - Robert Osfield")
            text.setFont("fonts/dirtydoz.ttf")
            text.setPosition(textPosition)
            text.setCharacterSize(_width.length()*0.025f)
            text.setColor(osg.Vec4(0.0f,0.2f,0.2f,1.0f))
            text.setAlignment(osgText.Text.CENTER_CENTER)
            text.setAxisAlignment(osgText.Text.XZ_PLANE)

            geode.addDrawable(text)

            textPosition -= _height*0.25f
            text =  new osgText.Text
            text.setText("Press any key to start game.\nPress Escape to exit game at any time.")
            text.setFont("fonts/dirtydoz.ttf")
            text.setPosition(textPosition)
            text.setCharacterSize(_width.length()*0.025f)
            text.setColor(osg.Vec4(0.0f,0.2f,0.2f,1.0f))
            text.setAlignment(osgText.Text.CENTER_CENTER)
            text.setAxisAlignment(osgText.Text.XZ_PLANE)

            geode.addDrawable(text)

        _welcomeIndex = _gameSwitch.getNumChildren()
        _gameSwitch.addChild(geode)

    # set up you've lost subgraph
        geode =  new osg.Geode

        image =  osgDB.readImageFile("Catch/YouLost.jpg")
        if image :
            geometry =  osg.createTexturedQuadGeometry(_origin,_width,_height)
            stateset =  geometry.getOrCreateStateSet()
            stateset.setTextureAttributeAndModes(0,new osg.Texture2D(image),osg.StateAttribute.ON)

            geode.addDrawable(geometry)
        
        # set up the text
        textPosition =  _origin+_width*0.5f+_height*0.75f -osg.Vec3(0.0f,0.1f,0.0f)
            text =  new osgText.Text
            text.setText("Game Over\nYou lost all three lives")
            text.setFont("fonts/dirtydoz.ttf")
            text.setPosition(textPosition)
            text.setCharacterSize(_width.length()*0.04f)
            text.setColor(osg.Vec4(0.0f,0.2f,0.2f,1.0f))
            text.setAlignment(osgText.Text.CENTER_CENTER)
            text.setAxisAlignment(osgText.Text.XZ_PLANE)

            geode.addDrawable(text)
        
            textPosition -= _height*0.25f
            text =  new osgText.Text
            text.setText("Score: 0")
            text.setFont("fonts/dirtydoz.ttf")
            text.setPosition(textPosition)
            text.setCharacterSize(_width.length()*0.04f)
            text.setColor(osg.Vec4(0.0f,0.2f,0.2f,1.0f))
            text.setAlignment(osgText.Text.CENTER_CENTER)
            text.setAxisAlignment(osgText.Text.XZ_PLANE)
            text.setDataVariance(osg.Object.DYNAMIC)

            geode.addDrawable(text)
            _scoreTextList.push_back(text)

            textPosition -= _height*0.25f
            text =  new osgText.Text
            text.setText("Press any key to have another game.\nPress Escape to exit game.")
            text.setFont("fonts/dirtydoz.ttf")
            text.setPosition(textPosition)
            text.setCharacterSize(_width.length()*0.025f)
            text.setColor(osg.Vec4(0.0f,0.2f,0.2f,1.0f))
            text.setAlignment(osgText.Text.CENTER_CENTER)
            text.setAxisAlignment(osgText.Text.XZ_PLANE)

            geode.addDrawable(text)

        _lostIndex = _gameSwitch.getNumChildren()
        _gameSwitch.addChild(geode)

    # set up you've won subgraph
        geode =  new osg.Geode

        image =  osgDB.readImageFile("Catch/YouWon.jpg")
        if image :
            geometry =  osg.createTexturedQuadGeometry(_origin,_width,_height)
            stateset =  geometry.getOrCreateStateSet()
            stateset.setTextureAttributeAndModes(0,new osg.Texture2D(image),osg.StateAttribute.ON)

            geode.addDrawable(geometry)
        
        # set up the text
        textPosition =  _origin+_width*0.5f+_height*0.75f -osg.Vec3(0.0f,0.1f,0.0f)
            text =  new osgText.Text
            text.setText("Well done!!!\nYou completed all levels!")
            text.setFont("fonts/dirtydoz.ttf")
            text.setPosition(textPosition)
            text.setCharacterSize(_width.length()*0.04f)
            text.setColor(osg.Vec4(0.0f,0.2f,0.2f,1.0f))
            text.setAlignment(osgText.Text.CENTER_CENTER)
            text.setAxisAlignment(osgText.Text.XZ_PLANE)

            geode.addDrawable(text)
        
            textPosition -= _height*0.25f
            text =  new osgText.Text
            text.setText("Score: 0")
            text.setFont("fonts/dirtydoz.ttf")
            text.setPosition(textPosition)
            text.setCharacterSize(_width.length()*0.04f)
            text.setColor(osg.Vec4(0.0f,0.2f,0.2f,1.0f))
            text.setAlignment(osgText.Text.CENTER_CENTER)
            text.setAxisAlignment(osgText.Text.XZ_PLANE)

            geode.addDrawable(text)
            _scoreTextList.push_back(text)

            textPosition -= _height*0.25f
            text =  new osgText.Text
            text.setText("Press any key to have another game.\nPress Escape to exit game.")
            text.setFont("fonts/dirtydoz.ttf")
            text.setPosition(textPosition)
            text.setCharacterSize(_width.length()*0.025f)
            text.setColor(osg.Vec4(0.0f,0.2f,0.2f,1.0f))
            text.setAlignment(osgText.Text.CENTER_CENTER)
            text.setAxisAlignment(osgText.Text.XZ_PLANE)

            geode.addDrawable(text)

        _wonIndex = _gameSwitch.getNumChildren()
        _gameSwitch.addChild(geode)

    # set up game subgraph.
        _gameGroup = new osg.Group

        if _numberOfPlayers==0 :
            addPlayer(PLAYER_GIRL)

        for(unsigned int i=0i<_numberOfPlayers++i)
            _gameGroup.addChild(_players[i]._character.get())
            _gameGroup.addChild(_players[i]._livesSwitch.get())
            _gameGroup.addChild(_players[i]._catchSwitch.get())

        # background
            _levelSwitch = new osg.Switch

            for(FileList.const_iterator itr = _backgroundFiles.begin()
                itr != _backgroundFiles.end()
                ++itr)

                image =  osgDB.readImageFile(*itr)
                if image :
                    geometry =  osg.createTexturedQuadGeometry(_origin,_width,_height)
                    stateset =  geometry.getOrCreateStateSet()
                    stateset.setTextureAttributeAndModes(0,new osg.Texture2D(image),osg.StateAttribute.ON)

                    geode =  new osg.Geode
                    geode.addDrawable(geometry)

                    _levelSwitch.addChild(geode)
            _levelSwitch.setSingleChildOn(0)
            _gameGroup.addChild(_levelSwitch.get())


        _gameIndex = _gameSwitch.getNumChildren()
        _gameSwitch.addChild(_gameGroup.get())

        # set up the text
        textPosition =  _origin+_width*0.05f+_height*0.95f-osg.Vec3(0.0f,0.1f,0.0f)
            text =  new osgText.Text
            text.setText("Score : 0")
            text.setFont("fonts/dirtydoz.ttf")
            text.setPosition(textPosition)
            text.setCharacterSize(_width.length()*0.04f)
            text.setColor(osg.Vec4(0.0f,0.2f,0.2f,1.0f))
            text.setDataVariance(osg.Object.DYNAMIC)
            text.setAxisAlignment(osgText.Text.XZ_PLANE)

            geode =  new osg.Geode
            geode.addDrawable(text)
            _scoreTextList.push_back(text)
            
            textPosition -= _height*0.05f
            _levelText = new osgText.Text
            _levelText.setText("Level : 0")
            _levelText.setFont("fonts/dirtydoz.ttf")
            _levelText.setPosition(textPosition)
            _levelText.setCharacterSize(_width.length()*0.04f)
            _levelText.setColor(osg.Vec4(0.0f,0.2f,0.2f,1.0f))
            _levelText.setDataVariance(osg.Object.DYNAMIC)
            _levelText.setAxisAlignment(osgText.Text.XZ_PLANE)

            geode.addDrawable(_levelText.get())
            


            _gameGroup.addChild(geode)


    
    _currentIndex = _welcomeIndex
    _gameSwitch.setSingleChildOn(_currentIndex)

    return _gameSwitch.get()

void GameEventHandler.createNewCatchable()
    if _benignCatachables.empty() : return

    unsigned int catachableIndex = (unsigned int)((float)_benignCatachables.size()*(float)rand()/(float)RAND_MAX)
    if catachableIndex>=_benignCatachables.size() : catachableIndex = _benignCatachables.size()-1
    
    filename =  _benignCatachables[catachableIndex]

    ratio =  ((float)rand() / (float)RAND_MAX)
    size =  20.0f+100.0f*((float)rand() / (float)RAND_MAX)
    angle =  osg.PI*0.25f + 0.5f*osg.PI*((float)rand() / (float)RAND_MAX)
    speed =  200.0f*((float)rand() / (float)RAND_MAX)

    catchableObject =  new CatchableObject
    position =  _origin+_height+_width*ratio + osg.Vec3(0.0f,-0.7f,0.0f)
    velocity = osg.Vec3(-cosf(angle)*speed,0.0f,-sinf(angle)*speed)
    #print "angle = ", angle, " velocity=", velocity
    catchableObject.setObject(filename,"boy",position,size,velocity)
    _catchableObjects.push_back(catchableObject)

    r =  (float)rand() / (float)RAND_MAX
    if r < _chanceOfExplodingAtStart :
       catchableObject.explode() 

    _gameGroup.addChild(catchableObject._object.get())

class CompileStateCallback : public osg.Operation
    public:
        CompileStateCallback(GameEventHandler* eh):
            osg.Operation("CompileStateCallback", false),
            _gameEventHandler(eh) 
        
        virtual void operator () (osg.Object* object)
            context =  dynamic_cast<osg.GraphicsContext*>(object)
            if !context : return

            if _gameEventHandler :
                _gameEventHandler.compileGLObjects(*(context.getState()))
        
        _mutex = OpenThreads.Mutex()
        _gameEventHandler = GameEventHandler*()


def main(argc, argv):
    # use an ArgumentParser object to manage the program arguments.
    arguments = osg.ArgumentParser(argc,argv)
    
    # set up the usage document, in case we need to print out how to use this program.
    arguments.getApplicationUsage().setDescription(arguments.getApplicationName()+" is the example which demonstrates use node masks to create stereo images.")
    arguments.getApplicationUsage().setCommandLineUsage(arguments.getApplicationName()+" [options] image_file_left_eye image_file_right_eye")
    arguments.getApplicationUsage().addCommandLineOption("-d <float>","Time delay in seconds between the display of successive image pairs when in auto advance mode.")
    arguments.getApplicationUsage().addCommandLineOption("-a","Enter auto advance of image pairs on start up.")
    arguments.getApplicationUsage().addCommandLineOption("-x <float>","Horizontal offset of left and right images.")
    arguments.getApplicationUsage().addCommandLineOption("-y <float>","Vertical offset of left and right images.")
    arguments.getApplicationUsage().addCommandLineOption("-h or --help","Display this information")

    # construct the viewer.
    viewer = osgViewer.Viewer()


    # register the handler to add keyboard and mouse handling.
    seh =  new GameEventHandler()
    viewer.addEventHandler(seh)

    while arguments.read("--boy") : seh.addPlayer(GameEventHandler.PLAYER_BOY)
    while arguments.read("--girl") : seh.addPlayer(GameEventHandler.PLAYER_GIRL)
    
    
    # if user request help write it out to cout.
    if arguments.read("-h") || arguments.read("--help") :
        arguments.getApplicationUsage().write(std.cout)
        return 1

    # any option left unread are converted into errors to write out later.
    arguments.reportRemainingOptionsAsUnrecognized()

    # report any errors if they have occurred when parsing the program arguments.
    if arguments.errors() :
        arguments.writeErrorMessages(std.cout)
        return 1
    
    
    # enable the image cache so we don't need to keep loading the particle files
    options =  new osgDB.ReaderWriter.Options
    options.setObjectCacheHint(osgDB.ReaderWriter.Options.CACHE_IMAGES)
    osgDB.Registry.instance().setOptions(options)


    # creat the scene from the file list.
    osg.ref_ptr<osg.Node> rootNode = seh.createScene()

    rootNode.getOrCreateStateSet().setMode(GL_LIGHTING, osg.StateAttribute.OFF)

    #osgDB.writeNodeFile(*rootNode,"test.osgt")

    # for some reason osgcatch is hanging on exit inside the new TextureObject clean up code when the it's
    # run as multi-threaded view, switching to SingleThreaded cures this.
    viewer.setThreadingModel(osgViewer.Viewer.SingleThreaded)

    # set the scene to render
    viewer.setSceneData(rootNode.get())

    viewer.setRealizeOperation(new CompileStateCallback(seh))

    double fovy, aspectRatio, zNear, zFar
    viewer.getCamera().getProjectionMatrixAsPerspective(fovy, aspectRatio, zNear, zFar)
    seh.setFOVY(osg.DegreesToRadians(fovy))    

    # todo for osgViewer - create default set up.
    viewer.setUpViewAcrossAllScreens()

    viewer.realize()

    # switch off the cursor
    windows = osgViewer.Viewer.Windows()
    viewer.getWindows(windows)
    for(osgViewer.Viewer.Windows.iterator itr = windows.begin()
        itr != windows.end()
        ++itr)
        (*itr).useCursor(false)

    # todo for osgViewer - implement warp pointer that can be done relative to different coordinate frames
    # viewer.requestWarpPointer(0.5f,0.5f)        

    while  !viewer.done()  :
        viewer.getCamera().setViewMatrix(seh.getCameraPosition())

        # fire off the cull and draw traversals of the scene.
        viewer.frame()
        
    
    return 0


if __name__ == "__main__":
    main(sys.argv)
