#include <algorithm>
#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

#ifndef M_PI
#define M_PI 3.14159265
#endif


#include "glew.h"
#include "glut.h"

#include "vec4.h"
#include "mat4.h"

#pragma comment(lib,"glut32.lib")
#pragma comment(lib,"glew32.lib")

#ifdef _WIN32
#include <windows.h>
#include <time.h>
#endif

unsigned int width = 800;
unsigned int height = 600;

void display(void);
void resize(int width, int height);
void keyboard(unsigned char c, int x, int y);
void specialKey(int c, int x, int y);
void mouse(int b, int s, int x, int y);
void mousePassiveMotion(int x, int y);
void update(void);


int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(width, height);
	glutCreateWindow("ocean");
	glutCreateMenu(NULL);
	glutDisplayFunc(display);
	glutReshapeFunc(resize);
	glutKeyboardFunc(keyboard);
	glutSpecialFunc(specialKey);
	glutMouseFunc(mouse);
	glutPassiveMotionFunc(mousePassiveMotion);
	glutIdleFunc(update);
	glewInit();


	glutMainLoop();

}


void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glutSwapBuffers();
}


void resize(int w, int h)
{
	width = w;
	height = h;
}

void keyboard(unsigned char c, int x, int y)
{
	if (c == 27)
	{
		::exit(0);
	}

}

void specialKey(int c, int x, int y)
{
	//handle camera keys
	switch (c)
	{
		case GLUT_KEY_LEFT:
			break;
		default:
			break;
	}
}


void mouse(int b, int s, int x, int y)
{
	
}

void mousePassiveMotion(int x, int y)
{

}

void update()
{
	glutPostRedisplay();
}






