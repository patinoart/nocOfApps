//
//  Walker.h
//  nocJPRandomWalker0001
//
//  Created by Juan Patino on 9/15/13.
//
//

#ifndef __nocJPRandomWalker0001__Walker__
#define __nocJPRandomWalker0001__Walker__

#include "ofMain.h"

class Walker {
    
public:
    
    int x;
    int y;
    
    void setup();
    
    void stepFour();    // stepping with 4 possible directions
    void stepNine();    // stepping with 9 possible directions
    
    void draw();
};

#endif /* defined(__nocJPRandomWalker0001__Walker__) */
