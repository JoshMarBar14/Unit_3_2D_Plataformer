//
//  plataform.cpp
//  mySketch
//
//  Created by Josh Barton  on 09/01/20.
//

#include "Platform.hpp"
#include "ofGraphics.h"

Platform::Platform(float x, float y)
{
    m_x = x;
    m_y = y;

}


void Platform::draw()
{
    
    ofDrawRectangle(m_x, m_y, 200, 50);
}
