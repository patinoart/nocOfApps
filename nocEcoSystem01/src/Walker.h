//
//  Walker.h
//  nocEcoSystem01
//
//  Created by Juan Patino on 10/27/13.
//
//

#pragma once

#include "ofMain.h"

class Walker {
    
public:
    
    // tracks location, velocity, and acceleration
    ofPoint location;
    ofPoint velocity;
    ofPoint acceleration;
    
    // Mover's max speed
    float topspeed;
    
    void setup();
    void update(ofPoint _mouse);
    void draw();
};