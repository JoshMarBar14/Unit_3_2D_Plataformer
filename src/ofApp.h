#pragma once

#include "ofMain.h"
#include "Ball.hpp"

class ofApp : public ofBaseApp
{
    
public:
    //functions
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    //data
    ofImage picture;
    
    bool left, right, down = false;
    bool jump = false;
    bool isJumping = false;
    
    float circleX = 200;
    float circleY = 200;
    float circleR = 200;
    
    float playerX = 200;
    float playerY = 200;
    float playerR = 200;
    
    float dist;
    
    int score;
    int jumps;
   
    ofVec2f playerPos = ofVec2f(0, 400);
    ofVec2f dir = ofVec2f(0,0);
    ofVec2f gravity = ofVec2f(0, 0.6);
    ofVec2f platformPos = ofVec2f(400,500);
    ofVec2f platform2Pos = ofVec2f(250,250);
    ofVec2f platform3Pos = ofVec2f(600,550);
    ofVec2f platform4Pos = ofVec2f(700,700);
    
    Ball* ball;
    
    
    
    //Initializing Array
    //Declaring Array
    
};
