#pragma once

#include "ofMain.h"
#include "Ball.hpp"

class ofApp : public ofBaseApp{
    
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
    
    bool left, right, up, down = false;
   
    float circleX = 200;
    float circleY = 200;
    float circleR = 200;
    
    float dist;
    
    float playerX = 200;
    float playerY = 200;
    float playerR = 200;
    

    ofVec2f playerPos = ofVec2f(0, 400);
    
    //Initializing Array
    //Declaring Array
    
};
