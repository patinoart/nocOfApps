//
//  Walker.cpp
//  nocEcoSystem01
//
//  Created by Juan Patino on 10/27/13.
//
//

#include "Walker.h"

//-------------------------------------------------------------------
void Walker::setup(){
    
    // initial conditions
    location.set(ofGetWidth()*0.5f, ofGetHeight()*0.5f);
    velocity.set(0, 0);
    topspeed = 5;
    
}

//-------------------------------------------------------------------
void Walker::update(ofPoint _mouse){
    
    // update conditions
    // compute a vector that points from location to mouse
    acceleration = _mouse - location;
    
    // set magnitude of acceleration
    acceleration.normalize();
    acceleration *= 0.2f;
    
    // Velocity changes according to the acceleration
    velocity += acceleration;
    
    // Limit vel to topspeed
    if (velocity.x >= topspeed || velocity.y >= topspeed) {
        velocity.x = topspeed;
        velocity.y = topspeed;
    }
    
    // Location changes by velocity
    location += velocity;
}

//-------------------------------------------------------------------
void Walker::draw(){
    
    // display the mover
    ofSetColor(127, 0, 127);
    ofCircle(location, 48);
    
}