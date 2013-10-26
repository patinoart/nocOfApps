#pragma once

#include "ofMain.h"
#include "Walker.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    // walker to generate the path
    Walker w;
    
    // angle and radius to make the spatter even
    float r;
    float theta;
    float theta_vel;
    float num;
    float sdx, sdy;
    float meanx, meany;
    float x, y;
		
};
