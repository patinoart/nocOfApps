#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(true);
    ofSetFrameRate(72);
    ofSetCircleResolution(100);
    ofSetBackgroundAuto(false);
    ofEnableAlphaBlending();
    walker.setup();
}

//--------------------------------------------------------------
void testApp::update(){
    walker.step();
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetColor(127, 127, 127, 10);
    ofRect(0, 0, ofGetWidth(), ofGetHeight());
    
    ofSetColor(255);
    ofCircle(walker.x, walker.y, 16);
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