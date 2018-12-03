#ifndef GUI_ELLEMENT_HPP
#define GUI_ELLEMENT_HPP


#include <GL/glut.h>

class OpenGUI_ellement
{
private:
    int x, y;

public:
    
    OpenGUI_ellement(int x, int y): x(x), y(y) {  }

    int getX() { return x; }
    int getY() { return y; }

};

#endif
