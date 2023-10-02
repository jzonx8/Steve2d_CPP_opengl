#include <iostream>
#include <GL/glut.h>
#include "steve.h"

/*float cyanShades[][3] = {
    {0.0f, 1.0f, 1.0f},  // Cyan
    {0.0f, 0.9f, 0.9f},  // A slightly darker shade
    {0.0f, 0.8f, 0.8f},  // An even darker shade
    // Add more shades as needed
};*/

void convertRGBtoGLColor3f(float r, float g, float b) {
    glColor3f(r / 255.0f, g / 255.0f, b / 255.0f);
}

void lineSteve(){
	glLineWidth(3.0f);
	glBegin(GL_LINES); // head
	glColor3f(0.87f,0.65f,0.29f);
	glVertex2f(-4.0f,8.0f);
	glVertex2f(4.0f,8.0f);
	glVertex2f(4.0f,8.0f);
	glVertex2f(4.0f,16.0f);
	glVertex2f(4.0f,16.0f);
	glVertex2f(-4.0f,16.0f);
	glVertex2f(-4.0f,16.0f);
	glVertex2f(-4.0f,8.0f);
	glEnd();
	
	glBegin(GL_LINES); // Torso
	glColor3f(0.08f,0.8f,0.87f);
	glVertex2f(-4.0f, 4.0f); //G
	glVertex2f(-4.0f,-2.0f); //H
	
	glVertex2f(-4.0f,-2.0f); //H
	glVertex2f(4.0f,-2.0f); //I
	
	glVertex2f(4.0f,-2.0f); //I
	glVertex2f(4.0f,4.0f); //J
	
	glVertex2f(4.0f,4.0f); //J
	glVertex2f(8.0f,4.0f); //K
	
	glVertex2f(8.0f,4.0f); //K
	glVertex2f(8.0f,8.0f); //L
	
	glVertex2f(8.0f,8.0f); //L
	glVertex2f(-8.0f,8.0f); //E
	
	glVertex2f(-8.0f,8.0f); //E
	glVertex2f(-8.0f,4.0f); //F
	
	glVertex2f(-8.0f,4.0f); //F
	glVertex2f(-4.0f, 4.0f); //G
	glEnd();
	
	glBegin(GL_LINES); // r arm
	glColor3f(0.87f,0.65f,0.29f);
	glVertex2f(-8.0f,-4.0f);
	glVertex2f(-4.0f,-4.0f);
	glVertex2f(-4.0f,-4.0f);
	glVertex2f(-4.0f,8.0f);
	glVertex2f(-4.0f,8.0f);
	glVertex2f(-8.0f,8.0f);
	glVertex2f(-8.0f,8.0f);
	glVertex2f(-8.0f,-4.0f);
	glEnd();
	
	glBegin(GL_LINES); // l arm
	glColor3f(0.87f,0.65f,0.29f);
	glVertex2f(4.0f,-4.0f);
	glVertex2f(8.0f,-4.0f);
	glVertex2f(8.0f,-4.0f);
	glVertex2f(8.0f,8.0f);
	glVertex2f(8.0f,8.0f);
	glVertex2f(4.0f,8.0f);
	glVertex2f(4.0f,8.0f);
	glVertex2f(4.0f,-4.0f);
	glEnd();
	
	glBegin(GL_LINES); //mid
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, -2.0f);
	glVertex2f(0.0f, -16.0f);
	glEnd();
	
	glBegin(GL_LINES); // r leg
	glColor3f(0.28f,0.09,0.68f);
	glVertex2f(-4.0f,-14.0f);
	glVertex2f(0.0f,-14.0f);
	glVertex2f(0.0f,-14.0f);
	glVertex2f(0.0f,-2.0f);
	glVertex2f(0.0f,-2.0f);
	glVertex2f(-4.0f,-2.0f);
	glVertex2f(-4.0f,-2.0f);
	glVertex2f(-4.0f,-14.0f);
	glEnd();
	
	glBegin(GL_LINES); // l leg
	glColor3f(0.28f,0.09,0.68f);
	glVertex2f(0.0f,-14.0f);
	glVertex2f(4.0f,-14.0f);
	glVertex2f(4.0f,-14.0f);
	glVertex2f(4.0f,-2.0f);
	glVertex2f(4.0f,-2.0f);
	glVertex2f(0.0f,-2.0f);
	glVertex2f(0.0f,-2.0f);
	glVertex2f(0.0f,-14.0f);
	glEnd();
	
	glBegin(GL_LINES); // foot
	glColor3f(0.7f,0.7f,0.7f);
	glVertex2f(-4.0f, -16.0f);
	glVertex2f(4.0f, -16.0f);
	glVertex2f(4.0f, -16.0f);
	glVertex2f(4.0f, -14.0f);
	glVertex2f(4.0f, -14.0f);
	glVertex2f(-4.0f, -14.0f);
	glVertex2f(-4.0f, -14.0f);
	glVertex2f(-4.0f, -16.0f);
	glEnd();
	
	environment();
}

void coloredSteve(){	
	
	/*Hair Fixed
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(43.0f, 30.0f, 13.0f);
	glVertex2f(-4.0f,14.0f);
	glVertex2f(4.0f,14.0f);
	glVertex2f(4.0f,16.0f);
	glVertex2f(-4.0f,16.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(43.0f, 30.0f, 13.0f);
	glVertex2f(-4.0f,13.0f);
	glVertex2f(-3.0f,13.0f);
	glVertex2f(-3.0f,14.0f);
	glVertex2f(-4.0f,14.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(43.0f, 30.0f, 13.0f);
	glVertex2f(4.0f,13.0f);
	glVertex2f(3.0f,13.0f);
	glVertex2f(3.0f,14.0f);
	glVertex2f(4.0f,14.0f);
	glEnd();
	*/
	
	// Hair Pixelated
	glBegin(GL_POLYGON);
	convertRGBtoGLColor3f(43.0f, 30.0f, 13.0f);
	glVertex2f(-3.0f,14.0f);
	glVertex2f(-1.0f,14.0f);
	glVertex2f(-1.0f,15.0f);
	glVertex2f(-2.0f,15.0f);
	glVertex2f(-2.0f,16.0f);
	glVertex2f(-3.0f,16.0f);
	glVertex2f(-3.0f,15.0f);
	glVertex2f(-4.0f,15.0f);
	glVertex2f(-4.0f,13.0f);
	glVertex2f(-3.0f,13.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(47.0f, 32.0f, 13.0f);
	glVertex2f(-4.0f,15.0f);
	glVertex2f(-3.0f,15.0f);
	glVertex2f(-3.0f,16.0f);
	glVertex2f(-4.0f,16.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(47.0f, 32.0f, 13.0f);
	glVertex2f(-2.0f,15.0f);
	glVertex2f(-1.0f,15.0f);
	glVertex2f(-1.0f,16.0f);
	glVertex2f(-2.0f,16.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(40.0f, 28.0f, 11.0f);
	glVertex2f(-1.0f,15.0f);
	glVertex2f(0.0f,15.0f);
	glVertex2f(0.0f,16.0f);
	glVertex2f(-1.0f,16.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(36.0f, 24.0f, 8.0f);
	glVertex2f(1.0f,15.0f);
	glVertex2f(0.0f,15.0f);
	glVertex2f(0.0f,16.0f);
	glVertex2f(1.0f,16.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(38.0f, 26.0f, 10.0f);
	glVertex2f(2.0f,15.0f);
	glVertex2f(1.0f,15.0f);
	glVertex2f(1.0f,16.0f);
	glVertex2f(2.0f,16.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(43.0f, 30.0f, 13.0f);
	glVertex2f(3.0f,15.0f);
	glVertex2f(2.0f,15.0f);
	glVertex2f(2.0f,16.0f);
	glVertex2f(3.0f,16.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(42.0f, 29.0f, 13.0f);
	glVertex2f(4.0f,15.0f);
	glVertex2f(3.0f,15.0f);
	glVertex2f(3.0f,16.0f);
	glVertex2f(4.0f,16.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(51.0f, 36.0f, 17.0f);
	glVertex2f(-1.0f,14.0f);
	glVertex2f(0.0f,14.0f);
	glVertex2f(0.0f,15.0f);
	glVertex2f(-1.0f,15.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(66.0f, 42.0f, 18.0f);
	glVertex2f(1.0f,14.0f);
	glVertex2f(0.0f,14.0f);
	glVertex2f(0.0f,15.0f);
	glVertex2f(1.0f,15.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(63.0f, 42.0f, 21.0f);
	glVertex2f(2.0f,14.0f);
	glVertex2f(1.0f,14.0f);
	glVertex2f(1.0f,15.0f);
	glVertex2f(2.0f,15.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(44.0f, 30.0f, 14.0f);
	glVertex2f(3.0f,14.0f);
	glVertex2f(2.0f,14.0f);
	glVertex2f(2.0f,15.0f);
	glVertex2f(3.0f,15.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(40.0f, 28.0f, 11.0f);
	glVertex2f(4.0f,14.0f);
	glVertex2f(3.0f,14.0f);
	glVertex2f(3.0f,15.0f);
	glVertex2f(4.0f,15.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(52.0f, 37.0f, 18.0f);
	glVertex2f(4.0f,13.0f);
	glVertex2f(3.0f,13.0f);
	glVertex2f(3.0f,14.0f);
	glVertex2f(4.0f,14.0f);
	glEnd();
	
	// Right Eye
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-3.0f,11.0f);
	glVertex2f(-2.0f,11.0f);
	glVertex2f(-2.0f,12.0f);
	glVertex2f(-3.0f,12.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(82.0f, 61.0f, 137.0f);
	glVertex2f(-2.0f,11.0f);
	glVertex2f(-1.0f,11.0f);
	glVertex2f(-1.0f,12.0f);
	glVertex2f(-2.0f,12.0f);
	glEnd();
	
	// Left Eye
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(3.0f,11.0f);
	glVertex2f(2.0f,11.0f);
	glVertex2f(2.0f,12.0f);
	glVertex2f(3.0f,12.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(82.0f, 61.0f, 137.0f);
	glVertex2f(2.0f,11.0f);
	glVertex2f(1.0f,11.0f);
	glVertex2f(1.0f,12.0f);
	glVertex2f(2.0f,12.0f);
	glEnd();
	
	// Mouth
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(106.0f, 64.0f, 48.0f);
	glVertex2f(-1.0f,10.0f);
	glVertex2f(1.0f,10.0f);
	glVertex2f(1.0f,11.0f);
	glVertex2f(-1.0f,11.0f);
	glEnd();
	
	// Chin
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(138.0f, 76.0f, 61.0f);
	glVertex2f(-1.0f,9.0f);
	glVertex2f(1.0f,9.0f);
	glVertex2f(1.0f,10.0f);
	glVertex2f(-1.0f,10.0f);
	glEnd();
	
	// Beard
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(69.0f, 34.0f, 14.0f);
	glVertex2f(-2.0f,8.0f);
	glVertex2f(2.0f,8.0f);
	glVertex2f(2.0f,10.0f);
	glVertex2f(-2.0f,10.0f);
	glEnd();
	
	/* Head Fixed
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(187.0f, 137.0f, 114.0f);
	glVertex2f(-4.0f,8.0f);
	glVertex2f(4.0f,8.0f);
	glVertex2f(4.0f,16.0f);
	glVertex2f(-4.0f,16.0f);
	glEnd();
	*/
	
	// Head Pixelated
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(182.0f, 137.0f, 108.0f);
	glVertex2f(-3.0f,13.0f);
	glVertex2f(-2.0f,13.0f);
	glVertex2f(-2.0f,14.0f);
	glVertex2f(-3.0f,14.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(189.0f, 142.0f, 114.0f);
	glVertex2f(-2.0f,13.0f);
	glVertex2f(-1.0f,13.0f);
	glVertex2f(-1.0f,14.0f);
	glVertex2f(-2.0f,14.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(198.0f, 150.0f, 128.0f);
	glVertex2f(-1.0f,13.0f);
	glVertex2f(0.0f,13.0f);
	glVertex2f(0.0f,14.0f);
	glVertex2f(-1.0f,14.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(189.0f, 139.0f, 114.0f);
	glVertex2f(1.0f,13.0f);
	glVertex2f(0.0f,13.0f);
	glVertex2f(0.0f,14.0f);
	glVertex2f(1.0f,14.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(189.0f, 142.0f, 116.0f);
	glVertex2f(2.0f,13.0f);
	glVertex2f(1.0f,13.0f);
	glVertex2f(1.0f,14.0f);
	glVertex2f(2.0f,14.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(172.0f, 118.0f, 90.0f);
	glVertex2f(3.0f,13.0f);
	glVertex2f(2.0f,13.0f);
	glVertex2f(2.0f,14.0f);
	glVertex2f(3.0f,14.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(172.0f, 118.0f, 90.0f);
	glVertex2f(-4.0f,12.0f);
	glVertex2f(-3.0f,12.0f);
	glVertex2f(-3.0f,13.0f);
	glVertex2f(-4.0f,13.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(180.0f, 132.0f, 109.0f);
	glVertex2f(-3.0f,12.0f);
	glVertex2f(-2.0f,12.0f);
	glVertex2f(-2.0f,13.0f);
	glVertex2f(-3.0f,13.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(170.0f, 125.0f, 102.0f);
	glVertex2f(-2.0f,12.0f);
	glVertex2f(-1.0f,12.0f);
	glVertex2f(-1.0f,13.0f);
	glVertex2f(-2.0f,13.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(173.0f, 128.0f, 109.0f);
	glVertex2f(-1.0f,12.0f);
	glVertex2f(0.0f,12.0f);
	glVertex2f(0.0f,13.0f);
	glVertex2f(-1.0f,13.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(156.0f, 114.0f, 92.0f);
	glVertex2f(1.0f,12.0f);
	glVertex2f(0.0f,12.0f);
	glVertex2f(0.0f,13.0f);
	glVertex2f(1.0f,13.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(187.0f, 137.0f, 114.0f);
	glVertex2f(2.0f,12.0f);
	glVertex2f(1.0f,12.0f);
	glVertex2f(1.0f,13.0f);
	glVertex2f(2.0f,13.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(156.0f, 105.0f, 76.0f);
	glVertex2f(4.0f,12.0f);
	glVertex2f(2.0f,12.0f);
	glVertex2f(2.0f,13.0f);
	glVertex2f(4.0f,13.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(180.0f, 132.0f, 109.0f);
	glVertex2f(-4.0f,11.0f);
	glVertex2f(-3.0f,11.0f);
	glVertex2f(-3.0f,12.0f);
	glVertex2f(-4.0f,12.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(181.0f, 123.0f, 103.0f);
	glVertex2f(-1.0f,11.0f);
	glVertex2f(0.0f,11.0f);
	glVertex2f(0.0f,12.0f);
	glVertex2f(-1.0f,12.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(187.0f, 137.0f, 114.0f);
	glVertex2f(1.0f,11.0f);
	glVertex2f(0.0f,11.0f);
	glVertex2f(0.0f,12.0f);
	glVertex2f(1.0f,12.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(170.0f, 125.0f, 102.0f);
	glVertex2f(4.0f,11.0f);
	glVertex2f(3.0f,11.0f);
	glVertex2f(3.0f,12.0f);
	glVertex2f(4.0f,12.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(156.0f, 99.0f, 70.0f);
	glVertex2f(-4.0f,10.0f);
	glVertex2f(-3.0f,10.0f);
	glVertex2f(-3.0f,11.0f);
	glVertex2f(-4.0f,11.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(179.0f, 123.0f, 98.0f);
	glVertex2f(-3.0f,10.0f);
	glVertex2f(-2.0f,10.0f);
	glVertex2f(-2.0f,11.0f);
	glVertex2f(-3.0f,11.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(183.0f, 130.0f, 114.0f);
	glVertex2f(-2.0f,10.0f);
	glVertex2f(-1.0f,10.0f);
	glVertex2f(-1.0f,11.0f);
	glVertex2f(-2.0f,11.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(190.0f, 136.0f, 108.0f);
	glVertex2f(2.0f,10.0f);
	glVertex2f(1.0f,10.0f);
	glVertex2f(1.0f,11.0f);
	glVertex2f(2.0f,11.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(162.0f, 106.0f, 71.0f);
	glVertex2f(3.0f,10.0f);
	glVertex2f(2.0f,10.0f);
	glVertex2f(2.0f,11.0f);
	glVertex2f(3.0f,11.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(128.0f, 83.0f, 52.0f);
	glVertex2f(4.0f,10.0f);
	glVertex2f(3.0f,10.0f);
	glVertex2f(3.0f,11.0f);
	glVertex2f(4.0f,11.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(144.0f, 94.0f, 67.0f);
	glVertex2f(-4.0f,9.0f);
	glVertex2f(-3.0f,9.0f);
	glVertex2f(-3.0f,10.0f);
	glVertex2f(-4.0f,10.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(150.0f, 95.0f, 64.0f);
	glVertex2f(-3.0f,9.0f);
	glVertex2f(-2.0f,9.0f);
	glVertex2f(-2.0f,10.0f);
	glVertex2f(-3.0f,10.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(143.0f, 94.0f, 62.0f);
	glVertex2f(3.0f, 9.0f);
	glVertex2f(2.0f, 9.0f);
	glVertex2f(2.0f, 10.0f);
	glVertex2f(3.0f, 10.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(129.0f, 83.0f, 57.0f);
	glVertex2f(4.0f, 9.0f);
	glVertex2f(3.0f, 9.0f);
	glVertex2f(3.0f, 10.0f);
	glVertex2f(4.0f, 10.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(111.0f, 69.0f, 44.0f);
	glVertex2f(-4.0f, 8.0f);
	glVertex2f(-3.0f, 8.0f);
	glVertex2f(-3.0f, 9.0f);
	glVertex2f(-4.0f, 9.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(109.0f, 67.0f, 42.0f);
	glVertex2f(-3.0f, 8.0f);
	glVertex2f(-2.0f, 8.0f);
	glVertex2f(-2.0f, 9.0f);
	glVertex2f(-3.0f, 9.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(131.0f, 85.0f, 59.0f);
	glVertex2f(3.0f, 8.0f);
	glVertex2f(2.0f, 8.0f);
	glVertex2f(2.0f, 9.0f);
	glVertex2f(3.0f, 9.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(122.0f, 78.0f, 51.0f);
	glVertex2f(4.0f, 8.0f);
	glVertex2f(3.0f, 8.0f);
	glVertex2f(3.0f, 9.0f);
	glVertex2f(4.0f, 9.0f);
	glEnd();
	
	// V Neck
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(129.0f, 83.0f, 57.0f);
	glVertex2f(-2.0f, 7.0f);
	glVertex2f(-1.0f, 7.0f);
	glVertex2f(-1.0f, 8.0f);
	glVertex2f(-2.0f, 8.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(162.0f, 106.0f, 71.0f);
	glVertex2f(-1.0f, 7.0f);
	glVertex2f(0.0f, 7.0f);
	glVertex2f(0.0f, 8.0f);
	glVertex2f(-1.0f, 8.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(129.0f, 83.0f, 57.0f);
	glVertex2f(-1.0f, 6.0f);
	glVertex2f(-0.0f, 6.0f);
	glVertex2f(-0.0f, 7.0f);
	glVertex2f(-1.0f, 7.0f);
	glEnd();
	
	glBegin(GL_POLYGON);
	convertRGBtoGLColor3f(129.0f, 83.0f, 57.0f);
	glVertex2f(1.0f, 7.0f);
	glVertex2f(2.0f, 7.0f);
	glVertex2f(2.0f, 8.0f);
	glVertex2f(0.0f, 8.0f);
	glVertex2f(0.0f, 6.0f);
	glVertex2f(1.0f, 6.0f);
	glEnd();
	
	/* Torso Fixed
	glBegin(GL_POLYGON); 
	convertRGBtoGLColor3f(0.0f, 175.0f, 175.0f);
	glVertex2f(-4.0f, 4.0f); //G
	glVertex2f(-4.0f,-2.0f); //H
	glVertex2f(4.0f,-2.0f); //I
	glVertex2f(4.0f,4.0f); //J
	glVertex2f(8.0f,4.0f); //K
	glVertex2f(8.0f,8.0f); //L
	glVertex2f(-8.0f,8.0f); //E
	glVertex2f(-8.0f,4.0f); //F
	glEnd();
	
	glBegin(GL_POLYGON); 
	convertRGBtoGLColor3f(0.0f, 175.0f, 175.0f);
	glVertex2f(3.0f, -3.0f); 
	glVertex2f(3.0f,-4.0f); 
	glVertex2f(4.0f,-4.0f);
	glVertex2f(4.0f,-2.0f); 
	glVertex2f(2.0f,-2.0f);
	glVertex2f(2.0f,-3.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(58.0f, 49.0f, 137.0f);
	glVertex2f(1.0f, -3.0f); 
	glVertex2f(2.0f,-3.0f); 
	glVertex2f(2.0f,-2.0f);
	glVertex2f(1.0f,-2.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(58.0f, 49.0f, 137.0f);
	glVertex2f(2.0f, -4.0f); 
	glVertex2f(3.0f,-4.0f); 
	glVertex2f(3.0f,-3.0f);
	glVertex2f(2.0f,-3.0f); 
	glEnd();
	*/
	
	// Torso Right Sleeve Pixelated
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 158.0f, 158.0f);
	glVertex2f(-8.0f, 7.0f); 
	glVertex2f(-7.0f, 7.0f); 
	glVertex2f(-7.0f, 8.0f);
	glVertex2f(-8.0f, 8.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 168.0f, 168.0f);
	glVertex2f(-7.0f, 6.0f); 
	glVertex2f(-6.0f, 6.0f); 
	glVertex2f(-6.0f, 8.0f);
	glVertex2f(-7.0f, 8.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 168.0f, 168.0f);
	glVertex2f(-5.0f, 7.0f); 
	glVertex2f(-4.0f, 7.0f); 
	glVertex2f(-4.0f, 8.0f);
	glVertex2f(-5.0f, 8.0f); 
	glEnd();
	
	glBegin(GL_POLYGON);
	convertRGBtoGLColor3f(0.0f, 175.0f, 175.0f);
	glVertex2f(-5.0f, 6.0f); 
	glVertex2f(-5.0f, 8.0f); 
	glVertex2f(-6.0f, 8.0f);
	glVertex2f(-6.0f, 5.0f); 
	glVertex2f(-4.0f, 5.0f);
	glVertex2f(-4.0f, 6.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 175.0f, 175.0f);
	glVertex2f(-8.0f, 6.0f); 
	glVertex2f(-7.0f, 6.0f); 
	glVertex2f(-7.0f, 7.0f);
	glVertex2f(-8.0f, 7.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 158.0f, 158.0f);
	glVertex2f(-5.0f, 6.0f); 
	glVertex2f(-4.0f, 6.0f); 
	glVertex2f(-4.0f, 7.0f);
	glVertex2f(-5.0f, 7.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 168.0f, 168.0f);
	glVertex2f(-8.0f, 5.0f); 
	glVertex2f(-7.0f, 5.0f); 
	glVertex2f(-7.0f, 6.0f);
	glVertex2f(-8.0f, 6.0f); 
	glEnd();
	
	glBegin(GL_POLYGON);
	convertRGBtoGLColor3f(0.0f, 175.0f, 175.0f);
	glVertex2f(-6.0f, 5.0f); 
	glVertex2f(-6.0f, 6.0f); 
	glVertex2f(-7.0f, 6.0f);
	glVertex2f(-7.0f, 4.0f); 
	glVertex2f(-5.0f, 4.0f);
	glVertex2f(-5.0f, 5.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 158.0f, 158.0f);
	glVertex2f(-8.0f, 4.0f); 
	glVertex2f(-7.0f, 4.0f); 
	glVertex2f(-7.0f, 5.0f);
	glVertex2f(-8.0f, 5.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 158.0f, 158.0f);
	glVertex2f(-5.0f, 4.0f); 
	glVertex2f(-4.0f, 4.0f); 
	glVertex2f(-4.0f, 5.0f);
	glVertex2f(-5.0f, 5.0f); 
	glEnd();
	
	// Torso Left Sleeve Pixelated
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 158.0f, 158.0f);
	glVertex2f(8.0f, 7.0f); 
	glVertex2f(7.0f, 7.0f); 
	glVertex2f(7.0f, 8.0f);
	glVertex2f(8.0f, 8.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 168.0f, 168.0f);
	glVertex2f(7.0f, 6.0f); 
	glVertex2f(6.0f, 6.0f); 
	glVertex2f(6.0f, 8.0f);
	glVertex2f(7.0f, 8.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 168.0f, 168.0f);
	glVertex2f(5.0f, 7.0f); 
	glVertex2f(4.0f, 7.0f); 
	glVertex2f(4.0f, 8.0f);
	glVertex2f(5.0f, 8.0f); 
	glEnd();
	
	glBegin(GL_POLYGON);
	convertRGBtoGLColor3f(0.0f, 175.0f, 175.0f);
	glVertex2f(5.0f, 6.0f); 
	glVertex2f(5.0f, 8.0f); 
	glVertex2f(6.0f, 8.0f);
	glVertex2f(6.0f, 5.0f); 
	glVertex2f(4.0f, 5.0f);
	glVertex2f(4.0f, 6.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 175.0f, 175.0f);
	glVertex2f(8.0f, 6.0f); 
	glVertex2f(7.0f, 6.0f); 
	glVertex2f(7.0f, 7.0f);
	glVertex2f(8.0f, 7.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 158.0f, 158.0f);
	glVertex2f(5.0f, 6.0f); 
	glVertex2f(4.0f, 6.0f); 
	glVertex2f(4.0f, 7.0f);
	glVertex2f(5.0f, 7.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 168.0f, 168.0f);
	glVertex2f(8.0f, 5.0f); 
	glVertex2f(7.0f, 5.0f); 
	glVertex2f(7.0f, 6.0f);
	glVertex2f(8.0f, 6.0f); 
	glEnd();
	
	glBegin(GL_POLYGON);
	convertRGBtoGLColor3f(0.0f, 175.0f, 175.0f);
	glVertex2f(6.0f, 5.0f); 
	glVertex2f(6.0f, 6.0f); 
	glVertex2f(7.0f, 6.0f);
	glVertex2f(7.0f, 4.0f); 
	glVertex2f(5.0f, 4.0f);
	glVertex2f(5.0f, 5.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 158.0f, 158.0f);
	glVertex2f(8.0f, 4.0f); 
	glVertex2f(7.0f, 4.0f); 
	glVertex2f(7.0f, 5.0f);
	glVertex2f(8.0f, 5.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 158.0f, 158.0f);
	glVertex2f(5.0f, 4.0f); 
	glVertex2f(4.0f, 4.0f); 
	glVertex2f(4.0f, 5.0f);
	glVertex2f(5.0f, 5.0f); 
	glEnd();
	
	// Torso Pixelated
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 153.0f, 153.0f);
	glVertex2f(-4.0f, 7.0f); 
	glVertex2f(-3.0f, 7.0f); 
	glVertex2f(-3.0f, 8.0f);
	glVertex2f(-4.0f, 8.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 158.0f, 158.0f);
	glVertex2f(-3.0f, 7.0f); 
	glVertex2f(-2.0f, 7.0f); 
	glVertex2f(-2.0f, 8.0f);
	glVertex2f(-3.0f, 8.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 158.0f, 158.0f);
	glVertex2f(4.0f, 7.0f); 
	glVertex2f(3.0f, 7.0f); 
	glVertex2f(3.0f, 8.0f);
	glVertex2f(4.0f, 8.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 158.0f, 158.0f);
	glVertex2f(3.0f, 7.0f); 
	glVertex2f(2.0f, 7.0f); 
	glVertex2f(2.0f, 8.0f);
	glVertex2f(3.0f, 8.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 168.0f, 168.0f);
	glVertex2f(-4.0f, 6.0f); 
	glVertex2f(-2.0f, 6.0f); 
	glVertex2f(-2.0f, 7.0f);
	glVertex2f(-4.0f, 7.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 158.0f, 158.0f);
	glVertex2f(-2.0f, 6.0f); 
	glVertex2f(-1.0f, 6.0f); 
	glVertex2f(-1.0f, 7.0f);
	glVertex2f(-2.0f, 7.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 158.0f, 158.0f);
	glVertex2f(2.0f, 6.0f); 
	glVertex2f(1.0f, 6.0f); 
	glVertex2f(1.0f, 7.0f);
	glVertex2f(2.0f, 7.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 175.0f, 175.0f);
	glVertex2f(2.0f, 4.0f); 
	glVertex2f(4.0f, 4.0f); 
	glVertex2f(4.0f, 7.0f);
	glVertex2f(2.0f, 7.0f); 
	glEnd();
	
	glBegin(GL_POLYGON);
	convertRGBtoGLColor3f(0.0f, 175.0f, 175.0f);
	glVertex2f(-4.0f, 4.0f); 
	glVertex2f(-1.0f, 4.0f); 
	glVertex2f(-1.0f, 5.0f);
	glVertex2f(-2.0f, 5.0f); 
	glVertex2f(-2.0f, 6.0f); 
	glVertex2f(-4.0f, 6.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 168.0f, 168.0f);
	glVertex2f(-2.0f, 5.0f); 
	glVertex2f(-1.0f, 5.0f); 
	glVertex2f(-1.0f, 6.0f);
	glVertex2f(-2.0f, 6.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 158.0f, 158.0f);
	glVertex2f(-1.0f, 4.0f); 
	glVertex2f(0.0f, 4.0f); 
	glVertex2f(0.0f, 6.0f);
	glVertex2f(-1.0f, 6.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 153.0f, 153.0f);
	glVertex2f(1.0f, 2.0f); 
	glVertex2f(0.0f, 2.0f); 
	glVertex2f(0.0f, 6.0f);
	glVertex2f(1.0f, 6.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 168.0f, 168.0f);
	glVertex2f(2.0f, 5.0f); 
	glVertex2f(1.0f, 5.0f); 
	glVertex2f(1.0f, 6.0f);
	glVertex2f(2.0f, 6.0f); 
	glEnd();
	
	glBegin(GL_POLYGON);
	convertRGBtoGLColor3f(0.0f, 153.0f, 153.0f);
	glVertex2f(-3.0f, 2.0f); 
	glVertex2f(-2.0f, 2.0f);
	glVertex2f(-2.0f, 4.0f); 
	glVertex2f(-4.0f, 4.0f); 
	glVertex2f(-4.0f, 0.0f);
	glVertex2f(-3.0f, 0.0f); 
	glEnd();
	
	glBegin(GL_POLYGON);
	convertRGBtoGLColor3f(0.0f, 175.0f, 175.0f);
	glVertex2f(-1.0f, 3.0f); 
	glVertex2f(-0.0f, 3.0f);
	glVertex2f(-0.0f, 4.0f); 
	glVertex2f(-2.0f, 4.0f); 
	glVertex2f(-2.0f, 2.0f);
	glVertex2f(-1.0f, 2.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 168.0f, 168.0f);
	glVertex2f(-1.0f, 2.0f); 
	glVertex2f(0.0f, 2.0f); 
	glVertex2f(0.0f, 3.0f);
	glVertex2f(-1.0f, 3.0f); 
	glEnd();
	
	glBegin(GL_POLYGON);
	convertRGBtoGLColor3f(0.0f, 175.0f, 175.0f);
	glVertex2f(2.0f, 0.0f); 
	glVertex2f(2.0f, 5.0f);
	glVertex2f(1.0f, 5.0f); 
	glVertex2f(1.0f, -1.0f); 
	glVertex2f(2.0f, -1.0f);
	glVertex2f(2.0f, -3.0f); 
	glVertex2f(3.0f, -3.0f); 
	glVertex2f(3.0f, 0.0f); 
	glEnd();
	
	glBegin(GL_POLYGON);
	convertRGBtoGLColor3f(0.0f, 153.0f, 153.0f);
	glVertex2f(3.0f, 3.0f); 
	glVertex2f(2.0f, 3.0f);
	glVertex2f(2.0f, 4.0f); 
	glVertex2f(4.0f, 4.0f); 
	glVertex2f(4.0f, -4.0f);
	glVertex2f(3.0f, -4.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 168.0f, 168.0f);
	glVertex2f(2.0f, 0.0f); 
	glVertex2f(3.0f, 0.0f); 
	glVertex2f(3.0f, 3.0f);
	glVertex2f(2.0f, 3.0f); 
	glEnd();
	
	glBegin(GL_POLYGON);
	convertRGBtoGLColor3f(0.0f, 175.0f, 175.0f);
	glVertex2f(-3.0f, 0.0f); 
	glVertex2f(-4.0f, 0.0f);
	glVertex2f(-4.0f, -1.0f); 
	glVertex2f(-1.0f, -1.0f); 
	glVertex2f(-1.0f, 2.0f);
	glVertex2f(-3.0f, 2.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 153.0f, 153.0f);
	glVertex2f(-1.0f, -1.0f); 
	glVertex2f(0.0f, -1.0f); 
	glVertex2f(0.0f, 2.0f);
	glVertex2f(-1.0f, 2.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 168.0f, 168.0f);
	glVertex2f(1.0f, -1.0f); 
	glVertex2f(0.0f, -1.0f); 
	glVertex2f(0.0f, 2.0f);
	glVertex2f(1.0f, 2.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 153.0f, 153.0f);
	glVertex2f(-4.0f, -2.0f); 
	glVertex2f(-1.0f, -2.0f); 
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(-4.0f, -1.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 168.0f, 168.0f);
	glVertex2f(-1.0f, -2.0f); 
	glVertex2f(0.0f, -2.0f); 
	glVertex2f(0.0f, -1.0f);
	glVertex2f(-1.0f, -1.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 175.0f, 175.0f);
	glVertex2f(1.0f, -2.0f); 
	glVertex2f(0.0f, -2.0f); 
	glVertex2f(0.0f, -1.0f);
	glVertex2f(1.0f, -1.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(0.0f, 168.0f, 168.0f);
	glVertex2f(2.0f, -2.0f); 
	glVertex2f(1.0f, -2.0f); 
	glVertex2f(1.0f, -1.0f);
	glVertex2f(2.0f, -1.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(58.0f, 49.0f, 137.0f);
	glVertex2f(1.0f, -3.0f); 
	glVertex2f(2.0f,-3.0f); 
	glVertex2f(2.0f,-2.0f);
	glVertex2f(1.0f,-2.0f); 
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(58.0f, 49.0f, 137.0f);
	glVertex2f(2.0f, -4.0f); 
	glVertex2f(3.0f,-4.0f); 
	glVertex2f(3.0f,-3.0f);
	glVertex2f(2.0f,-3.0f); 
	glEnd();
	
	/* Right Arm Fixed
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(187.0f, 137.0f, 114.0f);
	glVertex2f(-8.0f,-4.0f);
	glVertex2f(-4.0f,-4.0f);
	glVertex2f(-4.0f,8.0f);
	glVertex2f(-8.0f,8.0f);
	glEnd();
	
	*/
	
	// Right Arm Pixelated
	glBegin(GL_POLYGON); 
	convertRGBtoGLColor3f(170.0f, 125.0f, 102.0f);
	glVertex2f(-7.0f, 3.0f);
	glVertex2f(-6.0f, 3.0f);
	glVertex2f(-6.0f, 4.0f);
	glVertex2f(-8.0f, 4.0f);
	glVertex2f(-8.0f, 2.0f);
	glVertex2f(-7.0f, 2.0f);
	glEnd();
	
	glBegin(GL_POLYGON); 
	convertRGBtoGLColor3f(170.0f, 125.0f, 102.0f);
	glVertex2f(-8.0f, 0.0f);
	glVertex2f(-6.0f, 0.0f);
	glVertex2f(-6.0f, 1.0f);
	glVertex2f(-7.0f, 1.0f);
	glVertex2f(-7.0f, 2.0f);
	glVertex2f(-8.0f, 2.0f);
	glEnd();
	
	glBegin(GL_POLYGON);
	convertRGBtoGLColor3f(170.0f, 125.0f, 102.0f);
	glVertex2f(-5.0f, 2.0f);
	glVertex2f(-4.0f, 2.0f);
	glVertex2f(-4.0f, 4.0f);
	glVertex2f(-6.0f, 4.0f);
	glVertex2f(-6.0f, 0.0f);
	glVertex2f(-5.0f, 0.0f);
	glEnd();
	
	glBegin(GL_POLYGON);
	convertRGBtoGLColor3f(170.0f, 125.0f, 102.0f);
	glVertex2f(-5.0f, -2.0f);
	glVertex2f(-5.0f, -3.0f);
	glVertex2f(-4.0f, -3.0f);
	glVertex2f(-4.0f, -1.0f);
	glVertex2f(-5.0f, -1.0f);
	glVertex2f(-5.0f, 0.0f);
	glVertex2f(-6.0f, 0.0f);
	glVertex2f(-6.0f, -2.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(170.0f, 125.0f, 102.0f);
	glVertex2f(-8.0f, -2.0f);
	glVertex2f(-6.0f, -2.0f);
	glVertex2f(-6.0f, 0.0f);
	glVertex2f(-8.0f, 0.0f);
	glEnd();
	
	glBegin(GL_POLYGON);
	convertRGBtoGLColor3f(170.0f, 125.0f, 102.0f);
	glVertex2f(-7.0f, -3.0f);
	glVertex2f(-7.0f, -4.0f);
	glVertex2f(-6.0f, -4.0f);
	glVertex2f(-6.0f, -2.0f);
	glVertex2f(-8.0f, -2.0f);
	glVertex2f(-8.0f, -3.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(150.0f, 111.0f, 91.0f);
	glVertex2f(-8.0f, -3.0f);
	glVertex2f(-7.0f, -3.0f);
	glVertex2f(-7.0f, -4.0f);
	glVertex2f(-8.0f, -4.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(150.0f, 111.0f, 91.0f);
	glVertex2f(-7.0f, 1.0f);
	glVertex2f(-6.0f, 1.0f);
	glVertex2f(-6.0f, 3.0f);
	glVertex2f(-7.0f, 3.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(150.0f, 111.0f, 91.0f);
	glVertex2f(-5.0f, -1.0f);
	glVertex2f(-4.0f, -1.0f);
	glVertex2f(-4.0f, 2.0f);
	glVertex2f(-5.0f, 2.0f);
	glEnd();
	
	glBegin(GL_POLYGON);
	convertRGBtoGLColor3f(150.0f, 111.0f, 91.0f);
	glVertex2f(-6.0f, -4.0f);
	glVertex2f(-4.0f, -4.0f);
	glVertex2f(-4.0f, -3.0f);
	glVertex2f(-5.0f, -3.0f);
	glVertex2f(-5.0f, -2.0f);
	glVertex2f(-6.0f, -2.0f);
	glEnd();
	
	/*Left Arm Fixed
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(187.0f, 137.0f, 114.0f);
	glVertex2f(4.0f,-4.0f);
	glVertex2f(8.0f,-4.0f);
	glVertex2f(8.0f,8.0f);
	glVertex2f(4.0f,8.0f);
	glEnd();
	*/
	
	// Left Arm Pixelated
	glBegin(GL_POLYGON); 
	convertRGBtoGLColor3f(170.0f, 125.0f, 102.0f);
	glVertex2f(7.0f, 3.0f);
	glVertex2f(6.0f, 3.0f);
	glVertex2f(6.0f, 4.0f);
	glVertex2f(8.0f, 4.0f);
	glVertex2f(8.0f, 2.0f);
	glVertex2f(7.0f, 2.0f);
	glEnd();
	
	glBegin(GL_POLYGON); 
	convertRGBtoGLColor3f(170.0f, 125.0f, 102.0f);
	glVertex2f(8.0f, 0.0f);
	glVertex2f(6.0f, 0.0f);
	glVertex2f(6.0f, 1.0f);
	glVertex2f(7.0f, 1.0f);
	glVertex2f(7.0f, 2.0f);
	glVertex2f(8.0f, 2.0f);
	glEnd();
	
	glBegin(GL_POLYGON);
	convertRGBtoGLColor3f(170.0f, 125.0f, 102.0f);
	glVertex2f(5.0f, 2.0f);
	glVertex2f(4.0f, 2.0f);
	glVertex2f(4.0f, 4.0f);
	glVertex2f(6.0f, 4.0f);
	glVertex2f(6.0f, 0.0f);
	glVertex2f(5.0f, 0.0f);
	glEnd();
	
	glBegin(GL_POLYGON);
	convertRGBtoGLColor3f(170.0f, 125.0f, 102.0f);
	glVertex2f(5.0f, -2.0f);
	glVertex2f(5.0f, -3.0f);
	glVertex2f(4.0f, -3.0f);
	glVertex2f(4.0f, -1.0f);
	glVertex2f(5.0f, -1.0f);
	glVertex2f(5.0f, 0.0f);
	glVertex2f(6.0f, 0.0f);
	glVertex2f(6.0f, -2.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(170.0f, 125.0f, 102.0f);
	glVertex2f(8.0f, -2.0f);
	glVertex2f(6.0f, -2.0f);
	glVertex2f(6.0f, 0.0f);
	glVertex2f(8.0f, 0.0f);
	glEnd();
	
	glBegin(GL_POLYGON);
	convertRGBtoGLColor3f(170.0f, 125.0f, 102.0f);
	glVertex2f(7.0f, -3.0f);
	glVertex2f(7.0f, -4.0f);
	glVertex2f(6.0f, -4.0f);
	glVertex2f(6.0f, -2.0f);
	glVertex2f(8.0f, -2.0f);
	glVertex2f(8.0f, -3.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(150.0f, 111.0f, 91.0f);
	glVertex2f(8.0f, -3.0f);
	glVertex2f(7.0f, -3.0f);
	glVertex2f(7.0f, -4.0f);
	glVertex2f(8.0f, -4.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(150.0f, 111.0f, 91.0f);
	glVertex2f(7.0f, 1.0f);
	glVertex2f(6.0f, 1.0f);
	glVertex2f(6.0f, 3.0f);
	glVertex2f(7.0f, 3.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(150.0f, 111.0f, 91.0f);
	glVertex2f(5.0f, -1.0f);
	glVertex2f(4.0f, -1.0f);
	glVertex2f(4.0f, 2.0f);
	glVertex2f(5.0f, 2.0f);
	glEnd();
	
	glBegin(GL_POLYGON);
	convertRGBtoGLColor3f(150.0f, 111.0f, 91.0f);
	glVertex2f(6.0f, -4.0f);
	glVertex2f(4.0f, -4.0f);
	glVertex2f(4.0f, -3.0f);
	glVertex2f(5.0f, -3.0f);
	glVertex2f(5.0f, -2.0f);
	glVertex2f(6.0f, -2.0f);
	glEnd();
	
	// Mid
	glBegin(GL_LINES);
	convertRGBtoGLColor3f(64.0f, 54.0f, 154.0f);
	glVertex2f(0.0f, -4.0f);
	glVertex2f(0.0f, -14.0f);
	glEnd();
	
	glBegin(GL_LINES);
	convertRGBtoGLColor3f(70.0f, 63.0f, 170.0f);
	glVertex2f(-4.0f, -4.0f);
	glVertex2f(4.0f, -4.0f);
	glEnd();
	
	// Right Knee
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(58.0f, 49.0f, 137.0f);
	glVertex2f(-3.0f,-10.0f);
	glVertex2f(-1.0f,-10.0f);
	glVertex2f(-1.0f,-9.0f);
	glVertex2f(-3.0f,-9.0f);
	glEnd();
	
	// Left Knee
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(58.0f, 49.0f, 137.0f);
	glVertex2f(3.0f,-10.0f);
	glVertex2f(1.0f,-10.0f);
	glVertex2f(1.0f,-9.0f);
	glVertex2f(3.0f,-9.0f);
	glEnd();	
	
	// Right Leg
	glBegin(GL_QUADS); 
	convertRGBtoGLColor3f(70.0f, 58.0f, 164.0f);
	glVertex2f(-4.0f,-14.0f);
	glVertex2f(0.0f,-14.0f);
	glVertex2f(0.0f,-2.0f);
	glVertex2f(-4.0f,-2.0f);
	glEnd();
	
	// Left Leg
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(70.0f, 58.0f, 164.0f);
	glVertex2f(0.0f,-14.0f);
	glVertex2f(4.0f,-14.0f);
	glVertex2f(4.0f,-2.0f);
	glVertex2f(0.0f,-2.0f);
	glEnd();
	
	// Feet Line
	glBegin(GL_LINES);
	convertRGBtoGLColor3f(103.0f, 103.0f, 103.0f);
	glVertex2f(0.0f, -14.0f);
	glVertex2f(0.0f, -16.0f);
	glEnd();
	
	// Feet
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(107.0f, 107.0f, 107.0f);
	glVertex2f(-4.0f, -16.0f);
	glVertex2f(4.0f, -16.0f);
	glVertex2f(4.0f, -14.0f);
	glVertex2f(-4.0f, -14.0f);
	glEnd();
	
	environment();

}
