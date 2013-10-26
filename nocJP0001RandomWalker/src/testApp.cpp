#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofBackground(255);
    ofSetVerticalSync(true);
    ofSetFrameRate(72);
    ofSetCircleResolution(100);
    ofSetBackgroundAuto(false);
    //ofEnableAlphaBlending();
    
    w.setup();

}

//--------------------------------------------------------------
void testApp::update(){
    
    ofPoint mouse;
    mouse.set(mouseX, mouseY);
    
    //w.stepFour();
    
    //w.stepNine();
    
    //w.stepRight();
    
    w.stepToMouse(mouse);

}

//--------------------------------------------------------------
void testApp::draw(){
    
    w.draw();

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