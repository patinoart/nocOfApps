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
void Walker::draw(){
    ofFill();
    ofSetColor(255, 0, 255, 25);
    ofCircle(x, y, 2);
}