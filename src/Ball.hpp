//
//  Ball.hpp
//  mySketch
//
//  Created by Josh Barton  on 25/11/19.
//

#ifndef Ball_hpp
#define Ball_hpp

#include <stdio.h>

class Ball
{
    private:
        float x;
        float y;
        float r;
    public:
        float getX();
        float getY();
        float getR();
        Ball(float _x, float _y, float _r);
        void Draw();
    
};

#endif /* Ball_hpp */
