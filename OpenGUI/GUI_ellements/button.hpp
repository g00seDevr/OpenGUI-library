#ifndef BUTTON_HPP
#define BUTTON_HPP

#include <GL/gl.h>
#include "OpenGUI/GUI_ellement.hpp"

class button : public OpenGUI_ellement
{
private:
    float width, height;
    bool isClicked = false;

public:

button(int x1, int y1, int width, int height): OpenGUI_ellement(x1, y1)
{
    glRectf(x1, y1, x1 + width, y1 + height);
}

~button() {  }

};

#endif
