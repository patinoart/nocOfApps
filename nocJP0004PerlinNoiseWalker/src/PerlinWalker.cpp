//
//  PerlinWalker.cpp
//  nocJPPerlinNoiseWalker0004
//
//  Created by Juan Patino on 9/16/13.
//
//

#include "PerlinWalker.h"

//------------------------------------------------------------------------
void PerlinWalker::setup(){
    tx = 0;
    ty = 1000;
}

//------------------------------------------------------------------------
void PerlinWalker::step(){
    x = ofMap(ofNoise(tx), 0, 1, 0, ofGetWidth());
    y = ofMap(ofNoise(ty), 0, 1, 0, ofGetHeight());
    
    tx += 0.01;
    ty += 0.01;
}