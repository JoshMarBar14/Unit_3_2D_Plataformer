//
//  Ball.cpp
//  mySketch
//
//  Created by Josh Barton  on 25/11/19.
//

#include "Ball.hpp"
#include "ofGraphics.h"

Ball::Ball(float _x, float _y, float _r) {
    x = _x;
    y = _y;
    r = _r;
}



void Ball::Draw(){
    
        ofDrawCircle( x,y,r);
    
        x +=10;
    
    if ( x > 1000 ){
        
        x = -800;
        
    
        
        
    }
    
    
    
}



float Ball::getX(){
    return x;
    
}


float Ball::getY(){
    return y;
    
}


float Ball::getR(){
    return r;
    
}




