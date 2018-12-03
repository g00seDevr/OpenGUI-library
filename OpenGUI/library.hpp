#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include <GL/glut.h>
#include <vector>
#include "GUI_ellements/button.hpp"
#include "GUI_ellements/ellements.h"

void display(void);

void reshape(int width, int height)
{
    glViewport(0, 0, width, height);
}

class library
{
private:
    const char *name;
    static int width, height;
    std::vector<button> ellement;

public:

    void setWindowSize(int width, int height)
    {
        this->width = width;
        this->height = height;
    }

    static int getWidth() { return width; }
    static int getHeight() { return height; }

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

    std::vector<button> getEllements()
    {
        return ellement;
    }

    library(char *name):name(name) { }
    ~library() { }
};

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0f, library::getWidth(), library::getHeight(), 0.0f, 0.0f, 1.0f);

    

    glutSwapBuffers();
}

#endif
