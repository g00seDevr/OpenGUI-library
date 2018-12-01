#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include <iostream>
#include <GL/glut.h>

class library
{
private:
    const char *name;
public:

    void init(int argc, char **argv)
    {
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
        glutInitWindowPosition(100,100);
        glutInitWindowSize(400,400);
        glutCreateWindow(name);

        glutMainLoop();
    }

    library(char *name):name(name) { }
    ~library() { }
};

#endif