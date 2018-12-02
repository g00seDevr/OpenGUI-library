#ifndef BUTTON_HPP
#define BUTTON_HPP

#include <GL/gl.h>


class button
{
private:
    float x1, y1, x2, y2;
    bool isClicked = false;

public:

button(float x1, float y1, float x2, float y2):x1(x1), y1(y1), x2(x2), y2(y2) 
{
    glRectf(x1, y1, x2, y2);
}

~button() {  }

};

#endif