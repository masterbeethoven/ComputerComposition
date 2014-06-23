#include "testApp.h"

int CircleX;// instantiating variables, where it will start and where it will go to
int CircleY;

//--------------------------------------------------------------
void testApp::setup(){
 
    CircleX =300;
    CircleY=200;

}

//--------------------------------------------------------------
void testApp::update(){
    
    

}

//--------------------------------------------------------------
void testApp::draw(){
    CircleX++; //moves off the right slowly
    
    ofSetColor(255, 0, 0); //circle color
    ofCircle(mouseX,mouseY,50); //basic circle movement with mouse
    
    
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
