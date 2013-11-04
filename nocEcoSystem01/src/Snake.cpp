//
//  Snake.cpp
//  nocEcoSystem01
//
//  Created by Juan Patino on 10/28/13.
//
//

#include "Snake.h"

//======================================================================
void Snake::setup() {
    
    for (int i = 0; i < NUMSEGMENTS; i++) {
        // setup the segments
        ofPoint initialLoc;
        initialLoc.set(ofGetWidth()*0.5f,ofGetHeight()*0.5f);
        loc[i].set(initialLoc.x + (i*10), initialLoc.y);
    }
    
}

//======================================================================
void Snake::update(ofPoint _mouse) {
    
    // Shift array values
//    for (int i = 0; i < NUMSEGMENTS-1; i++) {
//        // Shift all the elements down one spot
//        loc[i] = loc[i+1];
//    }
    
    // New location
    // Update the last spot in the array with the mouse location.
//    loc[NUMSEGMENTS-1].set(_mouse);
}

//======================================================================
void Snake::draw() {
    
    // Draw everything
    for (int i = 0; i < NUMSEGMENTS; i++) {
        // Draw an ellipse for each element in the array
        // Color and size are tied to the loops counter: i
        ofSetColor(255 - i * 5);
        ofCircle(loc[i], 48);
    }
}