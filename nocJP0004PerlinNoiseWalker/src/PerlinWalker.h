//
//  PerlinWalker.h
//  nocJPPerlinNoiseWalker0004
//
//  Created by Juan Patino on 9/16/13.
//
//

#ifndef __nocJPPerlinNoiseWalker0004__PerlinWalker__
#define __nocJPPerlinNoiseWalker0004__PerlinWalker__

#include "ofMain.h"

class PerlinWalker {
public:
    float x;
    float y;
    float tx;
    float ty;
    
    void setup();
    void step();
};

#endif /* defined(__nocJPPerlinNoiseWalker0004__PerlinWalker__) */
