#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(true);
    ofSetBackgroundAuto(false);
    //ofSetFrameRate(72);
    ofSetCircleResolution(100);
    ofEnableAlphaBlending();
    ofBackground(0,0,0);
    
    w.setup();
    r = 16;
    theta = 0;
    theta_vel = 1;

}

//--------------------------------------------------------------
void testApp::update(){
    
    ofSetWindowTitle(ofToString(ofGetFrameRate()));
    ofPoint mouse;
    mouse.set(mouseX, mouseY);
    
    w.update();
    w.stepToMouse(mouse);
    
    num = ofRandom(-1,1);
    cout << "NUM: " << num << endl;
    sdx = r * cos(theta);
    sdy = r * sin(theta);
    meanx = 0;
    meany = 0;
    
    x = sdx * num + meanx;
    y = sdy * num + meany;
    
    

}

//--------------------------------------------------------------
void testApp::draw(){

    ofPushMatrix();
        ofTranslate(w.x, w.y);
        ofSetColor(255, 255, 255, 5);
        ofCircle(x, y, 4);
    ofPopMatrix();
    
    if (theta > 360) {
        theta = 0;
    }
    theta += theta_vel;
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}