#include <GL/glut.h>

void mydisplay() {

	glClearColor(0.5, 0.5, 0.5, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);

	GLUquadricObj* quadricPtr;
	quadricPtr = gluNewQuadric();
	gluQuadricDrawStyle(quadricPtr, GLU_FILL);
	glShadeModel(GL_FLAT);
	gluQuadricNormals(quadricPtr, GLU_FLAT);
	gluQuadricTexture(quadricPtr, GL_NONE);

	glColor3f(0, 0, 0);
	glPushMatrix(); //right leg 1 outline
	glTranslatef(5, -25, 0);
	glRotatef(-30, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(0.7, 1, 1);
	gluDisk(quadricPtr, 5, 7, 100, 1);
	glPopMatrix();

	glColor3f(0, 0, 0);
	glPushMatrix(); //right leg 2 outline
	glTranslatef(10, -25.5, 0);
	glRotatef(15, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(0.7, 1, 1);
	gluDisk(quadricPtr, 5, 7, 100, 1);
	glPopMatrix();

	glColor3f(0, 0, 0);
	glPushMatrix(); //right leg 3 outline
	glTranslatef(15, -25.5, 0);
	glRotatef(60, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(0.51, 1, 1);
	gluDisk(quadricPtr, 6, 8, 100, 1);
	glPopMatrix();

	glColor3f(0.85, 0.89, 0.28);
	glPushMatrix(); //right leg 1
	glTranslatef(5, -25, 0);
	glRotatef(-30, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(0.7, 1, 1);
	gluDisk(quadricPtr, 0, 5, 100, 1);
	glPopMatrix();

	glColor3f(0.85, 0.89, 0.28);
	glPushMatrix(); //right leg 2
	glTranslatef(10, -25.5, 0);
	glRotatef(15, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(0.7, 1, 1);
	gluDisk(quadricPtr, 0, 5, 100, 1);
	glPopMatrix();

	glColor3f(0.85, 0.89, 0.28);
	glPushMatrix(); //right leg 3
	glTranslatef(15, -25.5, 0);
	glRotatef(60, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(0.5, 1, 1);
	gluDisk(quadricPtr, 0, 6, 100, 1);
	glPopMatrix();

	glColor3f(0, 0, 0);
	glPushMatrix(); //left leg 1 outline
	glTranslatef(-16, -26, 0);
	glRotatef(-60, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(0.4, 1, 1);
	gluDisk(quadricPtr, 6, 8, 100, 1);
	glPopMatrix();

	glColor3f(0, 0, 0);
	glPushMatrix(); //left leg 2 outline
	glTranslatef(-10.5, -25, 0);
	glRotatef(-30, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(1, 1, 1);
	gluDisk(quadricPtr, 5, 7, 100, 1);
	glPopMatrix();

	glColor3f(0, 0, 0);
	glPushMatrix(); //left leg 3 outline
	glTranslatef(-4, -25, 0);
	glRotatef(-10, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(0.9, 1, 1);
	gluDisk(quadricPtr, 5, 7, 100, 1);
	glPopMatrix();

	glColor3f(0.85, 0.89, 0.28);
	glPushMatrix(); //left leg 1
	glTranslatef(-16, -26, 0);
	glRotatef(-60, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(0.4, 1, 1);
	gluDisk(quadricPtr, 0, 6, 100, 1);
	glPopMatrix();

	glColor3f(0.85, 0.89, 0.28);
	glPushMatrix(); //left leg 2
	glTranslatef(-10.5, -25, 0);
	glRotatef(-30, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(1, 1, 1);
	gluDisk(quadricPtr, 0, 5, 100, 1);
	glPopMatrix();

	glColor3f(0.85, 0.89, 0.28);
	glPushMatrix(); //left leg 3
	glTranslatef(-4, -25, 0);
	glRotatef(-10, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(0.9, 1, 1);
	gluDisk(quadricPtr, 0, 5, 100, 1);
	glPopMatrix();

	glColor3f(0, 0, 0);
	glPushMatrix(); //right hand finger 1 outline
	glTranslatef(15.5, -14.7, 0);
	glRotatef(20, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(1, 0.3, 1);
	gluDisk(quadricPtr, 5, 9, 100, 1);
	glPopMatrix();

	glPushMatrix(); //right hand finger 2 outline
	glTranslatef(16.5, -12, 0);
	glRotatef(23, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(1, 0.3, 1);
	gluDisk(quadricPtr, 6, 8, 100, 1);
	glPopMatrix();

	glPushMatrix(); //right hand finger 3 outline
	glTranslatef(15.5, -10, 0);
	glRotatef(30, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(1, 0.3, 1);
	gluDisk(quadricPtr, 6, 8, 100, 1);
	glPopMatrix();

	glColor3f(0.85, 0.89, 0.28);
	glPushMatrix(); //right hand finger 1
	glTranslatef(17, -14, 0);
	glRotatef(20, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(1, 0.3, 1);
	gluDisk(quadricPtr, 0, 6, 100, 1);
	glPopMatrix();

	glPushMatrix(); //right hand finger 2
	glTranslatef(17, -12, 0);
	glRotatef(23, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(1, 0.3, 1);
	gluDisk(quadricPtr, 0, 6, 100, 1);
	glPopMatrix();

	glPushMatrix(); //right hand finger 3
	glTranslatef(16, -10, 0);
	glRotatef(30, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(1, 0.3, 1);
	gluDisk(quadricPtr, 0, 6, 100, 1);
	glPopMatrix();

	glColor3f(0, 0, 0);
	glPushMatrix(); //left hand finger 1 outline
	glTranslatef(-17, -14, 0);
	glRotatef(-50, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(0.3, 1, 1);
	gluDisk(quadricPtr, 6, 8, 100, 1);
	glPopMatrix();

	glPushMatrix(); //left hand finger 2 outline
	glTranslatef(-18.1, -17, 0);
	glRotatef(-5, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(0.4, 1, 1);
	gluDisk(quadricPtr, 3, 5, 100, 1);
	glPopMatrix();

	glColor3f(0.85, 0.89, 0.28);
	glPushMatrix(); //left hand finger 1
	glTranslatef(-17, -14, 0);
	glRotatef(-50, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(0.3, 1, 1);
	gluDisk(quadricPtr, 0, 6, 100, 1);
	glPopMatrix();

	glPushMatrix(); //left hand finger 2
	glTranslatef(-18, -17, 0);
	glRotatef(-5, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(0.4, 1, 1);
	gluDisk(quadricPtr, 0, 3, 100, 1);
	glPopMatrix();

	glColor3f(1, 1, 1);
	glPushMatrix(); //body
	glBegin(GL_TRIANGLES);
	glVertex2f(0, 18);
	glVertex2f(-20, -25);
	glVertex2f(20, -25);
	glEnd();
	glPopMatrix();

	glColor3f(0.91, 0.33, 0.47);
	glPushMatrix(); //dress patterns
	glLineWidth(25);
	glBegin(GL_LINES);
	glVertex2f(0, -12.8);
	glVertex2f(0, -25);
	glVertex2f(-10, -10);
	glVertex2f(-10, -25);
	glVertex2f(10, -10);
	glVertex2f(10, -25);
	glEnd();
	glPopMatrix();

	glColor3f(0, 0, 0);
	glPushMatrix(); //dress neck tie
	glBegin(GL_TRIANGLES);
	glVertex2f(2, -17);
	glVertex2f(-5.5, -13.5);
	glVertex2f(-5.5, -20.5);

	glVertex2f(-2, -17);
	glVertex2f(5.5, -13.5);
	glVertex2f(5.5, -20.5);
	glEnd();
	glPopMatrix();

	glColor3f(0, 0, 0);
	glPushMatrix(); //dress outline
	glLineWidth(8);
	glBegin(GL_LINE_STRIP);
	glVertex2f(0, 18);
	glVertex2f(-20, -25);
	glVertex2f(20, -25);
	glVertex2f(0, 18);
	glEnd();
	glPopMatrix();

	glColor3f(0.85, 0.89, 0.28);
	glPushMatrix(); //face
	glScalef(0.9, 0.6, 1);
	glTranslatef(0, 5, 0);
	gluDisk(quadricPtr, 0, 27, 100, 1);
	glPopMatrix();

	glColor3f(0, 0, 0);
	glPushMatrix(); //face outline
	glScalef(0.9, 0.6, 1);
	glTranslatef(0, 5, 0);
	gluDisk(quadricPtr, 25, 27, 100, 1);
	glPopMatrix();

	glColor3f(1, 1, 1);
	glPushMatrix(); //left eyeball
	glTranslatef(-10, 18, 0);
	gluDisk(quadricPtr, 0, 11, 100, 1);
	glPopMatrix();

	glPushMatrix(); //right eyeball
	glTranslatef(10, 18, 0);
	gluDisk(quadricPtr, 0, 11, 100, 1);
	glPopMatrix();

	glColor3f(0, 0, 0);
	glPushMatrix(); //left eye outline
	glTranslatef(-10, 18, 0);
	gluDisk(quadricPtr, 9, 11, 100, 1);
	glPopMatrix();

	glPushMatrix(); //right eye outline
	glTranslatef(10, 18, 0);
	gluDisk(quadricPtr, 9, 11, 100, 1);
	glPopMatrix();

	glColor3f(1, 0.75, 0.8);
	glPushMatrix(); //left blush
	glTranslatef(-16, 0, 0);
	gluDisk(quadricPtr, 0, 3, 100, 1);
	glPopMatrix();

	glPushMatrix(); //right blush
	glTranslatef(16, 0, 0);
	gluDisk(quadricPtr, 0, 3, 100, 1);
	glPopMatrix();

	glColor3f(0, 0, 0);
	glPushMatrix(); //right eye expression
	glLineWidth(8);
	glBegin(GL_LINE_STRIP);
	glVertex2f(-8.5, 19);
	glVertex2f(-4, 17);
	glVertex2f(-8.5, 15);
	glEnd();
	glPopMatrix();

	glPushMatrix(); //left eye expression
	glTranslatef(6, 18, 0);
	gluDisk(quadricPtr, 0, 3, 100, 1);
	glPopMatrix();

	glPushMatrix(); //mouth
	glLineWidth(10);
	glBegin(GL_LINE_STRIP);
	glVertex2f(-12, -6);
	glVertex2f(0, -12.4);
	glVertex2f(12, -6);
	glEnd();
	glPopMatrix();



	glFlush();
}

void init()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-50.0, 50.0, -50.0, 50.0, -50.0, 50.0);
	glMatrixMode(GL_MODELVIEW);
}

void main(int argc, char** argv) {
	glutInitWindowSize(500, 500);
	glutCreateWindow("Kero Kero Keroppi 2D");
	glutDisplayFunc(mydisplay);

	init();

	glutMainLoop();
}