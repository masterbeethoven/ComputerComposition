#include "testApp.h"

int CircleX;// instantiating variables, where it will start and where it will go to
int CircleY;
int CircleRadius;
float DropSpeed; //change speed of circle drop

//int l =  (height - y);

//height- y-axis = limit

//--------------------------------------------------------------
void testApp::setup(){
 
    CircleX =300;
    CircleY=200;
    CircleRadius=25;
    DropSpeed=5; //the basic speed to start with 
    
    ofSetVerticalSync(true); //prevents screen tearings

}

//--------------------------------------------------------------
void testApp::update(){
    
  
    
    

}

//--------------------------------------------------------------
void testApp::draw(){
    CircleX++; //moves off the right slowly
    
    ofSetColor(255, 0, 0); //circle color
    ofCircle(mouseX,mouseY,CircleRadius); //basic circle movement with mouse
    
    
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
    //CircleRadius++; //everytime you press mouse, the radius gets +1 bigger
    
  
    
    

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
