//
//  Snake.h
//  nocEcoSystem01
//
//  Created by Juan Patino on 10/28/13.
//
//

#pragma once

#include "ofMain.h"

#define NUMSEGMENTS 50

class Snake {
public:
    ofPoint loc [NUMSEGMENTS];
    
    void setup();
    void update(ofPoint _mouse);
    void draw();
};