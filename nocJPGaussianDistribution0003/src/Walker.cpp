//
//  Walker.cpp
//  nocJPRandomWalker0001
//
//  Created by Juan Patino on 9/15/13.
//
//

#include "Walker.h"

//------------------------------------------------------------------
void Walker::setup(){
    x = ofGetWidth()*0.5f;
    y = ofGetHeight()*0.5f;
}

//------------------------------------------------------------------
void Walker::update(){
    
    if (x > ofGetWidth()) {
        x = ofGetWidth();
        x--;
    } else if (x < 0) {
        x = 0;
        x--;
    } else if (y > ofGetHeight()) {
        y = ofGetHeight();
        y--;
    } else if (y < 0) {
        y = 0;
        y++;
    }

}


//------------------------------------------------------------------
void Walker::stepFour(){
    
    int choice = (int)(ofRandom(4));
    
    if (choice == 0) {
        x++;
    }
    else if (choice == 1) {
        x--;
    }
    else if (choice ==2) {
        y++;
    }
    else {
        y--;
    }
    
}

//------------------------------------------------------------------
void Walker::stepNine(){
    int stepx = (int)(ofRandom(3))-1;
    int stepy = (int)(ofRandom(3))-1;
    
    x += stepx;
    y += stepy;
}

//------------------------------------------------------------------
void Walker::stepRight(){
    
    float r = ofRandom(1);
    
    if (r < 0.4) {
        x++;
    } else if (r < 0.6) {
        x--;
    } else if (r < 0.8) {
        y++;
    } else {
        y--;
    }
    
}

//------------------------------------------------------------------
void Walker::stepToMouse(ofPoint _mouse){
    
    float r = ofRandom(1);
    
    if (r < 0.5) {
        // check it against the mouseX/Y
        if (x < _mouse.x) {
            x++;
        } else {
            x--;
        }
        
        if (y < _mouse.y) {
            y++;
        } else {
            y--;
        }
    }
    else if (r < 0.6) {
        x++;
    }
    else if (r < 0.7) {
        x--;
    }
    else if (r < 0.8){
        y++;
    } else {
        y--;
    }
    
}

//------------------------------------------------------------------
void Walker::draw(){
    ofFill();
    ofSetColor(255, 0, 255);
    ofCircle(x, y, 2);
}