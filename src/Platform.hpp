//
//  plataform.hpp
//  mySketch
//
//  Created by Josh Barton  on 09/01/20.
//

#pragma once
#include <stdio.h>


class Platform
{
    private:
        float m_x;
        float m_y;
    public:
    Platform();
        Platform(float x, float y);
    
        float getX();
        float getY();
        void draw();
    
};
