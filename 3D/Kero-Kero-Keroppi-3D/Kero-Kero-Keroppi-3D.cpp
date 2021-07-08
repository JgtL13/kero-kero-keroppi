#include <GL/glut.h>

void mydisplay() {

	glClearColor(0.5, 0.5, 0.5, 0.0);
	glEnable(GL_DEPTH_TEST);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	GLUquadricObj* quadricPtr;
	quadricPtr = gluNewQuadric();
	gluQuadricDrawStyle(quadricPtr, GLU_FILL);
	glShadeModel(GL_SMOOTH);
	gluQuadricNormals(quadricPtr, GLU_SMOOTH);
	gluQuadricTexture(quadricPtr, GL_TRUE);


	glRotatef(1, 0, 1, 0);
	glutPostRedisplay();

	glColor3f(0.85, 0.89, 0.28);
	glPushMatrix(); //right leg 1
	glTranslatef(5, -25, 0);
	glRotatef(-30, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(0.7, 1, 1);
	gluCylinder(quadricPtr, 5, 5, 10, 100, 100);
	glTranslatef(0, 0, 10);
	gluDisk(quadricPtr, 0, 5, 100, 1);
	glTranslatef(0, 0, -10);
	gluDisk(quadricPtr, 0, 5, 100, 1);
	glPopMatrix();

	glColor3f(0.85, 0.89, 0.28);
	glPushMatrix(); //right leg 2
	glTranslatef(10, -25.5, 0);
	glRotatef(15, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(0.7, 1, 1);
	gluCylinder(quadricPtr, 5, 5, 10, 100, 100);
	glTranslatef(0, 0, 10);
	gluDisk(quadricPtr, 0, 5, 100, 1);
	glTranslatef(0, 0, -10);
	gluDisk(quadricPtr, 0, 5, 100, 1);
	glPopMatrix();

	glColor3f(0.85, 0.89, 0.28);
	glPushMatrix(); //right leg 3
	glTranslatef(15, -25.5, 0);
	glRotatef(60, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(0.5, 1, 1);;
	gluCylinder(quadricPtr, 6, 6, 10, 100, 100);
	glTranslatef(0, 0, 10);
	gluDisk(quadricPtr, 0, 6, 100, 1);
	glTranslatef(0, 0, -10);
	gluDisk(quadricPtr, 0, 6, 100, 1);
	glPopMatrix();

	glColor3f(0.85, 0.89, 0.28);
	glPushMatrix(); //left leg 1
	glTranslatef(-16, -26, 0);
	glRotatef(-60, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(0.4, 1, 1);
	gluCylinder(quadricPtr, 6, 6, 10, 100, 100);
	glTranslatef(0, 0, 10);
	gluDisk(quadricPtr, 0, 6, 100, 1);
	glTranslatef(0, 0, -10);
	gluDisk(quadricPtr, 0, 6, 100, 1);
	glPopMatrix();

	glColor3f(0.85, 0.89, 0.28);
	glPushMatrix(); //left leg 2
	glTranslatef(-10.5, -25, 0);
	glRotatef(-30, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(1, 1, 1);
	gluCylinder(quadricPtr, 5, 5, 10, 100, 100);
	glTranslatef(0, 0, 10);
	gluDisk(quadricPtr, 0, 5, 100, 1);
	glTranslatef(0, 0, -10);
	gluDisk(quadricPtr, 0, 5, 100, 1);
	glPopMatrix();

	glColor3f(0.85, 0.89, 0.28);
	glPushMatrix(); //left leg 3
	glTranslatef(-4, -25, 0);
	glRotatef(-10, 0, 0, 1);
	glTranslatef(0, 0, 0);
	glScalef(0.9, 1, 1);
	gluCylinder(quadricPtr, 5, 5, 10, 100, 100);
	glTranslatef(0, 0, 10);
	gluDisk(quadricPtr, 0, 5, 100, 1);
	glTranslatef(0, 0, -10);
	gluDisk(quadricPtr, 0, 5, 100, 1);
	glPopMatrix();

	glColor3f(0.85, 0.89, 0.28);
	glPushMatrix(); //right hand finger 1
	glTranslatef(17, -14, 0);
	glRotatef(20, 0, 0, 1);
	glScalef(1, 0.3, 1);
	gluCylinder(quadricPtr, 6, 6, 10, 100, 100);
	glTranslatef(0, 0, 10);
	gluDisk(quadricPtr, 0, 6, 100, 1);
	glTranslatef(0, 0, -10);
	gluDisk(quadricPtr, 0, 6, 100, 1);
	glPopMatrix();

	glPushMatrix(); //right hand finger 2
	glTranslatef(17, -12, 0);
	glRotatef(23, 0, 0, 1);
	glScalef(1, 0.3, 1);
	gluCylinder(quadricPtr, 6, 6, 10, 100, 100);
	glTranslatef(0, 0, 10);
	gluDisk(quadricPtr, 0, 6, 100, 1);
	glTranslatef(0, 0, -10);
	gluDisk(quadricPtr, 0, 6, 100, 1);
	glPopMatrix();

	glPushMatrix(); //right hand finger 3
	glTranslatef(16, -10, 0);
	glRotatef(30, 0, 0, 1);
	glScalef(1, 0.3, 1);
	gluCylinder(quadricPtr, 6, 6, 10, 100, 100);
	glTranslatef(0, 0, 10);
	gluDisk(quadricPtr, 0, 6, 100, 1);
	glTranslatef(0, 0, -10);
	gluDisk(quadricPtr, 0, 6, 100, 1);
	glPopMatrix();

	glPushMatrix(); //left hand finger middle
	glTranslatef(-17, -14, 0);
	glRotatef(-20, 0, 0, 1);
	glScalef(1, 0.3, 1);
	gluCylinder(quadricPtr, 6, 6, 10, 100, 100);
	glTranslatef(0, 0, 10);
	gluDisk(quadricPtr, 0, 6, 100, 1);
	glTranslatef(0, 0, -10);
	gluDisk(quadricPtr, 0, 6, 100, 1);
	glPopMatrix();

	glPushMatrix(); //left hand finger bottom
	glTranslatef(-17, -12, 0);
	glRotatef(-23, 0, 0, 1);
	glScalef(1, 0.3, 1);
	gluCylinder(quadricPtr, 6, 6, 10, 100, 100);
	glTranslatef(0, 0, 10);
	gluDisk(quadricPtr, 0, 6, 100, 1);
	glTranslatef(0, 0, -10);
	gluDisk(quadricPtr, 0, 6, 100, 1);
	glPopMatrix();

	glPushMatrix(); //left hand finger top
	glTranslatef(-16, -10, 0);
	glRotatef(-30, 0, 0, 1);
	glScalef(1, 0.3, 1);
	gluCylinder(quadricPtr, 6, 6, 10, 100, 100);
	glTranslatef(0, 0, 10);
	gluDisk(quadricPtr, 0, 6, 100, 1);
	glTranslatef(0, 0, -10);
	gluDisk(quadricPtr, 0, 6, 100, 1);
	glPopMatrix();

	glColor3f(1, 1, 1);
	glPushMatrix(); //body
	glTranslatef(0, -25, 0);
	glRotatef(-90, 1, 0, 0);
	gluCylinder(quadricPtr, 20, 0, 43, 100, 100);
	glPopMatrix();

	glColor3f(0.91, 0.33, 0.47);
	glLineWidth(40);
	glPushMatrix(); //dress pattern
	glBegin(GL_LINES);
	glVertex3f(0, -5, 11);
	glVertex3f(0, -25, 21);
	glVertex3f(0, -5, -11);
	glVertex3f(0, -25, -21);
	glVertex3f(-9, -5, 6);
	glVertex3f(-17, -25, 11);
	glVertex3f(-9, -5, -6);
	glVertex3f(-17, -25, -11);
	glVertex3f(9, -5, 6);
	glVertex3f(17, -25, 11);
	glVertex3f(9, -5, -6);
	glVertex3f(17, -25, -11);
	glVertex3f(-11, -5, 0);
	glVertex3f(-21, -25, 0);
	glVertex3f(11, -5, 0);
	glVertex3f(21, -25, 0);
	glEnd();
	glPopMatrix();

	glColor3f(0, 0, 0);
	glPushMatrix(); //dress neck tie
	glTranslatef(-5.5, -17, 18);
	glScalef(1, 1, 0.5);
	glRotatef(90, 0, 1, 0);
	gluCylinder(quadricPtr, 3.5, 0, 7.5, 100, 100);
	glPopMatrix();
	glPushMatrix(); //dress neck tie
	glTranslatef(5.5, -17, 18);
	glScalef(1, 1, 0.5);
	glRotatef(-90, 0, 1, 0);
	gluCylinder(quadricPtr, 3.5, 0, 7.5, 100, 100);
	glPopMatrix();

	glColor3f(0.85, 0.89, 0.28);
	glPushMatrix(); //face
	glScalef(0.9, 0.6, 1);
	glTranslatef(0, 5, 0);
	gluSphere(quadricPtr, 27, 100, 100);
	glPopMatrix();

	glColor3f(1, 1, 1);
	glPushMatrix(); //left eyeball
	glTranslatef(-10, 18, 20);
	gluSphere(quadricPtr, 11, 100, 100);
	glPopMatrix();

	glPushMatrix(); //right eye ball
	glTranslatef(10, 18, 20);
	gluSphere(quadricPtr, 11, 100, 100);
	glPopMatrix();

	glColor3f(1, 0.75, 0.8);
	glPushMatrix(); //left blush
	glTranslatef(-16, 0, 19.3);
	glRotatef(22, 1, 0, 0);
	glRotatef(-42.5, 0, 1, 0);
	gluCylinder(quadricPtr, 3, 0, 1, 100, 100);
	glPopMatrix();

	glPushMatrix(); //right blush
	glTranslatef(16, 0, 19.3);
	glRotatef(22, 1, 0, 0);
	glRotatef(45, 0, 1, 0);
	gluCylinder(quadricPtr, 3, 0, 1, 100, 100);
	glPopMatrix();

	glColor3f(0, 0, 0);
	glPushMatrix(); //right eye expression
	glLineWidth(8);
	glBegin(GL_LINE_STRIP);
	glVertex3f(-8.5, 19, 31);
	glVertex3f(-4, 17, 30);
	glVertex3f(-8.5, 15, 31);
	glEnd();
	glPopMatrix();

	glPushMatrix(); //left eye expression
	glTranslatef(6, 18, 30);
	glRotatef(-25, 0, 1, 0);
	gluCylinder(quadricPtr, 3, 0, 1, 100, 100);
	glPopMatrix();

	glPushMatrix(); //mouth
	glLineWidth(10);
	glBegin(GL_LINE_STRIP);
	glVertex3f(-12, -6, 17.5);
	glVertex3f(-9, -8, 17.5);
	glVertex3f(-6, -9, 17);
	glVertex3f(0, -11, 13.5);
	glVertex3f(6, -9, 17);
	glVertex3f(9, -8, 17.5);
	glVertex3f(12, -6, 17.5);
	glEnd();
	glPopMatrix();

	glFlush();
}

void init()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-50.0, 50.0, -50.0, 50.0, -50.0, 50.0);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	GLfloat light_pos[4] = { -50, 10, 100, 1 };
	glLightfv(GL_LIGHT0, GL_POSITION, light_pos);
	glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
	GLfloat mat_specular[4] = { 1, 1, 1, 1 };
	GLfloat mat_shininess = 25;
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialf(GL_FRONT, GL_SHININESS, mat_shininess);
	glEnable(GL_COLOR_MATERIAL);
	glMatrixMode(GL_MODELVIEW);
}

void main(int argc, char** argv) {
	glutInitWindowSize(500, 500);
	glutCreateWindow("Kero Kero Keroppi 3D");
	glutDisplayFunc(mydisplay);

	init();

	glutMainLoop();
}