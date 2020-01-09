#include "ofApp.h"
#include "Ball.hpp"
#include "ofImage.h"
#include "ofImage.cpp"
#include <math.h>

//using namespace std;



Ball ball = *new Ball(100, 100, 50);

//--------------------------------------------------------------
void ofApp::setup(){
    picture.load("image1.jpg");
    
    ofSetWindowShape(1000,1000);
    ofBackground(0);
    
//    imageName.load("/Users/joshbarton/Desktop/of_v0.10.1_osx_release/apps/myApps/mySketch/src/images image1.jpg")
 
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    

    cout << ball.getX() << ", " << ball.getY() << endl;
    if (sqrt(pow(ball.getX() - playerPos.x, 2) + pow(ball.getY() - playerPos.y, 2)) <= ball.getR() + 50)
        
        { 
    ofDrawBitmapStringHighlight("COLLISION", 500, 500);
            
            
        }
   
    
 
 
        ball.Draw();
    

    
    
    ofDrawBitmapStringHighlight("W A S D TO MOVE", 20, 20);
    ofSetColor(255,255,255);
    ofDrawCircle(playerPos.x, playerPos.y, 50);
   
    
    if (up) {
        playerPos.y-=4;
    }
    if (down) {
        playerPos.y+=4;
    }
    if (left) {
        playerPos.x-=4;
    }
    if (right) {
        playerPos.x+=4;
    }
    
   
 
 
}

//--------------------------------------------------------------

void ofApp::keyPressed(int key){
    
    if (key == 'd') {
        playerPos.x+=4;
        right = true;
    }
    
    
    if (key == 'a') {
        playerPos.x-=4;
        left = true;
    }
    if (key == 's') {
        playerPos.y+=4;
        down = true;
    }
    
    
    if (key == 'w') {
        playerPos.y-=4;
        up = true;
    }
    
    
    
}



//--------------------------------------------------------------

void ofApp::keyReleased(int key){
    
    if (key == 'd') {
        playerPos.x+=4;
        right = false;
    }
    
    
    if (key == 'a') {
        playerPos.x-=4;
        left = false;
    }
    if (key == 's') {
        playerPos.y+=4;
        down = false;
    }
    
    
    if (key == 'w') {
        playerPos.y-=4;
        up = false;
    }
}


//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
