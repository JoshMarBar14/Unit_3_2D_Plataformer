#include "ofApp.h"
#include "Ball.hpp"
#include "ofImage.h"
#include "ofImage.cpp"
#include <math.h>

//using namespace std;

//--------------------------------------------------------------
void ofApp::setup()
{
    picture.load("image1.jpg");
    
    ofSetWindowShape(1000,1000);
    ofBackground(0);

    ball= new Ball(100, 100, 30);
    
    jumps = 0;
}

//--------------------------------------------------------------
void ofApp::update()
{
    
}

//--------------------------------------------------------------
void ofApp::draw()
{
    cout <<
    ball->getX() << ", " << ball->getY() << endl;
    if (sqrt(pow(ball->getX() - playerPos.x, 2) + pow(ball->getY() - playerPos.y, 2)) <= ball->getR() + 50)
    {
        isDead = true;
        playerPos.y = -10000000;
    }
    
    playerPos += dir;
    
    platformPos.y += 2.2;
    platform2Pos.y += 2.2;
    platform3Pos.y += 2.2;
    platform4Pos.y += 2.2;
    
    dir += gravity;
    
    ball->Draw();
   
    ofDrawBitmapStringHighlight("W TO JUMP A S D TO MOVE AND WHATEVER YOU DO DONT TOUCH THE LAVA", 20, 20);
    ofSetColor(255,0,0);
    ofDrawCircle(playerPos.x, playerPos.y, 20);
    ofSetColor(92,224,169);
    ofDrawRectangle(platformPos.x, platformPos.y,100, 25);
    ofDrawRectangle(platform2Pos.x, platform2Pos.y,100, 25);
    ofDrawRectangle(platform3Pos.x, platform3Pos.y,100, 25);
    ofDrawRectangle(platform4Pos.x, platform4Pos.y,100, 25);
    ofSetColor(255, 98, 0);
    ofDrawRectangle(0,780,1000, 30);
      ofSetColor(255,255,255);
    if (playerPos.x > platformPos.x  &&
        playerPos.x <  platformPos.x + 100  &&
        playerPos.y <  platformPos.y + 25 &&
        playerPos.y >  platformPos.y )
    {
        playerPos.y = platformPos.y;
        jumps = 0;
    }
    
    if (playerPos.x > platform2Pos.x  &&
        playerPos.x <  platform2Pos.x + 100  &&
        playerPos.y <  platform2Pos.y + 25 &&
        playerPos.y >  platform2Pos.y )
    {
        playerPos.y = platform2Pos.y;
        jumps = 0;
    }
    
    if (playerPos.x > platform3Pos.x  &&
        playerPos.x <  platform3Pos.x + 100  &&
        playerPos.y <  platform3Pos.y + 25 &&
        playerPos.y >  platform3Pos.y )
    {
        playerPos.y = platform3Pos.y;
        jumps = 0;
    }
    
    if (playerPos.x > platform4Pos.x  &&
        playerPos.x <  platform4Pos.x + 100  &&
        playerPos.y <  platform4Pos.y + 25 &&
        playerPos.y >  platform4Pos.y )
    {
        playerPos.y = platform4Pos.y;
        jumps = 0;
    }
    
    if(playerPos.y > 1050)
    {
        isDead = true;
       
    }
    
    if(isDead == true)
    {
        ofDrawBitmapStringHighlight("YOU ARE DEAD PRESS R TO RESTART",300,350);
    }
    
    if(platformPos.y > 1000)
    {
        platformPos.y = -50;
    }
    
    if(platform2Pos.y > 1000)
    {
        platform2Pos.y = -50;
    }
    
    if(platform3Pos.y > 1000)
    {
        platform3Pos.y = -50;
    }
    
    if(platform4Pos.y > 1000)
    {
        platform4Pos.y = -50;
    }
    
    
    if(jumps > 3)
    {
        jump = false;
    }
    
    if(dir.y > 5 )
    {
        dir.y = 5;
    }
    
    if(isJumping == false) {
        
    if (jump == true)
    {
        dir.y =-12.5;
        isJumping = true;
    }
        
}
  
    if (down)
    {
        playerPos.y+=4;
    }
    
    if (left)
    {
        playerPos.x-=4;
    }
    
    if (right)
    {
        playerPos.x+=4;
    }
}

//--------------------------------------------------------------

void ofApp::keyPressed(int key)
{
    
    if (key == 'd')
    {
        playerPos.x+=4;
        right = true;
    }
    
    if (key == 'a')
    {
        playerPos.x-=4;
        left = true;
    }
    if (key == 's')
    {
        playerPos.y+=4;
        down = true;
    }
  
    if (key == 'w')
    {
        jump = true;
    }
}

//--------------------------------------------------------------

void ofApp::keyReleased(int key){
    
    if (key == 'd')
    {
        playerPos.x+=4;
        right = false;
    }
    
    if (key == 'a')
    {
        playerPos.x-=4;
        left = false;
    }
    if (key == 's')
    {
        playerPos.y+=4;
        down = false;
    }
    
    if (key == 'w')
    {
        jump = false;
        jumps += 1;
        isJumping = false;
    }
    
    if (isDead == true)
    {
        
    if (key == 'r')
        
    {
        playerPos.y = 500;
        isDead = false;
        jumps = 0;
    }
    
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
