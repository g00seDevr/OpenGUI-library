#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include <iostream>
#include <GL/glut.h>
#include "GUI_ellements/button.hpp"

void reshape(int width, int height)
{
    glViewport(0, 0, width, height);
}

void display(void)
{
    //I'll leave the button(rectangle) here for a while.
    //I'll redo it later.
    
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    button(-0.5, -0.5, 0.5, 0.5);

    glutSwapBuffers();
}

class library
{
private:
    const char *name;
    int width, height;

public:

    void setWindowSize(int width, int height)
    {
        this->width = width;
        this->height = height;
    }

    void init(int argc, char **argv)
    {
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
        glutInitWindowPosition(100,100);
        glutInitWindowSize(width, height);
        glutCreateWindow(name);
        glViewport(0, 0, width, height);
        
        glutDisplayFunc(display);
        glutReshapeFunc(reshape);

        glutMainLoop();
    }

    library(char *name):name(name) { }
    ~library() { }
};

#endif
