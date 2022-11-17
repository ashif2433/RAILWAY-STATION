#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>//music
#include <windows.h>
#include <MMSystem.h>
#include <conio.h>

//p = train speed
//s = sun speed
//k = sky speed
//m = moon speed
//r = Sstar
//d = star
//b = bird
float p=0.0,s=0.0,s1=0.0,k=0.0,m=0.0,r=0.0,d=0.0,th,b=0.0, angle = 90.0f;
int i;


void star(int x, int y)
{
 glBegin(GL_POLYGON);
 glColor3ub(255,255,255);
 for(int i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(x+0.31*cos(th),y-d+0.31*sin(th));
 }
 glEnd();
 }

void display(void)
{

glClear (GL_COLOR_BUFFER_BIT);
//glLoadIdentity();


    if(p<=304)
       p=p+.107;
    else
        p=0.0;

//////////////////////////////////////

    if(s<=140)
        s=s+.015;
        //break;
    else
        s=0.0;

/////////////////////////////////////

    if(s1<=167.7)
        s1=s1+.018;
        //break;
    else
        s1=0.0;

/////////////////////////////////////

 if(d<=37.2)
        d=d+0.004;
    else
        d=0.0;

////////////////////////////////////

    if(r<=15020)
        r=r+1.605;
    else
        r=0.0;

////////////////////////////////////

    if(m<=140)
        m=m+.015;
    else
        m=0.0;

///////////////////////////////////

    if(k<=128)
        k=k+.013;
    else
        k=0.0;

///////////////////////////////////

    if(b<=1080)
        b=b+.115;
    else
        b=0.0;

    glutPostRedisplay();

    /*switch(s)
    {
        case 1:
            if(s<=150)
                s=s+.015;
            else
                s=0.0;
            break;

        case 2:
            if(s<=-150)
                s=s-.015;
            else
                s=0.0;
            break;
    }*/


//Blue BK1..............................................................................
 glBegin(GL_POLYGON);
 //glColor3ub (40, 40, 110);
 glColor3ub (0, 0, 0);

 glVertex2f(130.0, 130.0);
 glVertex2f(0.0, 130.0);
 glVertex2f(0.0, 35.0);
 glVertex2f(100.0, 35.0);
 glVertex2f(130.0, 35.0);
 glEnd();


//Blue BK2..............................................................................
 glBegin(GL_POLYGON);
 glColor3ub (40, 40, 110);

 glVertex2f(0.0-s1, 190.0-s1);
 glVertex2f(0.0-s1, 220.0-s1);
 glColor3ub (0, 0, 0);
 glVertex2f(130.0-s1, 220.0-s1);
 glVertex2f(155.0-s1, 165.0-s1);
 //glColor3ub (40, 40, 110);
 glVertex2f(220.0-s1, 105.0-s1);
 glColor3ub (252, 252, 252);/////
 glVertex2f(220.0-s1, 35.0-s1);
 glVertex2f(0.0-s1, 35.0-s1);
 //glColor3ub (40, 40, 110);/////
 //glVertex2f(100.0-s, 35.0-s);
 glEnd();



/*//background-top.......................................................................
 glBegin(GL_QUADS);
 glColor3ub (245, 245, 245);

 glVertex2f(120.0f, 100.0f);
 glVertex2f(0.0f, 100.0f);
 glVertex2f(0.0f, 35.0f);
 glVertex2f(120.0f, 35.0f);
 glEnd();*/


//SUN.................................................................................

/*//Sun BK-1
glBegin(GL_POLYGON);
 glColor3ub(253, 255, 231);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(64.8-s+80*cos(th),72.3-s+65*sin(th));
 }
 glEnd();*/


/*//Sun BK-2
glBegin(GL_POLYGON);
 glColor3ub(255, 255, 216);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(64.8-s+40*cos(th),72.3-s+40*sin(th));
 }
 glEnd();*/


 //Bird........................................................
 glPushMatrix();
 glTranslatef(90.0,43.0,0.0);
 glScalef(.5,.5,0);
 glBegin(GL_POLYGON);
 glColor3ub (23, 23, 23);

 glVertex2f(92.5-b,88.9);
 glVertex2f(92.1-b,89.1);
 glVertex2f(96.0-b,91.0);
 glVertex2f(95.0-b,89.0);
 glVertex2f(95.7-b,89.0);
 glVertex2f(97.1-b,88.5);
 glVertex2f(95.7-b,88.0);
 glVertex2f(95.0-b,88.0);
 glVertex2f(95.0-b,86.0);
 glVertex2f(93.6-b,87.8);
 glVertex2f(92.1-b,87.8);
 glVertex2f(92.1-b,88.0);
 glVertex2f(90.0-b,88.0);
 glVertex2f(90.6-b,88.7);
 glEnd();


glPushMatrix();
glTranslatef(7,6,0);
glBegin(GL_POLYGON);
 glColor3ub (23, 23, 23);

 glVertex2f(92.5-b,83.9);
 glVertex2f(92.1-b,84.1);
 glVertex2f(96.0-b,86.0);
 glVertex2f(95.0-b,84.0);
 glVertex2f(95.7-b,84.0);
 glVertex2f(97.1-b,83.5);
 glVertex2f(95.7-b,83.0);
 glVertex2f(95.0-b,83.0);
 glVertex2f(95.0-b,81.0);
 glVertex2f(93.6-b,82.8);
 glVertex2f(92.1-b,82.8);
 glVertex2f(92.1-b,83.0);
 glVertex2f(90.0-b,83.0);
 glVertex2f(90.6-b,83.7);
 glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(7,-6,0);
glBegin(GL_POLYGON);
 glColor3ub (23, 23, 23);

 glVertex2f(92.5-b,89.9);
 glVertex2f(92.1-b,90.1);
 glVertex2f(96.0-b,92.0);
 glVertex2f(95.0-b,90.0);
 glVertex2f(95.7-b,90.0);
 glVertex2f(97.1-b,89.5);
 glVertex2f(95.7-b,89.0);
 glVertex2f(95.0-b,89.0);
 glVertex2f(95.0-b,87.0);
 glVertex2f(93.6-b,88.8);
 glVertex2f(92.1-b,88.8);
 glVertex2f(92.1-b,89.0);
 glVertex2f(90.0-b,89.0);
 glVertex2f(90.6-b,89.7);
 glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(14,12,0);
glBegin(GL_POLYGON);
 glColor3ub (23, 23, 23);

 glVertex2f(92.5-b,88.9);
 glVertex2f(92.1-b,89.1);
 glVertex2f(96.0-b,91.0);
 glVertex2f(95.0-b,89.0);
 glVertex2f(95.7-b,89.0);
 glVertex2f(97.1-b,88.5);
 glVertex2f(95.7-b,88.0);
 glVertex2f(95.0-b,88.0);
 glVertex2f(95.0-b,86.0);
 glVertex2f(93.6-b,87.8);
 glVertex2f(92.1-b,87.8);
 glVertex2f(92.1-b,88.0);
 glVertex2f(90.0-b,88.0);
 glVertex2f(90.6-b,88.7);
 glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(14,-12,0);
glBegin(GL_POLYGON);
 glColor3ub (23, 23, 23);

 glVertex2f(92.5-b,91.9);
 glVertex2f(92.1-b,92.1);
 glVertex2f(96.0-b,94.0);
 glVertex2f(95.0-b,92.0);
 glVertex2f(95.7-b,92.0);
 glVertex2f(97.1-b,91.5);
 glVertex2f(95.7-b,91.0);
 glVertex2f(95.0-b,91.0);
 glVertex2f(95.0-b,89.0);
 glVertex2f(93.6-b,90.8);
 glVertex2f(92.1-b,90.8);
 glVertex2f(92.1-b,91.0);
 glVertex2f(90.0-b,91.0);
 glVertex2f(90.6-b,91.7);
 glEnd();
glPopMatrix();
 glPopMatrix();



//star...............................................................................................
glPushMatrix();
glTranslatef(0.0,40.0,0.0);

star(50.0f,80.0);
star(50.0f,95.0);
star(40.0f,82.0);
star(30.0f,78.0);
star(29.0f,90.0);
star(20.0f,85.0);
star(10.0f,95.0);
star(5.0f,83.1);
star(60.0f,83.0);
star(66.0f,89.0);
star(76.0f,83.0);
star(86.0f,80.0);
star(96.0f,78.0);
star(106.0f,86.0);
star(116.0f,83.0);
star(90.0f,89.0);
star(80.0f,95.0);
star(110.0f,95.0);
//star(f,f);

//1
 glBegin(GL_POLYGON);
 glColor3ub (255, 255, 255);

 glVertex2f(1.50f, 93.0-d);
 glVertex2f(1.00f, 92.75-d);
 glVertex2f(1.50f, 92.5-d);
 glVertex2f(1.75f, 92.05-d);
 glVertex2f(2.00f, 92.50-d);
 glVertex2f(2.50f, 92.75-d);
 glVertex2f(2.00f, 93.00-d);
 glVertex2f(1.75f, 93.50-d);
 glEnd();

 //2
glBegin(GL_POLYGON);
 glColor3ub (255.0, 255.0, 255.0);

 glVertex2f(101.50f, 93.0-d);
 glVertex2f(101.00f, 92.75-d);
 glVertex2f(101.50f, 92.5-d);
 glVertex2f(101.75f, 92.05-d);
 glVertex2f(102.00f, 92.5-d);
 glVertex2f(102.50f, 92.75-d);
 glVertex2f(102.00f, 93.0-d);
 glVertex2f(101.75f, 93.5-d);
 glEnd();

 //3
glBegin(GL_POLYGON);
 glColor3ub (255.0, 255.0, 255.0);

 glVertex2f(68.50f, 97.0-d);
 glVertex2f(68.00f, 96.75-d);
 glVertex2f(68.50f, 96.5-d);
 glVertex2f(68.75f, 96.05-d);
 glVertex2f(69.00f, 96.5-d);
 glVertex2f(69.50f, 96.75-d);
 glVertex2f(69.00f, 97.0-d);
 glVertex2f(68.75f, 97.5-d);
 glEnd();

 //4
glBegin(GL_POLYGON);
 glColor3ub (255.0, 255.0, 255.0);

 glVertex2f(38.50f, 92.0-d);
 glVertex2f(38.00f, 91.75-d);
 glVertex2f(38.50f, 91.5-d);
 glVertex2f(38.75f, 91.05-d);
 glVertex2f(39.00f, 91.5-d);
 glVertex2f(39.50f, 91.75-d);
 glVertex2f(39.00f, 92.0-d);
 glVertex2f(38.75f, 92.5-d);
 glEnd();

 //5
glBegin(GL_POLYGON);
 glColor3ub (255.0, 255.0, 255.0);

 glVertex2f(58.50f, 92.0-d);
 glVertex2f(58.00f, 91.75-d);
 glVertex2f(58.50f, 91.5-d);
 glVertex2f(58.75f, 91.05-d);
 glVertex2f(59.00f, 91.5-d);
 glVertex2f(59.50f, 91.75-d);
 glVertex2f(59.00f, 92.0-d);
 glVertex2f(58.75f, 92.5-d);
 glEnd();


 //6
 glBegin(GL_POLYGON);
 glColor3ub (255.0, 255.0, 255.0);

 glVertex2f(115.50f, 87.0-d);
 glVertex2f(115.00f, 86.75-d);
 glVertex2f(115.50f, 86.5-d);
 glVertex2f(115.75f, 86.05-d);
 glVertex2f(116.00f, 86.5-d);
 glVertex2f(116.50f, 86.75-d);
 glVertex2f(116.00f, 87.0-d);
 glVertex2f(115.75f, 87.5-d);
 glEnd();

 //7
glBegin(GL_POLYGON);
 glColor3ub (255.0, 255.0, 255.0);

 glVertex2f(45.50f, 87.0-d);
 glVertex2f(45.00f, 86.75-d);
 glVertex2f(45.50f, 86.5-d);
 glVertex2f(45.75f, 86.05-d);
 glVertex2f(46.00f, 86.5-d);
 glVertex2f(46.50f, 86.75-d);
 glVertex2f(46.00f, 87.0-d);
 glVertex2f(45.75f, 87.5-d);
 glEnd();

 //7
glBegin(GL_POLYGON);
 glColor3ub (255.0, 255.0, 255.0);

 glVertex2f(25.50f, 97.0-d);
 glVertex2f(25.00f, 96.75-d);
 glVertex2f(25.50f, 96.5-d);
 glVertex2f(25.75f, 96.05-d);
 glVertex2f(26.00f, 96.5-d);
 glVertex2f(26.50f, 96.75-d);
 glVertex2f(26.00f, 97.0-d);
 glVertex2f(25.75f, 97.5-d);
 glEnd();

  //8
 glBegin(GL_POLYGON);
 glColor3ub (255.0, 255.0, 255.0);

 glVertex2f(35.50f, 97.0-d);
  glVertex2f(35.00f, 96.75-d);
 glVertex2f(35.50f, 96.5-d);
 glVertex2f(35.75f, 96.05-d);
 glVertex2f(36.00f, 96.5-d);
 glVertex2f(36.50f, 96.75-d);
 glVertex2f(36.00f, 97.0-d);
 glVertex2f(35.75f, 97.5-d);
 glEnd();
glPopMatrix();




//Main Sun-1
glBegin(GL_POLYGON);
 glColor3ub(241, 237, 164);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(66.8-s+10*cos(th),73.8-s+10*sin(th));
 }
 glEnd();

//Main Sun-2
glBegin(GL_POLYGON);
 glColor3ub(241, 234, 117);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(66.8-s+8*cos(th),73.8-s+8*sin(th));
 }
 glEnd();

//Main sun-3
glBegin(GL_POLYGON);
 glColor3ub(255, 198, 0);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(66.8-s+5.5*cos(th),73.8-s+5.5*sin(th));
 }
 glEnd();

//Main sun-4
 glBegin(GL_POLYGON);
 glColor3ub(253, 181, 49);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(66.8-s+3.8*cos(th),73.8-s+3.8*sin(th));
 }
 glEnd();



 //Moon.........................................................................

glPushMatrix();
glTranslatef(-141.0,107.0,0.0);
//moon-1
 glBegin(GL_POLYGON);
 glColor3ub(67, 67, 67);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(89.8+m+10*cos(th),88.3-m+10*sin(th));
 }
 glEnd();

 //moon-2
 glBegin(GL_POLYGON);
 glColor3ub(102, 102, 102);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(89.8+m+8*cos(th),88.3-m+8*sin(th));
 }
 glEnd();

 //moon-3
 glBegin(GL_POLYGON);
 glColor3ub(235, 235, 235);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(89.8+m+6*cos(th),88.3-m+6*sin(th));
 }
 glEnd();

 //moon spote................................................................
 //moon spote-1
 glBegin(GL_POLYGON);
 glColor3ub(182, 182, 182);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(93.8+m+1.7*cos(th),89.3-m+1.7*sin(th));
 }
 glEnd();

 //moon spote-2
 glBegin(GL_POLYGON);
 glColor3ub(182, 182, 182);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(88.6+m+1.0*cos(th),83.7-m+1.0*sin(th));
 }
 glEnd();

 //moon spote-3
 glBegin(GL_POLYGON);
 glColor3ub(182, 182, 182);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(85.6+m+1.5*cos(th),87.3-m+1.5*sin(th));
 }
 glEnd();

 //moon spote-4
 glBegin(GL_POLYGON);
 glColor3ub(182, 182, 182);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(90.6+m+0.8*cos(th),87.3-m+0.8*sin(th));
 }
 glEnd();

 //moon spote-5
 glBegin(GL_POLYGON);
 glColor3ub(182, 182, 182);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(87.6+m+0.8*cos(th),92.3-m+0.8*sin(th));
 }
 glEnd();
glPopMatrix();
glPopMatrix();


//Shooting star.............................................................................................
 glPushMatrix();
 glTranslatef(-10000.0,-10000.0,0.0);
 glBegin(GL_POLYGON);
 glColor3ub (255, 255, 255);

 glVertex2f(31.50+r, 73.00+r);
 glVertex2f(31.00+r, 72.75+r);
 glVertex2f(31.50+r, 72.50+r);
 glVertex2f(31.75+r, 72.05+r);
 glVertex2f(22.00+r, 62.50+r);
 glVertex2f(32.45+r, 72.75+r);
 glVertex2f(31.95+r, 73.00+r);
 glVertex2f(31.70+r, 73.50+r);
 glEnd();

 /*glBegin(GL_LINES);
 glColor3ub(255, 255, 255);

 glVertex2f(30.2+r, 72.5+r);
 glVertex2f(24.0+r, 65.8+r);

 glVertex2f(31.5+r, 70.8+r);
 glVertex2f(26.0+r, 65.3+r);
 glEnd();*/
 glPopMatrix();



//background-bottom.....................................................................
 glBegin(GL_QUADS);
 glColor3ub (233, 207, 172);

 glVertex2f(0.0f, 35.0f);
 glVertex2f(120.0f, 35.0f);
 glVertex2f(120.0f, 0.0f);
 glVertex2f(0.0f, 0.0f);
 glEnd();



//SKY....................................................................................
//sky-1
//sky-1.1
 glBegin(GL_POLYGON);
 glColor3ub(200, 200, 199);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(49.8+k+3*cos(th),66.3+3*sin(th));
 }
 glEnd();

//sky-1.2
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(54.2+k+3*cos(th),66.8+3*sin(th));
 }
 glEnd();

//sky-1.3
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(58.2+k+3*cos(th),66.4+3*sin(th));
 }
 glEnd();

//sky-1.4
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(62.2+k+3*cos(th),66.2+3*sin(th));
 }
 glEnd();

//sky-1.5
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(65.2+k+3*cos(th),67.2+3*sin(th));
 }
 glEnd();

//sky-1.6
 glBegin(GL_POLYGON);
 glColor3ub(200, 200, 199);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(52.8+k+3*cos(th),69.3+3*sin(th));
 }
 glEnd();

//sky-1.7
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(56.8+k+3*cos(th),70.3+3*sin(th));
 }
 glEnd();

//sky-1.8
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(60.8+k+3*cos(th),70.3+3*sin(th));
 }
 glEnd();

//sky-1.9
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(58.8+k+3*cos(th),73.3+3*sin(th));
 }
 glEnd();

 /////////////////////////////////////////////////////////////////////////

//ksy-2
//sky-2.1
 glBegin(GL_POLYGON);
 glColor3ub(200, 200, 199);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(92.8+k+3*cos(th),72.3+3*sin(th));
 }
 glEnd();

//sky-2.2
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(96.8+k+3*cos(th),73.3+3*sin(th));
 }
 glEnd();

//sky-2.3
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(100.8+k+3*cos(th),73.3+3*sin(th));
 }
 glEnd();

//sky-2.4
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(98.8+k+3*cos(th),76.3+3*sin(th));
 }
 glEnd();

//sky-2.5
 glBegin(GL_POLYGON);
 glColor3ub(200, 200, 199);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(98.8+k+3*cos(th),72.3+3*sin(th));
 }
 glEnd();

//sky-2.6
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(102.8+k+3*cos(th),73.3+3*sin(th));
 }
 glEnd();

//sky-2.7
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(106.8+k+3*cos(th),73.3+3*sin(th));
 }
 glEnd();

//sky-2.8
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(103.8+k+3*cos(th),76.3+3*sin(th));
 }
 glEnd();

 ///////////////////////////////////////////////////////////

//sky-3
//sky-3.1
 glBegin(GL_POLYGON);
 glColor3ub(200, 200, 199);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(9.8+k+3*cos(th),80.3+3*sin(th));
 }
 glEnd();

//sky-3.2
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(14.2+k+3*cos(th),80.8+3*sin(th));
 }
 glEnd();

//sky-3.3
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(18.2+k+3*cos(th),80.4+3*sin(th));
 }
 glEnd();

//sky-3.4
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(22.2+k+3*cos(th),80.2+3*sin(th));
 }
 glEnd();

//sky-3.5
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(25.2+k+3*cos(th),81.2+3*sin(th));
 }
 glEnd();

//sky-3.6
 glBegin(GL_POLYGON);
 glColor3ub(200, 200, 199);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(12.8+k+3*cos(th),83.3+3*sin(th));
 }
 glEnd();

//sky-3.7
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(16.8+k+3*cos(th),84.3+3*sin(th));
 }
 glEnd();

//sky-3.8
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(20.8+k+3*cos(th),84.3+3*sin(th));
 }
 glEnd();

//sky-3.9
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(18.8+k+3*cos(th),87.3+3*sin(th));
 }
 glEnd();

//sky-3.10
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(28.2+k+3*cos(th),80.4+3*sin(th));
 }
 glEnd();

//sky-3.11
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(32.2+k+3*cos(th),80.2+3*sin(th));
 }
 glEnd();

//sky-3.12
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(35.2+k+3*cos(th),81.2+3*sin(th));
 }
 glEnd();

//sky-3.13
 glBegin(GL_POLYGON);
 glColor3ub(200, 200, 199);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(22.8+k+3*cos(th),83.3+3*sin(th));
 }
 glEnd();

//sky-3.14
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(26.8+k+3*cos(th),84.3+3*sin(th));
 }
 glEnd();

//sky-3.15
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(30.8+k+3*cos(th),84.3+3*sin(th));
 }
 glEnd();

//sky-3.16
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(28.8+k+3*cos(th),87.3+3*sin(th));
 }
 glEnd();

//sky-3.17
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(23.8+k+3*cos(th),88.3+3*sin(th));
 }
 glEnd();

 //////////////////////////////////////////////////////////

//sky-4
//sky-4.1
 glBegin(GL_POLYGON);
 glColor3ub(200, 200, 199);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(70.8+k+3*cos(th),90.3+3*sin(th));
 }
 glEnd();

//sky-4.2
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(75.2+k+3*cos(th),90.8+3*sin(th));
 }
 glEnd();

//sky-4.3
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(79.2+k+3*cos(th),90.4+3*sin(th));
 }
 glEnd();

//sky-4.4
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(83.2+k+3*cos(th),90.2+3*sin(th));
 }
 glEnd();

//sky-4.5
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(86.2+k+3*cos(th),91.2+3*sin(th));
 }
 glEnd();

//sky-4.6
 glBegin(GL_POLYGON);
 glColor3ub(200, 200, 199);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(73.8+k+3*cos(th),93.3+3*sin(th));
 }
 glEnd();

//sky-4.7
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(77.8+k+3*cos(th),94.3+3*sin(th));
 }
 glEnd();

//sky-4.8
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(81.8+k+3*cos(th),94.3+3*sin(th));
 }
 glEnd();

//sky-4.9
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(79.8+k+3*cos(th),97.3+3*sin(th));
 }
 glEnd();

//sky-4.10
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(89.2+k+3*cos(th),90.4+3*sin(th));
 }
 glEnd();

//sky-4.11
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(85.2+k+3*cos(th),94.2+3*sin(th));
 }
 glEnd();

//sky-4.12
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(88.2+k+3*cos(th),94.2+3*sin(th));
 }
 glEnd();

//sky-4.13
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(92.8+k+3*cos(th),92.3+3*sin(th));
 }
 glEnd();


 glPushMatrix();

  glTranslatef(-113.0,0.0,0.0);
 //SKY....................................................................................
//sky-1
//sky-1.1
 glBegin(GL_POLYGON);
 glColor3ub(200, 200, 199);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(49.8+k+3*cos(th),66.3+3*sin(th));
 }
 glEnd();

//sky-1.2
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(54.2+k+3*cos(th),66.8+3*sin(th));
 }
 glEnd();

//sky-1.3
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(58.2+k+3*cos(th),66.4+3*sin(th));
 }
 glEnd();

//sky-1.4
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(62.2+k+3*cos(th),66.2+3*sin(th));
 }
 glEnd();

//sky-1.5
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(65.2+k+3*cos(th),67.2+3*sin(th));
 }
 glEnd();

//sky-1.6
 glBegin(GL_POLYGON);
 glColor3ub(200, 200, 199);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(52.8+k+3*cos(th),69.3+3*sin(th));
 }
 glEnd();

//sky-1.7
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(56.8+k+3*cos(th),70.3+3*sin(th));
 }
 glEnd();

//sky-1.8
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(60.8+k+3*cos(th),70.3+3*sin(th));
 }
 glEnd();

//sky-1.9
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(58.8+k+3*cos(th),73.3+3*sin(th));
 }
 glEnd();

 /////////////////////////////////////////////////////////////////////////

//ksy-2
//sky-2.1
 glBegin(GL_POLYGON);
 glColor3ub(200, 200, 199);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(92.8+k+3*cos(th),72.3+3*sin(th));
 }
 glEnd();

//sky-2.2
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(96.8+k+3*cos(th),73.3+3*sin(th));
 }
 glEnd();

//sky-2.3
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(100.8+k+3*cos(th),73.3+3*sin(th));
 }
 glEnd();

//sky-2.4
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(98.8+k+3*cos(th),76.3+3*sin(th));
 }
 glEnd();

//sky-2.5
 glBegin(GL_POLYGON);
 glColor3ub(200, 200, 199);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(98.8+k+3*cos(th),72.3+3*sin(th));
 }
 glEnd();

//sky-2.6
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(102.8+k+3*cos(th),73.3+3*sin(th));
 }
 glEnd();

//sky-2.7
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(106.8+k+3*cos(th),73.3+3*sin(th));
 }
 glEnd();

//sky-2.8
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(103.8+k+3*cos(th),76.3+3*sin(th));
 }
 glEnd();

 ///////////////////////////////////////////////////////////

//sky-3
//sky-3.1
 glBegin(GL_POLYGON);
 glColor3ub(200, 200, 199);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(9.8+k+3*cos(th),80.3+3*sin(th));
 }
 glEnd();

//sky-3.2
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(14.2+k+3*cos(th),80.8+3*sin(th));
 }
 glEnd();

//sky-3.3
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(18.2+k+3*cos(th),80.4+3*sin(th));
 }
 glEnd();

//sky-3.4
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(22.2+k+3*cos(th),80.2+3*sin(th));
 }
 glEnd();

//sky-3.5
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(25.2+k+3*cos(th),81.2+3*sin(th));
 }
 glEnd();

//sky-3.6
 glBegin(GL_POLYGON);
 glColor3ub(200, 200, 199);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(12.8+k+3*cos(th),83.3+3*sin(th));
 }
 glEnd();

//sky-3.7
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(16.8+k+3*cos(th),84.3+3*sin(th));
 }
 glEnd();

//sky-3.8
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(20.8+k+3*cos(th),84.3+3*sin(th));
 }
 glEnd();

//sky-3.9
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(18.8+k+3*cos(th),87.3+3*sin(th));
 }
 glEnd();

//sky-3.10
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(28.2+k+3*cos(th),80.4+3*sin(th));
 }
 glEnd();

//sky-3.11
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(32.2+k+3*cos(th),80.2+3*sin(th));
 }
 glEnd();

//sky-3.12
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(35.2+k+3*cos(th),81.2+3*sin(th));
 }
 glEnd();

//sky-3.13
 glBegin(GL_POLYGON);
 glColor3ub(200, 200, 199);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(22.8+k+3*cos(th),83.3+3*sin(th));
 }
 glEnd();

//sky-3.14
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(26.8+k+3*cos(th),84.3+3*sin(th));
 }
 glEnd();

//sky-3.15
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(30.8+k+3*cos(th),84.3+3*sin(th));
 }
 glEnd();

//sky-3.16
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(28.8+k+3*cos(th),87.3+3*sin(th));
 }
 glEnd();

//sky-3.17
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(23.8+k+3*cos(th),88.3+3*sin(th));
 }
 glEnd();

 //////////////////////////////////////////////////////////

//sky-4
//sky-4.1
 glBegin(GL_POLYGON);
 glColor3ub(200, 200, 199);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(70.8+k+3*cos(th),90.3+3*sin(th));
 }
 glEnd();

//sky-4.2
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(75.2+k+3*cos(th),90.8+3*sin(th));
 }
 glEnd();

//sky-4.3
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(79.2+k+3*cos(th),90.4+3*sin(th));
 }
 glEnd();

//sky-4.4
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(83.2+k+3*cos(th),90.2+3*sin(th));
 }
 glEnd();

//sky-4.5
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(86.2+k+3*cos(th),91.2+3*sin(th));
 }
 glEnd();

//sky-4.6
 glBegin(GL_POLYGON);
 glColor3ub(200, 200, 199);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(73.8+k+3*cos(th),93.3+3*sin(th));
 }
 glEnd();

//sky-4.7
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(77.8+k+3*cos(th),94.3+3*sin(th));
 }
 glEnd();

//sky-4.8
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(81.8+k+3*cos(th),94.3+3*sin(th));
 }
 glEnd();

//sky-4.9
 glBegin(GL_POLYGON);
 glColor3ub(211, 211, 211);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(79.8+k+3*cos(th),97.3+3*sin(th));
 }
 glEnd();

//sky-4.10
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(89.2+k+3*cos(th),90.4+3*sin(th));
 }
 glEnd();

//sky-4.11
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(85.2+k+3*cos(th),94.2+3*sin(th));
 }
 glEnd();

//sky-4.12
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(88.2+k+3*cos(th),94.2+3*sin(th));
 }
 glEnd();

//sky-4.13
 glBegin(GL_POLYGON);
 glColor3ub(177, 177, 177);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(92.8+k+3*cos(th),92.3+3*sin(th));
 }
 glEnd();

 glPopMatrix();



//Tree...................................................................................
glPushMatrix();
glTranslatef(1.8,0.0,0.0);
//Small leaf-1
glBegin(GL_POLYGON);
 glColor3ub(99, 173, 94);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(27+5.3*cos(th),48.4+1.8*sin(th));
 }
 glEnd();

//Small leaf-2
 glBegin(GL_POLYGON);
 glColor3ub(58, 124, 67);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(26+5.3*cos(th),47.7+1.8*sin(th));
 }
 glEnd();

//Tree main body
 glBegin(GL_POLYGON);
 glColor3ub (114, 66, 20);

 glVertex2f(22.0f,49.0f);
 glVertex2f(21.9f,47.0f);
 glVertex2f(21.6f,46.0f);//16
 glVertex2f(20.7f,45.0f);
 glVertex2f(20.2f,41.0f);
 glVertex2f(20.0f,39.0f);
 glVertex2f(19.9f,37.0f);
 glVertex2f(19.5f,35.0f);
 glVertex2f(19.0f,33.0f);
 glVertex2f(21.0f,33.0f);
 glVertex2f(20.8f,36.0f);
 glVertex2f(21.0f,38.0f);
 glVertex2f(21.0f,39.0f);
 glVertex2f(21.4f,41.0f);
 glVertex2f(22.0f,44.0f);
 glVertex2f(22.8f,47.0f);
 glVertex2f(23.0f,50.0f);
 glVertex2f(22.8f,52.0f);
 glVertex2f(22.5f,54.0f);
 glVertex2f(21.5f,54.0f);
 glVertex2f(22.0f,51.0f);
 glEnd();

//Tree Stalk-1
 glBegin(GL_POLYGON);
 glColor3ub (114, 66, 20);

 glVertex2f(24.9f,52.0f);
 glVertex2f(24.1f,50.9f);
 glVertex2f(23.0f,50.0f);
 glVertex2f(23.0f,49.0f);
 glVertex2f(24.0f,50.0f);
 glVertex2f(24.9f,51.0f);
 glVertex2f(25.6f,52.4f);
 glVertex2f(25.9f,53.1f);
 glVertex2f(26.0f,54.0f);
 glEnd();

//Tree Stalk-2
 glBegin(GL_POLYGON);
 glColor3ub (114, 66, 20);

 glVertex2f(18.0f,52.0f);
 glVertex2f(19.0f,51.0f);
 glVertex2f(20.0f,50.0f);
 glVertex2f(21.0f,49.1f);
 glVertex2f(22.0f,48.6f);
 glVertex2f(22.0f,47.0f);
 glVertex2f(21.0f,48.0f);
 glVertex2f(20.0f,49.0f);
 glVertex2f(19.0f,50.0f);
 glVertex2f(18.0f,51.2f);
 glVertex2f(17.3f,52.0f);
 glVertex2f(17.0f,52.8f);
 glVertex2f(16.4f,54.0f);
 glVertex2f(17.0f,54.0f);
 glVertex2f(17.4f,53.0f);
 glEnd();

//Tree Stalk-3
 glBegin(GL_POLYGON);
 glColor3ub (114, 66, 20);

 glVertex2f(25.4f,45.0f);
 glVertex2f(25.0f,44.5f);
 glVertex2f(24.0f,43.8f);
 glVertex2f(23.0f,43.0f);
 glVertex2f(22.0f,42.1f);
 glVertex2f(21.5f,41.6f);
 glVertex2f(21.4f,40.5f);
 glVertex2f(23.0f,42.05f);
 glVertex2f(24.0f,43.0f);
 glVertex2f(25.0f,44.0f);
 glVertex2f(25.9f,45.0f);
 glVertex2f(26.4f,46.0f);
 glVertex2f(26.0f,46.0f);
 //glVertex2f();
 glEnd();

//Main leaf
 glBegin(GL_POLYGON);
 glColor3ub(58, 124, 67);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(22.8+11*cos(th),57.2+4*sin(th));
 }
 glEnd();

 //////////////////////////////////////////////////////

 glBegin(GL_POLYGON);
 glColor3ub(58, 124, 67);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(28.3+0.8*cos(th),53.9+0.8*sin(th));
 }
 glEnd();

 ///////////////////////////////////////////////////////

 glBegin(GL_POLYGON);
 glColor3ub(58, 124, 67);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(14.6+0.8*cos(th),54.5+0.8*sin(th));
 }
 glEnd();

 ///////////////////////////////////////////////////////

 glBegin(GL_POLYGON);
 glColor3ub(58, 124, 67);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(14.1+0.7*cos(th),55+0.7*sin(th));
 }
 glEnd();

////////////////////////////////////////////////////////

 glBegin(GL_POLYGON);
 glColor3ub(85, 157, 94);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(23.8+16*cos(th),61.3+5*sin(th));
 }
 glEnd();

////////////////////////////////////////////////////////

 glBegin(GL_POLYGON);
 glColor3ub(99, 173, 94);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(23.8+11*cos(th),63.4+6*sin(th));
 }
 glEnd();

//////////////////////////////////////////////////////////

 glBegin(GL_POLYGON);
 glColor3ub(85, 157, 94);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(22.2+11*cos(th),62.4+6*sin(th));
 }
 glEnd();

//////////////////////////////////////////////////////////

 glBegin(GL_POLYGON);
 glColor3ub(85, 157, 94);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(23.8+11*cos(th),58.4+4*sin(th));
 }
 glEnd();
 glPopMatrix();

//Cactus tree-1
 glBegin(GL_POLYGON);
 glColor3ub (0, 121, 0);

 glVertex2f(57.0f, 41.0f);
 glVertex2f(57.3f, 41.5f);
 glVertex2f(58.2f, 41.5f);
 glVertex2f(58.5f, 41.0f);
 glVertex2f(58.5f, 31.0f);
 glVertex2f(58.2f, 30.5f);
 glVertex2f(57.3f, 30.5f);
 glVertex2f(57.0f, 31.0f);
 glEnd();


//Cactus tree-1
 glBegin(GL_POLYGON);
 glColor3ub (0, 121, 0);

 glVertex2f(56.0f, 35.8f);
 glVertex2f(57.0f, 35.5f);
 glVertex2f(57.0f, 34.5f);
 glVertex2f(56.0f, 34.7f);
 glVertex2f(55.3f, 35.0f);
 glVertex2f(55.0f, 36.0f);
 glVertex2f(55.0f, 38.0f);
 glVertex2f(56.0f, 38.0f);
 glEnd();

//Cactus tree-1
 glBegin(GL_POLYGON);
 glColor3ub (0, 121, 0);

 glVertex2f(59.2f, 37.0f);
 glVertex2f(59.4f, 40.0f);
 glVertex2f(60.5f, 40.0f);
 glVertex2f(60.5f, 37.0f);
 glVertex2f(60.0f, 35.5f);
 glVertex2f(58.5f, 34.5f);
 glVertex2f(58.5f, 36.0f);
 glEnd();

//Cactus tree-2
 glBegin(GL_POLYGON);
 glColor3ub (0, 121, 0);

 glVertex2f(66.0f, 44.0f);
 glVertex2f(66.3f, 44.5f);
 glVertex2f(67.2f, 44.5f);
 glVertex2f(67.5f, 44.0f);
 glVertex2f(67.5f, 34.0f);
 glVertex2f(67.2f, 33.5f);
 glVertex2f(66.3f, 33.5f);
 glVertex2f(66.0f, 34.0f);
 glEnd();

//Cactus tree-2
 glBegin(GL_POLYGON);
 glColor3ub (0, 121, 0);
 //glVertex2f(f, f);
 glVertex2f(65.0f, 38.8f);
 glVertex2f(66.0f, 38.5f);
 glVertex2f(66.0f, 37.5f);
 glVertex2f(65.0f, 37.7f);
 glVertex2f(64.3f, 38.0f);
 glVertex2f(64.0f, 39.0f);
 glVertex2f(64.0f, 41.0f);
 glVertex2f(65.0f, 41.0f);
 glEnd();

//Cactus tree-2
 glBegin(GL_POLYGON);
 glColor3ub (0, 121, 0);

 glVertex2f(68.2f, 40.0f);
 glVertex2f(68.4f, 43.0f);
 glVertex2f(69.5f, 43.0f);
 glVertex2f(69.5f, 40.0f);
 glVertex2f(69.0f, 38.5f);
 glVertex2f(67.5f, 37.5f);
 glVertex2f(67.5f, 39.0f);
 glEnd();

//Cactus tree-3
 glBegin(GL_POLYGON);
 glColor3ub (0, 121, 0);

 glVertex2f(99.0f, 41.0f);
 glVertex2f(99.3f, 41.5f);
 glVertex2f(100.2f, 41.5f);
 glVertex2f(100.5f, 41.0f);
 glVertex2f(100.5f, 31.0f);
 glVertex2f(100.2f, 30.5f);
 glVertex2f(99.3f, 30.5f);
 glVertex2f(99.0f, 31.0f);
 glEnd();

//Cactus tree-3
 glBegin(GL_POLYGON);
 glColor3ub (0, 121, 0);

 glVertex2f(98.0f, 35.8f);
 glVertex2f(99.0f, 35.5f);
 glVertex2f(99.0f, 34.5f);
 glVertex2f(98.0f, 34.7f);
 glVertex2f(97.3f, 35.0f);
 glVertex2f(97.0f, 36.0f);
 glVertex2f(97.0f, 38.0f);
 glVertex2f(98.0f, 38.0f);
 glEnd();

//Cactus tree-3
 glBegin(GL_POLYGON);
 glColor3ub (0, 121, 0);

 glVertex2f(101.2f, 37.0f);
 glVertex2f(101.4f, 40.0f);
 glVertex2f(102.5f, 40.0f);
 glVertex2f(102.5f, 37.0f);
 glVertex2f(102.0f, 35.5f);
 glVertex2f(100.5f, 34.5f);
 glVertex2f(100.5f, 36.0f);
 glEnd();


//Cactus tree-4
 glBegin(GL_POLYGON);
 glColor3ub (0, 121, 0);

 glVertex2f(7.0f, 41.0f);
 glVertex2f(7.3f, 41.5f);
 glVertex2f(8.2f, 41.5f);
 glVertex2f(8.5f, 41.0f);
 glVertex2f(8.5f, 31.0f);
 glVertex2f(8.2f, 30.5f);
 glVertex2f(7.3f, 30.5f);
 glVertex2f(7.0f, 31.0f);
 glEnd();


//Cactus tree-4
 glBegin(GL_POLYGON);
 glColor3ub (0, 121, 0);

 glVertex2f(6.0f, 35.8f);
 glVertex2f(7.0f, 35.5f);
 glVertex2f(7.0f, 34.5f);
 glVertex2f(6.0f, 34.7f);
 glVertex2f(5.3f, 35.0f);
 glVertex2f(5.0f, 36.0f);
 glVertex2f(5.0f, 38.0f);
 glVertex2f(6.0f, 38.0f);
 glEnd();

//Cactus tree-4
 glBegin(GL_POLYGON);
 glColor3ub (0, 121, 0);

 glVertex2f(9.2f, 37.0f);
 glVertex2f(9.4f, 40.0f);
 glVertex2f(10.5f, 40.0f);
 glVertex2f(10.5f, 37.0f);
 glVertex2f(10.0f, 35.5f);
 glVertex2f(8.5f, 34.5f);
 glVertex2f(8.5f, 36.0f);
 glEnd();




//Station_HOUSE.....................................................................................
//House ground_flate
 glBegin(GL_POLYGON);
 glColor3ub (139, 89, 52);

 glVertex3f(26.5f, 33.8f, 0.0f);
 glVertex3f(46.5f, 33.8f, 0.0f);
 glVertex3f(48.0f, 31.5f, 0.0f);
 glVertex3f(45.0f, 31.5f, 0.0f);
 glVertex3f(45.0f, 30.5f, 0.0f);
 glVertex3f(24.0f, 30.5f, 0.0f);
 glEnd();

//House ground_border-1
 glBegin(GL_QUADS);
 glColor3ub (64, 37, 20);

 glVertex2f(24.0f, 30.5f);
 glVertex2f(45.0f, 30.5f);
 glVertex2f(45.0f, 29.0f);
 glVertex2f(24.0f, 29.0f);
 glEnd();


//House ground_border-2
 glBegin(GL_QUADS);
 glColor3ub (64, 37, 20);

 glVertex2f(45.0f, 31.5f);
 glVertex2f(48.0f, 31.5f);
 glVertex2f(48.0f, 29.5f);
 glVertex2f(45.0f, 29.5f);
 glEnd();


//House stair-slop
 glBegin(GL_QUADS);
 glColor3ub (162, 106, 66);

 glVertex2f(45.0f, 31.5f);
 glVertex2f(47.2f, 30.5f);
 glVertex2f(48.0f, 29.5f);
 glVertex2f(45.0f, 29.5f);
 glEnd();


//House stair-border
 glBegin(GL_TRIANGLES);
 glColor3ub (64, 37, 20);

 glVertex2f(45.0f, 31.0f);
 glVertex2f(48.0f, 29.5f);
 glVertex2f(45.0f, 29.5f);
 glEnd();

//House Body-1
 glBegin(GL_POLYGON);
 glColor3ub (103, 64, 36);

 glVertex2f(26.5f, 41.0f);
 glVertex2f(29.7f, 41.0f);
 glVertex2f(30.0f, 38.0f);
 glVertex2f(30.0f, 33.0f);
 glVertex2f(26.5f, 33.0f);
 glEnd();


//House Body-1_window
 glBegin(GL_QUADS);
 glColor3ub (239, 253, 95);

 glVertex2f(27.2f, 39.5f);
 glVertex2f(29.0f, 39.5f);
 glVertex2f(29.0f, 36.0f);
 glVertex2f(27.2f, 36.0f);
 glEnd();


//House Body-1_window grill
  glBegin(GL_LINES);
  glColor3ub (67, 40, 21);

  glVertex2f(27.2f, 39.2f);
  glVertex2f(29.0f, 39.2f);

  glVertex2f(27.2f, 38.9f);
  glVertex2f(29.0f, 38.9f);

  glVertex2f(27.2f, 38.5f);
  glVertex2f(29.0f, 38.5f);

//...........

  glVertex2f(27.5f, 39.5f);
  glVertex2f(27.5f, 38.5f);

  glVertex2f(28.1f, 39.5f);
  glVertex2f(28.1f, 38.5f);

  glVertex2f(28.7f, 39.5f);
  glVertex2f(28.7f, 38.5f);

  glEnd();


//House Body-2
 glBegin(GL_QUADS);
 glColor3ub (103, 55, 36);

 glVertex2f(30.0f, 38.0f);
 glVertex2f(38.4f, 38.0f);
 glVertex2f(38.4f, 32.0f);
 glVertex2f(30.0f, 32.0f);
 glEnd();


//House Body-2_window(1)
 glBegin(GL_QUADS);
 glColor3ub(239, 253, 95);

 glVertex2f(30.5f, 38.0f);
 glVertex2f(32.4f, 38.0f);
 glVertex2f(32.4f, 34.5f);
 glVertex2f(30.5f, 34.5f);
 glEnd();

//House Body-2_window(2)
 glBegin(GL_QUADS);
 glColor3ub (239, 253, 95);

 glVertex2f(36.0f, 38.0f);
 glVertex2f(37.95f, 38.0f);
 glVertex2f(37.95f, 34.5f);
 glVertex2f(36.0f, 34.5f);
 glEnd();

//House Body-2_window(3)
 glBegin(GL_QUADS);
 glColor3ub (239, 253, 95);

 glVertex2f(32.85f, 38.0f);
 glVertex2f(35.55f, 38.0f);
 glVertex2f(35.55f, 34.5f);
 glVertex2f(32.85f, 34.5f);
 glEnd();


//House Body-3
 glBegin(GL_POLYGON);
 glColor3ub (103, 64, 36);

 glVertex2f(38.8f, 41.0f);
 glVertex2f(41.8f, 41.0f);
 glVertex2f(41.8f, 33.0f);
 glVertex2f(38.4f, 33.0f);
 glVertex2f(38.4f, 38.0f);
 glEnd();


//House Body-3_window
 glBegin(GL_QUADS);
 glColor3ub (239, 253, 95);

 glVertex2f(39.2f, 39.5f);
 glVertex2f(41.0f, 39.5f);
 glVertex2f(41.0f, 36.0f);
 glVertex2f(39.2f, 36.0f);
 glEnd();


//House Body-3_window grill
  glBegin(GL_LINES);
  glColor3ub (67, 40, 21);

  glVertex2f(39.2f, 39.2f);
  glVertex2f(41.0f, 39.2f);

  glVertex2f(39.2f, 38.9f);
  glVertex2f(41.0f, 38.9f);


  glVertex2f(39.2f, 38.5f);
  glVertex2f(41.0f, 38.5f);

  //...........

  glVertex2f(39.5f, 39.5f);
  glVertex2f(39.5f, 38.5f);

  glVertex2f(40.1f, 39.5f);
  glVertex2f(40.1f, 38.5f);

  glVertex2f(40.7f, 39.5f);
  glVertex2f(40.7f, 38.5f);

  glEnd();

//House Side Roof
 glBegin(GL_QUADS);
 glColor3ub (140, 140, 140);

 glVertex2f(41.0f, 44.5f);
 glVertex2f(47.0f, 44.5f);
 glVertex2f(48.4f, 40.0f);
 glVertex2f(41.8f, 40.0f);
 glEnd();


 //House Side Roof_stand-1
 glBegin(GL_QUADS);
 glColor3ub (66, 36, 19);

 glVertex2f(45.0f, 40.0f);
 glVertex2f(45.8f, 40.0f);
 glVertex2f(45.8f, 33.0f);
 glVertex2f(45.0f, 33.0f);
 glEnd();


 //House Side Roof_stand-2
 glBegin(GL_QUADS);
 glColor3ub (66, 36, 19);

 glVertex2f(46.8f, 40.0f);
 glVertex2f(47.6f, 40.0f);
 glVertex2f(47.6f, 32.0f);
 glVertex2f(46.8f, 32.0f);
 glEnd();



//House Main Roof
 glBegin(GL_POLYGON);
 glColor3ub (120, 120, 120);

 glVertex2f(28.0f, 48.0f);
 glVertex2f(40.5f, 48.0f);
 glVertex2f(42.5f, 41.0f);
 glVertex2f(39.0f, 41.0f);
 glVertex2f(38.4f, 38.0f);
 glVertex2f(30.0f, 38.0f);
 glVertex2f(29.7f, 41.0f);
 glVertex2f(26.0f, 41.0f);
 glEnd();

//station roof board
 glBegin(GL_QUADS);
 glColor3ub (81, 48, 30);

 glVertex2f(29.4f, 45.5f);
 glVertex2f(39.1f, 45.5f);
 glVertex2f(38.7f, 42.5f);
 glVertex2f(29.7f, 42.5f);
 glEnd();

 //station roof board_gold
 glBegin(GL_QUADS);
 glColor3ub (246, 147, 30);

 glVertex2f(39.1f, 46.0f);
 glVertex2f(29.4f, 46.0f);
 glVertex2f(29.4f, 45.5f);
 glVertex2f(39.1f, 45.5f);
 glEnd();

//Board text.....
  glColor3ub (255, 255, 255);
        glRasterPos2f(31.8, 43.75); //define position on the screen
        char *string = "STATION";

      while(*string){
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, *string++);
      }


//House brance......
 glBegin(GL_QUADS);
 glColor3ub (236, 169, 86);

 glVertex2f(41.8f, 35.0f);
 glVertex2f(43.0f, 35.0f);
 glVertex2f(44.0f, 34.0f);
 glVertex2f(41.8f, 34.0f);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub (236, 169, 86);

 glVertex2f(41.8f, 36.5f);
 glVertex2f(43.3f, 36.5f);
 glVertex2f(43.3f, 36.2f);
 glVertex2f(41.8f, 36.2f);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub (236, 169, 86);

 glVertex2f(43.0f, 36.2f);
 glVertex2f(43.0f, 35.0f);
 glVertex2f(42.8f, 35.0f);
 glVertex2f(42.8f, 36.2f);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub (236, 169, 86);

 glVertex2f(43.0f, 36.2f);
 glVertex2f(43.0f, 35.0f);
 glVertex2f(42.8f, 35.0f);
 glVertex2f(42.8f, 36.2f);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub (236, 169, 86);

 glVertex2f(42.5f, 36.2f);
 glVertex2f(42.4f, 36.2f);
 glVertex2f(42.4f, 35.0f);
 glVertex2f(42.5f, 35.0f);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub (236, 169, 86);

 glVertex2f(42.2f, 36.2f);
 glVertex2f(42.0f, 36.2f);
 glVertex2f(42.0f, 35.0f);
 glVertex2f(42.2f, 35.0f);
 glEnd();


//Lamp..................................................................................

//Lamp light night shadow
glPushMatrix();
//glRotatef(angle, 1.0f, 0.0f, 0.0f);
 glBegin(GL_QUADS);
 glColor3ub (255, 254, 200);

 glVertex2f(12.5, 29.5f);
 glVertex2f(21.5, 29.5f);
 glVertex2f(18.0, 48.0f);
 glVertex2f(16.0, 48.0f);
 glEnd();
 glPopMatrix();


//Lamp_bottom
 glBegin(GL_POLYGON);
 glColor3ub (32, 52, 99);

 glVertex2f(14.5f, 29.5f);
 glVertex2f(15.0f, 30.0f);
 glVertex2f(19.0f, 30.0f);
 glVertex2f(19.5f, 29.5f);
 glVertex2f(19.0f, 29.0f);
 glVertex2f(15.0f, 29.0f);
 glEnd();

//Lamp_2nd bottom
 glBegin(GL_QUADS);
 glColor3ub (62, 85, 126);

 glVertex2f(15.0f, 30.0f);
 glVertex2f(16.0f, 32.0f);
 glVertex2f(18.0f, 32.0f);
 glVertex2f(19.0f, 30.0f);
 glEnd();

//Lamp_3rd bottom
 glBegin(GL_QUADS);
 glColor3ub (62, 85, 126);

 glVertex2f(18.0f, 34.0f);
 glVertex2f(16.0f, 34.0f);
 glVertex2f(16.0f, 32.0f);
 glVertex2f(18.0f, 32.0f);
 glEnd();

//Lamp_stand
 glBegin(GL_QUADS);
 glColor3ub (31, 49, 98);

 glVertex2f(16.5f, 34.0f);
 glVertex2f(17.4f, 34.0f);
 glVertex2f(17.4f, 44.0f);
 glVertex2f(16.5f, 44.0f);
 glEnd();

//Lamp_stand_middle
 glBegin(GL_QUADS);
 glColor3ub (31, 49, 98);

 glVertex2f(16.2f, 39.0f);
 glVertex2f(17.7f, 39.0f);
 glVertex2f(17.7f, 38.5f);
 glVertex2f(16.2f, 38.5f);
 glEnd();



//Lamp_top-1
 glBegin(GL_QUADS);
 glColor3ub (61, 86, 128);

 glVertex2f(16.1f, 44.5f);
 glVertex2f(17.9f, 44.5f);
 glVertex2f(17.9f, 44.0f);
 glVertex2f(16.1f, 44.0f);
 glEnd();

//Lamp_top-2
 glBegin(GL_QUADS);
 glColor3ub (34, 53, 109);

 glVertex2f(16.0f, 45.0f);
 glVertex2f(18.0f, 45.0f);
 glVertex2f(18.0f, 44.5f);
 glVertex2f(16.0f, 44.5f);
 glEnd();

//Lamp_top-3
 glBegin(GL_QUADS);
 glColor3ub (30, 51, 103);

 glVertex2f(16.5f, 45.0f);
 glVertex2f(17.5f, 45.0f);
 glVertex2f(18.5f, 48.0f);
 glVertex2f(15.5f, 48.0f);
 glEnd();

//Lamp_top-4
 glBegin(GL_QUADS);
 glColor3ub (101, 121, 167);

 glVertex2f(15.0f, 48.0f);
 glVertex2f(19.0f, 48.0f);
 glVertex2f(19.0f, 48.5f);
 glVertex2f(15.0f, 48.5f);
 glEnd();

//Lamp_top-5
 glBegin(GL_QUADS);
 glColor3ub (101, 121, 167);

 glVertex2f(16.0f, 48.5f);
 glVertex2f(18.0f, 48.5f);
 glVertex2f(18.0f, 49.0f);
 glVertex2f(16.0f, 49.0f);
 glEnd();

//Lamp_top-6
 glBegin(GL_QUADS);
 glColor3ub (53, 73, 110);

 glVertex2f(16.7f, 49.0f);
 glVertex2f(17.3f, 49.0f);
 glVertex2f(17.3f, 49.5f);
 glVertex2f(16.7f, 49.5f);
 glEnd();


//Lamp_top glass-1
 glBegin(GL_QUADS);
 glColor3ub (239, 253, 95);

 glVertex2f(16.7f, 45.6f);
 glVertex2f(17.0f, 45.6f);
 glVertex2f(17.0f, 47.6f);
 glVertex2f(16.0f, 47.6f);
 glEnd();

//Lamp_top glass-2
 glBegin(GL_QUADS);
 glColor3ub (239, 253, 95);

 glVertex2f(17.3f, 45.6f);
 glVertex2f(17.0f, 45.6f);
 glVertex2f(17.0f, 47.6f);
 glVertex2f(18.0f, 47.6f);
 glEnd();

//glass middle
 glBegin(GL_QUADS);
 glColor3ub (53, 73, 110);

 glVertex2f(16.85f, 45.0f);
 glVertex2f(17.15f, 45.0f);
 glVertex2f(17.15f, 48.0f);
 glVertex2f(16.85f, 48.0f);
 glEnd();

// TRAIN TRACK.....................................................................................
//Train track-wood for 1st lane
//-1
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(1.0f, 28.3f);
 glVertex2f(3.0f, 28.3f);
 glVertex2f(-3.5f, 21.7f);
 glVertex2f(-4.5f, 21.7f);
 glEnd();

//0
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(3.5f, 28.3f);
 glVertex2f(5.5f, 28.3f);
 glVertex2f(-0.5f, 21.7f);
 glVertex2f(-2.0f, 21.7f);
 glEnd();

 //1
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(6.0f, 28.3f);
 glVertex2f(7.5f, 28.3f);
 glVertex2f(2.0f, 21.7f);
 glVertex2f(0.5f, 21.7f);
 glEnd();

 //2
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(8.5f, 28.3f);
 glVertex2f(10.0f, 28.3f);
 glVertex2f(4.5f, 21.7f);
 glVertex2f(3.0f, 21.7f);
 glEnd();

//3
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(11.0f, 28.3f);
 glVertex2f(12.5f, 28.3f);
 glVertex2f(7.0f, 21.7f);
 glVertex2f(5.5f, 21.7f);
 glEnd();

//4
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(13.5f, 28.3f);
 glVertex2f(15.0f, 28.3f);
 glVertex2f(9.5f, 21.7f);
 glVertex2f(8.0f, 21.7f);
 glEnd();

//5
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(16.0f, 28.3f);
 glVertex2f(17.5f, 28.3f);
 glVertex2f(12.0f, 21.7f);
 glVertex2f(10.5f, 21.7f);
 glEnd();

 //6
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(18.5f, 28.3f);
 glVertex2f(20.0f, 28.3f);
 glVertex2f(14.5f, 21.7f);
 glVertex2f(13.0f, 21.7f);
 glEnd();

 //7
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(21.0f, 28.3f);
 glVertex2f(22.5f, 28.3f);
 glVertex2f(17.0f, 21.7f);
 glVertex2f(15.5f, 21.7f);
 glEnd();

 //8
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(23.5f, 28.3f);
 glVertex2f(25.0f, 28.3f);
 glVertex2f(19.5f, 21.7f);
 glVertex2f(18.0f, 21.7f);
 glEnd();

 //9
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(26.0f, 28.3f);
 glVertex2f(27.5f, 28.3f);
 glVertex2f(22.0f, 21.7f);
 glVertex2f(20.5f, 21.7f);
 glEnd();

 //10
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(28.5f, 28.3f);
 glVertex2f(30.0f, 28.3f);
 glVertex2f(24.5f, 21.7f);
 glVertex2f(23.0f, 21.7f);
 glEnd();

 //11
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(31.0f, 28.3f);
 glVertex2f(32.5f, 28.3f);
 glVertex2f(27.0f, 21.7f);
 glVertex2f(25.5f, 21.7f);
 glEnd();

 //12
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(33.5f, 28.3f);
 glVertex2f(35.0f, 28.3f);
 glVertex2f(29.5f, 21.7f);
 glVertex2f(28.0f, 21.7f);
 glEnd();

 //13
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(36.0f, 28.3f);
 glVertex2f(37.5f, 28.3f);
 glVertex2f(32.0f, 21.7f);
 glVertex2f(30.5f, 21.7f);
 glEnd();

 //14
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(38.5f, 28.3f);
 glVertex2f(40.0f, 28.3f);
 glVertex2f(34.5f, 21.7f);
 glVertex2f(33.0f, 21.7f);
 glEnd();

 //15
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(41.0f, 28.3f);
 glVertex2f(42.5f, 28.3f);
 glVertex2f(37.0f, 21.7f);
 glVertex2f(35.5f, 21.7f);
 glEnd();

 //16
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(43.5f, 28.3f);
 glVertex2f(45.0f, 28.3f);
 glVertex2f(39.5f, 21.7f);
 glVertex2f(38.0f, 21.7f);
 glEnd();

 //17
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(46.0f, 28.3f);
 glVertex2f(47.5f, 28.3f);
 glVertex2f(42.0f, 21.7f);
 glVertex2f(40.5f, 21.7f);
 glEnd();

 //18
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(48.5f, 28.3f);
 glVertex2f(50.0f, 28.3f);
 glVertex2f(44.5f, 21.7f);
 glVertex2f(43.0f, 21.7f);
 glEnd();

 //19
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(51.0f, 28.3f);
 glVertex2f(52.5f, 28.3f);
 glVertex2f(47.0f, 21.7f);
 glVertex2f(45.5f, 21.7f);
 glEnd();

 //20
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(53.5f, 28.3f);
 glVertex2f(55.0f, 28.3f);
 glVertex2f(49.5f, 21.7f);
 glVertex2f(48.0f, 21.7f);
 glEnd();

 //21
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(56.0f, 28.3f);
 glVertex2f(57.5f, 28.3f);
 glVertex2f(52.0f, 21.7f);
 glVertex2f(50.5f, 21.7f);
 glEnd();

 //22
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(58.5f, 28.3f);
 glVertex2f(60.0f, 28.3f);
 glVertex2f(54.5f, 21.7f);
 glVertex2f(53.0f, 21.7f);
 glEnd();

 //23
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(61.0f, 28.3f);
 glVertex2f(62.5f, 28.3f);
 glVertex2f(57.0f, 21.7f);
 glVertex2f(55.5f, 21.7f);
 glEnd();

 //24
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(63.5f, 28.3f);
 glVertex2f(65.0f, 28.3f);
 glVertex2f(59.5f, 21.7f);
 glVertex2f(58.0f, 21.7f);
 glEnd();

 //25
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(66.0f, 28.3f);
 glVertex2f(67.5f, 28.3f);
 glVertex2f(62.0f, 21.7f);
 glVertex2f(60.5f, 21.7f);
 glEnd();

 //26
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(68.5f, 28.3f);
 glVertex2f(70.0f, 28.3f);
 glVertex2f(64.5f, 21.7f);
 glVertex2f(63.0f, 21.7f);
 glEnd();

 //27
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(71.0f, 28.3f);
 glVertex2f(72.5f, 28.3f);
 glVertex2f(67.0f, 21.7f);
 glVertex2f(65.5f, 21.7f);
 glEnd();

 //28
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(73.5f, 28.3f);
 glVertex2f(75.0f, 28.3f);
 glVertex2f(69.5f, 21.7f);
 glVertex2f(68.0f, 21.7f);
 glEnd();

 //29
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(76.0f, 28.3f);
 glVertex2f(77.5f, 28.3f);
 glVertex2f(72.0f, 21.7f);
 glVertex2f(70.5f, 21.7f);
 glEnd();

 //30
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(78.5f, 28.3f);
 glVertex2f(80.0f, 28.3f);
 glVertex2f(74.5f, 21.7f);
 glVertex2f(73.0f, 21.7f);
 glEnd();

 //31
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(81.0f, 28.3f);
 glVertex2f(82.5f, 28.3f);
 glVertex2f(77.0f, 21.7f);
 glVertex2f(75.5f, 21.7f);
 glEnd();

 //32
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(83.5f, 28.3f);
 glVertex2f(85.0f, 28.3f);
 glVertex2f(79.5f, 21.7f);
 glVertex2f(78.0f, 21.7f);
 glEnd();

 //33
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(86.0f, 28.3f);
 glVertex2f(87.5f, 28.3f);
 glVertex2f(82.0f, 21.7f);
 glVertex2f(80.5f, 21.7f);
 glEnd();

 //34
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(88.5f, 28.3f);
 glVertex2f(90.0f, 28.3f);
 glVertex2f(84.5f, 21.7f);
 glVertex2f(83.0f, 21.7f);
 glEnd();

 //35
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(91.0f, 28.3f);
 glVertex2f(92.5f, 28.3f);
 glVertex2f(87.0f, 21.7f);
 glVertex2f(85.5f, 21.7f);
 glEnd();

 //36
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(93.5f, 28.3f);
 glVertex2f(95.0f, 28.3f);
 glVertex2f(89.5f, 21.7f);
 glVertex2f(88.0f, 21.7f);
 glEnd();

 //37
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(96.0f, 28.3f);
 glVertex2f(97.5f, 28.3f);
 glVertex2f(92.0f, 21.7f);
 glVertex2f(90.5f, 21.7f);
 glEnd();

 //38
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(98.5f, 28.3f);
 glVertex2f(100.0f, 28.3f);
 glVertex2f(94.5f, 21.7f);
 glVertex2f(93.0f, 21.7f);
 glEnd();

 //39
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(101.0f, 28.3f);
 glVertex2f(102.5f, 28.3f);
 glVertex2f(97.0f, 21.7f);
 glVertex2f(95.5f, 21.7f);
 glEnd();

 //40
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(103.5f, 28.3f);
 glVertex2f(105.0f, 28.3f);
 glVertex2f(99.5f, 21.7f);
 glVertex2f(98.0f, 21.7f);
 glEnd();

 //41
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(106.0f, 28.3f);
 glVertex2f(107.5f, 28.3f);
 glVertex2f(102.0f, 21.7f);
 glVertex2f(100.5f, 21.7f);
 glEnd();

 //42
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(108.5f, 28.3f);
 glVertex2f(110.0f, 28.3f);
 glVertex2f(104.5f, 21.7f);
 glVertex2f(103.0f, 21.7f);
 glEnd();

 //43
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(111.0f, 28.3f);
 glVertex2f(112.5f, 28.3f);
 glVertex2f(107.0f, 21.7f);
 glVertex2f(105.5f, 21.7f);
 glEnd();

 //44
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(113.5f, 28.3f);
 glVertex2f(115.0f, 28.3f);
 glVertex2f(109.5f, 21.7f);
 glVertex2f(108.0f, 21.7f);
 glEnd();

 //45
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(116.0f, 28.3f);
 glVertex2f(117.5f, 28.3f);
 glVertex2f(112.0f, 21.7f);
 glVertex2f(110.5f, 21.7f);
 glEnd();

 //46
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(118.5f, 28.3f);
 glVertex2f(120.0f, 28.3f);
 glVertex2f(114.5f, 21.7f);
 glVertex2f(113.0f, 21.7f);
 glEnd();

 //47
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(121.0f, 28.3f);
 glVertex2f(122.5f, 28.3f);
 glVertex2f(117.0f, 21.7f);
 glVertex2f(115.5f, 21.7f);
 glEnd();

 //47
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(123.5f, 28.3f);
 glVertex2f(125.0f, 28.3f);
 glVertex2f(119.5f, 21.7f);
 glVertex2f(118.0f, 21.7f);
 glEnd();


//1st Train track line-1
 glBegin(GL_QUADS);
 glColor3ub (161, 162, 167);

 glVertex2f(0.0f, 27.0f);
 glVertex2f(120.0f, 27.0f);
 glVertex2f(120.0f, 26.2f);
 glVertex2f(0.0f, 26.2f);
 glEnd();

//1st Train track line-2
 glBegin(GL_QUADS);
 glColor3ub (161, 162, 167);

 glVertex2f(0.0f, 24.2f);
 glVertex2f(120.0f, 24.2f);
 glVertex2f(120.0f, 23.4f);
 glVertex2f(0.0f, 23.4f);
 glEnd();


//Train track-wood for 2nd
//-1
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(1.0f, 18.3f);
 glVertex2f(3.0f, 18.3f);
 glVertex2f(-3.5f, 11.7f);
 glVertex2f(-4.5f, 11.7f);
 glEnd();

//0
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(3.5f, 18.3f);
 glVertex2f(5.5f, 18.3f);
 glVertex2f(-0.5f, 11.7f);
 glVertex2f(-2.0f, 11.7f);
 glEnd();

 //1
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(6.0f, 18.3f);
 glVertex2f(7.5f, 18.3f);
 glVertex2f(2.0f, 11.7f);
 glVertex2f(0.5f, 11.7f);
 glEnd();

 //2
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(8.5f, 18.3f);
 glVertex2f(10.0f, 18.3f);
 glVertex2f(4.5f, 11.7f);
 glVertex2f(3.0f, 11.7f);
 glEnd();

//3
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(11.0f, 18.3f);
 glVertex2f(12.5f, 18.3f);
 glVertex2f(7.0f, 11.7f);
 glVertex2f(5.5f, 11.7f);
 glEnd();

//4
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(13.5f, 18.3f);
 glVertex2f(15.0f, 18.3f);
 glVertex2f(9.5f, 11.7f);
 glVertex2f(8.0f, 11.7f);
 glEnd();

//5
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(16.0f, 18.3f);
 glVertex2f(17.5f, 18.3f);
 glVertex2f(12.0f, 11.7f);
 glVertex2f(10.5f, 11.7f);
 glEnd();

 //6
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(18.5f, 18.3f);
 glVertex2f(20.0f, 18.3f);
 glVertex2f(14.5f, 11.7f);
 glVertex2f(13.0f, 11.7f);
 glEnd();

 //7
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(21.0f, 18.3f);
 glVertex2f(22.5f, 18.3f);
 glVertex2f(17.0f, 11.7f);
 glVertex2f(15.5f, 11.7f);
 glEnd();

 //8
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(23.5f, 18.3f);
 glVertex2f(25.0f, 18.3f);
 glVertex2f(19.5f, 11.7f);
 glVertex2f(18.0f, 11.7f);
 glEnd();

 //9
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(26.0f, 18.3f);
 glVertex2f(27.5f, 18.3f);
 glVertex2f(22.0f, 11.7f);
 glVertex2f(20.5f, 11.7f);
 glEnd();

 //10
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(28.5f, 18.3f);
 glVertex2f(30.0f, 18.3f);
 glVertex2f(24.5f, 11.7f);
 glVertex2f(23.0f, 11.7f);
 glEnd();

 //11
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);
 //glVertex2f(f, f);
 glVertex2f(31.0f, 18.3f);
 glVertex2f(32.5f, 18.3f);
 glVertex2f(27.0f, 11.7f);
 glVertex2f(25.5f, 11.7f);
 glEnd();

 //12
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(33.5f, 18.3f);
 glVertex2f(35.0f, 18.3f);
 glVertex2f(29.5f, 11.7f);
 glVertex2f(28.0f, 11.7f);
 glEnd();

 //13
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(36.0f, 18.3f);
 glVertex2f(37.5f, 18.3f);
 glVertex2f(32.0f, 11.7f);
 glVertex2f(30.5f, 11.7f);
 glEnd();

 //14
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(38.5f, 18.3f);
 glVertex2f(40.0f, 18.3f);
 glVertex2f(34.5f, 11.7f);
 glVertex2f(33.0f, 11.7f);
 glEnd();

 //15
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(41.0f, 18.3f);
 glVertex2f(42.5f, 18.3f);
 glVertex2f(37.0f, 11.7f);
 glVertex2f(35.5f, 11.7f);
 glEnd();

 //16
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(43.5f, 18.3f);
 glVertex2f(45.0f, 18.3f);
 glVertex2f(39.5f, 11.7f);
 glVertex2f(38.0f, 11.7f);
 glEnd();

 //17
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(46.0f, 18.3f);
 glVertex2f(47.5f, 18.3f);
 glVertex2f(42.0f, 11.7f);
 glVertex2f(40.5f, 11.7f);
 glEnd();

 //18
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(48.5f, 18.3f);
 glVertex2f(50.0f, 18.3f);
 glVertex2f(44.5f, 11.7f);
 glVertex2f(43.0f, 11.7f);
 glEnd();

 //19
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(51.0f, 18.3f);
 glVertex2f(52.5f, 18.3f);
 glVertex2f(47.0f, 11.7f);
 glVertex2f(45.5f, 11.7f);
 glEnd();

 //20
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(53.5f, 18.3f);
 glVertex2f(55.0f, 18.3f);
 glVertex2f(49.5f, 11.7f);
 glVertex2f(48.0f, 11.7f);
 glEnd();

 //21
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(56.0f, 18.3f);
 glVertex2f(57.5f, 18.3f);
 glVertex2f(52.0f, 11.7f);
 glVertex2f(50.5f, 11.7f);
 glEnd();

 //22
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(58.5f, 18.3f);
 glVertex2f(60.0f, 18.3f);
 glVertex2f(54.5f, 11.7f);
 glVertex2f(53.0f, 11.7f);
 glEnd();

 //23
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(61.0f, 18.3f);
 glVertex2f(62.5f, 18.3f);
 glVertex2f(57.0f, 11.7f);
 glVertex2f(55.5f, 11.7f);
 glEnd();

 //24
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(63.5f, 18.3f);
 glVertex2f(65.0f, 18.3f);
 glVertex2f(59.5f, 11.7f);
 glVertex2f(58.0f, 11.7f);
 glEnd();

 //25
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(66.0f, 18.3f);
 glVertex2f(67.5f, 18.3f);
 glVertex2f(62.0f, 11.7f);
 glVertex2f(60.5f, 11.7f);
 glEnd();

 //26
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(68.5f, 18.3f);
 glVertex2f(70.0f, 18.3f);
 glVertex2f(64.5f, 11.7f);
 glVertex2f(63.0f, 11.7f);
 glEnd();

 //27
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(71.0f, 18.3f);
 glVertex2f(72.5f, 18.3f);
 glVertex2f(67.0f, 11.7f);
 glVertex2f(65.5f, 11.7f);
 glEnd();

 //28
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(73.5f, 18.3f);
 glVertex2f(75.0f, 18.3f);
 glVertex2f(69.5f, 11.7f);
 glVertex2f(68.0f, 11.7f);
 glEnd();

 //29
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(76.0f, 18.3f);
 glVertex2f(77.5f, 18.3f);
 glVertex2f(72.0f, 11.7f);
 glVertex2f(70.5f, 11.7f);
 glEnd();

 //30
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(78.5f, 18.3f);
 glVertex2f(80.0f, 18.3f);
 glVertex2f(74.5f, 11.7f);
 glVertex2f(73.0f, 11.7f);
 glEnd();

 //31
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(81.0f, 18.3f);
 glVertex2f(82.5f, 18.3f);
 glVertex2f(77.0f, 11.7f);
 glVertex2f(75.5f, 11.7f);
 glEnd();

 //32
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(83.5f, 18.3f);
 glVertex2f(85.0f, 18.3f);
 glVertex2f(79.5f, 11.7f);
 glVertex2f(78.0f, 11.7f);
 glEnd();

 //33
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(86.0f, 18.3f);
 glVertex2f(87.5f, 18.3f);
 glVertex2f(82.0f, 11.7f);
 glVertex2f(80.5f, 11.7f);
 glEnd();

 //34
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(88.5f, 18.3f);
 glVertex2f(90.0f, 18.3f);
 glVertex2f(84.5f, 11.7f);
 glVertex2f(83.0f, 11.7f);
 glEnd();

 //35
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(91.0f, 18.3f);
 glVertex2f(92.5f, 18.3f);
 glVertex2f(87.0f, 11.7f);
 glVertex2f(85.5f, 11.7f);
 glEnd();

 //36
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(93.5f, 18.3f);
 glVertex2f(95.0f, 18.3f);
 glVertex2f(89.5f, 11.7f);
 glVertex2f(88.0f, 11.7f);
 glEnd();

 //37
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(96.0f, 18.3f);
 glVertex2f(97.5f, 18.3f);
 glVertex2f(92.0f, 11.7f);
 glVertex2f(90.5f, 11.7f);
 glEnd();

 //38
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(98.5f, 18.3f);
 glVertex2f(100.0f, 18.3f);
 glVertex2f(94.5f, 11.7f);
 glVertex2f(93.0f, 11.7f);
 glEnd();

 //39
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(101.0f, 18.3f);
 glVertex2f(102.5f, 18.3f);
 glVertex2f(97.0f, 11.7f);
 glVertex2f(95.5f, 11.7f);
 glEnd();

 //40
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(103.5f, 18.3f);
 glVertex2f(105.0f, 18.3f);
 glVertex2f(99.5f, 11.7f);
 glVertex2f(98.0f, 11.7f);
 glEnd();

 //41
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(106.0f, 18.3f);
 glVertex2f(107.5f, 18.3f);
 glVertex2f(102.0f, 11.7f);
 glVertex2f(100.5f, 11.7f);
 glEnd();

 //42
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(108.5f, 18.3f);
 glVertex2f(110.0f, 18.3f);
 glVertex2f(104.5f, 11.7f);
 glVertex2f(103.0f, 11.7f);
 glEnd();

 //43
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(111.0f, 18.3f);
 glVertex2f(112.5f, 18.3f);
 glVertex2f(107.0f, 11.7f);
 glVertex2f(105.5f, 11.7f);
 glEnd();

 //44
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(113.5f, 18.3f);
 glVertex2f(115.0f, 18.3f);
 glVertex2f(109.5f, 11.7f);
 glVertex2f(108.0f, 11.7f);
 glEnd();

 //45
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(116.0f, 18.3f);
 glVertex2f(117.5f, 18.3f);
 glVertex2f(112.0f, 11.7f);
 glVertex2f(110.5f, 11.7f);
 glEnd();

 //46
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(118.5f, 18.3f);
 glVertex2f(120.0f, 18.3f);
 glVertex2f(114.5f, 11.7f);
 glVertex2f(113.0f, 11.7f);
 glEnd();

 //47
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(121.0f, 18.3f);
 glVertex2f(122.5f, 18.3f);
 glVertex2f(117.0f, 11.7f);
 glVertex2f(115.5f, 11.7f);
 glEnd();

 //47
 glBegin(GL_QUADS);
 glColor3ub (103, 53, 40);

 glVertex2f(123.5f, 18.3f);
 glVertex2f(125.0f, 18.3f);
 glVertex2f(119.5f, 11.7f);
 glVertex2f(118.0f, 11.7f);
 glEnd();

 //2nd Train track line-1
 glBegin(GL_QUADS);
 glColor3ub (161, 162, 167);

 glVertex2f(0.0f, 17.0f);
 glVertex2f(120.0f, 17.0f);
 glVertex2f(120.0f, 16.2f);
 glVertex2f(0.0f, 16.2f);
 glEnd();

 //2nd Train track line-2
 glBegin(GL_QUADS);
 glColor3ub (161, 162, 167);

 glVertex2f(0.0f, 14.0f);
 glVertex2f(120.0f, 14.0f);
 glVertex2f(120.0f, 13.2f);
 glVertex2f(0.0f, 13.2f);
 glEnd();




//Train smoke-1...........................................................................................
glPushMatrix();
glTranslatef(100.0,0.0,0.0);
//1
glBegin(GL_POLYGON);
 glColor3ub(130, 132, 133);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(52.5-p+1.9*cos(th),38.5+1.9*sin(th));
 }
 glEnd();

 //2
glBegin(GL_POLYGON);
 glColor3ub(130, 132, 133);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(54.0-p+1.9*cos(th),39.6+1.9*sin(th));
 }
 glEnd();

 //3
glBegin(GL_POLYGON);
 glColor3ub(130, 132, 133);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(51.0-p+1.9*cos(th),40.0+1.9*sin(th));
 }
 glEnd();

 //4
 glBegin(GL_POLYGON);
 glColor3ub(161, 162, 164);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(51.5-p+1.9*cos(th),41.4+1.9*sin(th));
 }
 glEnd();

 //5
glBegin(GL_POLYGON);
 glColor3ub(161, 162, 164);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(52.9-p+1.9*cos(th),42.5+1.9*sin(th));
 }
 glEnd();

 //6
glBegin(GL_POLYGON);
 glColor3ub(161, 162, 164);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(55.9-p+1.9*cos(th),41.2+1.9*sin(th));
 }
 glEnd();

 //7
glBegin(GL_POLYGON);
 glColor3ub(180, 181, 185);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(54.9-p+1.7*cos(th),43.8+1.7*sin(th));
 }
 glEnd();

 //8
glBegin(GL_POLYGON);
 glColor3ub(180, 181, 185);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(57.9-p+1.7*cos(th),43.8+1.7*sin(th));
 }
 glEnd();

 //9
glBegin(GL_POLYGON);
 glColor3ub(180, 181, 185);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(56.9-p+1.5*cos(th),44.8+1.5*sin(th));
 }
 glEnd();

 //10
glBegin(GL_POLYGON);
 glColor3ub(180, 181, 185);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(57.9-p+1.3*cos(th),46.0+1.3*sin(th));
 }
 glEnd();

 //11
glBegin(GL_POLYGON);
 glColor3ub(180, 181, 185);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(58.9-p+0.9*cos(th),47.5+0.9*sin(th));
 }
 glEnd();




//Train-1........................................................................................
//Engine
//wheel-1
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(50-p+2.1*cos(th),26+2.1*sin(th));
 }
 glEnd();

//wheel-1 in-1
 glBegin(GL_POLYGON);
 glColor3ub(242, 242, 242);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(50-p+1.3*cos(th),26+1.3*sin(th));
 }
 glEnd();

//wheel-1 in-2
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(50-p+.5*cos(th),26+.5*sin(th));
 }
 glEnd();

/////////////////////////////////////////////////////////

//wheel-2
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(54.5-p+2.1*cos(th),26+2.1*sin(th));
 }
 glEnd();

//wheel-2 in-1
 glBegin(GL_POLYGON);
 glColor3ub(242, 242, 242);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(54.5-p+1.3*cos(th),26+1.3*sin(th));
 }
 glEnd();

//wheel-2 in-2
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(54.5-p+.5*cos(th),26+.5*sin(th));
 }
 glEnd();
 ////////////////////////////////////////////////////////////////////


//wheel-3
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(60.6-p+2.6*cos(th),26.3+2.6*sin(th));
 }
 glEnd();

//wheel-3 in-1
 glBegin(GL_POLYGON);
 glColor3ub(242, 242, 242);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(60.6-p+1.8*cos(th),26.3+1.8*sin(th));
 }
 glEnd();

//wheel-3 in-2
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(60.6-p+.7*cos(th),26.3+.7*sin(th));
 }
 glEnd();


//wheel-3 line
 glLineWidth(3);
 glBegin(GL_LINES);
 glColor3ub(108, 108, 108);

 glVertex2f(60.6-p, 26.3f);
 glVertex2f(58.0-p, 26.3f);

 glVertex2f(60.6-p, 26.3f);
 glVertex2f(60.6-p, 28.9f);

 glVertex2f(60.6-p, 26.3f);
 glVertex2f(63.2-p, 26.3f);

 glVertex2f(60.6-p, 26.3f);
 glVertex2f(60.6-p, 23.7f);

 glVertex2f(60.6-p, 26.3f);
 glVertex2f(58.8-p, 28.1f);

 glVertex2f(60.6-p, 26.3f);
 glVertex2f(62.6-p, 24.7f);

 glVertex2f(60.6-p, 26.3f);
 glVertex2f(62.6-p, 28.1f);

 glVertex2f(60.6-p, 26.3f);
 glVertex2f(58.8-p, 24.4f);
 glEnd();

/////////////////////////////////////////////////////////////////////

//wheel-4
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(65.8-p+2.6*cos(th),26.3+2.6*sin(th));
 }
 glEnd();

//wheel-4 in-1
 glBegin(GL_POLYGON);
 glColor3ub(242, 242, 242);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(65.8-p+1.8*cos(th),26.3+1.8*sin(th));
 }
 glEnd();

//wheel-4 in-2
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(65.8-p+.7*cos(th),26.3+.7*sin(th));
 }
 glEnd();

//wheel-3 line
 glLineWidth(3);
 glBegin(GL_LINES);
 glColor3ub(108, 108, 108);

 glVertex2f(65.8-p, 26.3f);
 glVertex2f(63.2-p, 26.3f);

 glVertex2f(65.8-p, 26.3f);
 glVertex2f(65.8-p, 28.9f);

 glVertex2f(65.8-p, 26.3f);
 glVertex2f(68.4-p, 26.3f);

 glVertex2f(65.8-p, 26.3f);
 glVertex2f(65.8-p, 23.7f);

 glVertex2f(65.8-p, 26.3f);
 glVertex2f(64.0-p, 28.0f);

 glVertex2f(65.8-p, 26.3f);
 glVertex2f(67.5-p, 24.5f);

 glVertex2f(65.8-p, 26.3f);
 glVertex2f(67.5-p, 28.0f);

 glVertex2f(65.8-p, 26.3f);
 glVertex2f(64.0-p, 24.5f);
 glEnd();

/////////////////////////////////////////////////////////////////////////

//Train engine
//front-shild_top
 glBegin(GL_TRIANGLES);
 glColor3ub (52, 52, 54);

 glVertex2f(51.2-p, 34.5f);
 glVertex2f(51.2-p, 29.2f);
 glVertex2f(49.0-p, 31.85f);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub (255, 204, 0);

 glVertex2f(50.9-p, 34.5f);
 glVertex2f(51.2-p, 34.5f);
 glVertex2f(51.2-p, 29.2f);
 glVertex2f(50.9-p, 29.2f);
 glEnd();


//engine-body_front
 glBegin(GL_QUADS);
 glColor3ub (255, 0, 76);

 glVertex2f(51.2-p, 34.0f);
 glVertex2f(53.8-p, 34.0f);
 glVertex2f(53.8-p, 29.2f);
 glVertex2f(51.2-p, 29.2f);
 glEnd();

//engine-body_front_line
  glBegin(GL_LINES);
  glColor3ub (25, 25, 25);

  glVertex2f(51.2-p, 33.0f);
  glVertex2f(53.8-p, 33.0f);
  glEnd();

//engine-body
 glBegin(GL_QUADS);
 glColor3ub (255, 0, 76);

 glVertex2f(53.8-p, 33.7f);
 glVertex2f(60.1-p, 33.7f);
 glVertex2f(60.1-p, 29.2f);
 glVertex2f(53.8-p, 29.2f);
 glEnd();

//Engine-body_line
//glLineWidth(.5);
 glBegin(GL_LINES);
 glColor3ub (25, 25, 25);

 glVertex2f(53.8-p, 32.0f);
 glVertex2f(60.1-p, 32.0f);
 glEnd();

//Engine cabin_body
 glBegin(GL_POLYGON);
 glColor3ub (255, 0, 76);

 glVertex2f(66.0-p, 30.0f);
 glVertex2f(67.7-p, 30.0f);
 glVertex2f(67.7-p, 29.2f);
 glVertex2f(60.1-p, 29.2f);
 glVertex2f(60.1-p, 35.0f);
 glVertex2f(67.0-p, 35.0f);
 glEnd();

//Engine cabin_body_roof
 glBegin(GL_QUADS);
 glColor3ub (0, 0, 0);

 glVertex2f(61.0-p, 36.0f);
 glVertex2f(67.0-p, 35.6f);
 glVertex2f(67.0-p, 35.0f);
 glVertex2f(60.1-p, 35.0f);
 glEnd();


//Engine cabin_body_window-1
 glBegin(GL_QUADS);
 glColor3ub (255, 255, 255);

 glVertex2f(61.2-p, 33.7f);
 glVertex2f(63.0-p, 33.7f);
 glVertex2f(63.0-p, 31.0f);
 glVertex2f(61.2-p, 31.0f);
 glEnd();


//Engine cabin_body_window-2
 glBegin(GL_QUADS);
 glColor3ub (255, 255, 255);

 glVertex2f(63.85-p, 33.7f);
 glVertex2f(65.5-p, 33.7f);
 glVertex2f(65.5-p, 31.0f);
 glVertex2f(63.85-p, 31.0f);
 glEnd();


//Engine bottom
 glBegin(GL_POLYGON);
 glColor3ub (26, 26, 26);

 glVertex2f(47.5-p, 27.5f);
 glVertex2f(49.9-p, 29.2f);
 glVertex2f(68.5-p, 29.2f);
 glVertex2f(68.5-p, 26.0f);
 glVertex2f(44.0-p, 26.0f);
 glEnd();

//Engine bottom_gold
 glBegin(GL_QUADS);
 glColor3ub (255, 204, 0);

 glVertex2f(47.5-p, 27.5f);
 glVertex2f(49.9-p, 29.2f);
 glVertex2f(68.5-p, 29.2f);
 glVertex2f(68.5-p, 27.5f);
 glEnd();

//smoke washer_bottom
 glBegin(GL_QUADS);
 glColor3ub (52, 52, 54);

 glVertex2f(51.8-p, 34.0f);
 glVertex2f(51.4-p, 35.5f);
 glVertex2f(53.5-p, 35.5f);
 glVertex2f(53.2-p, 34.0f);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub (255, 204, 0);

 glVertex2f(51.8-p, 34.0f);
 glVertex2f(53.1-p, 34.0f);
 glVertex2f(53.1-p, 34.4f);
 glVertex2f(51.8-p, 34.4f);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub (255, 204, 0);

 glVertex2f(51.2-p, 35.5f);
 glVertex2f(53.8-p, 35.5f);
 glVertex2f(53.8-p, 35.9f);
 glVertex2f(51.2-p, 35.9f);
 glEnd();


//smoke washer_top
 glBegin(GL_QUADS);
 glColor3ub (52, 52, 54);

 glVertex2f(51.0-p, 37.0f);
 glVertex2f(54.0-p, 37.0f);
 glVertex2f(53.8-p, 35.9f);
 glVertex2f(51.2-p, 35.9f);
 glEnd();

//////////////////////////////////////////////////////////////////////

//cabin-1
//wheel-1
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(77.6-p+2.6*cos(th),26.3+2.6*sin(th));
 }
 glEnd();

//wheel-1 in-1
 glBegin(GL_POLYGON);
 glColor3ub(242, 242, 242);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(77.6-p+1.8*cos(th),26.3+1.8*sin(th));
 }
 glEnd();

//wheel-1 in-2
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(77.6-p+.7*cos(th),26.3+.7*sin(th));
 }
 glEnd();


//wheel-1 line
 glLineWidth(3);
 glBegin(GL_LINES);
 glColor3ub(108, 108, 108);

 glVertex2f(77.6-p, 26.3f);
 glVertex2f(75.0-p, 26.3f);

 glVertex2f(77.6-p, 26.3f);
 glVertex2f(77.6-p, 28.9f);

 glVertex2f(77.6-p, 26.3f);
 glVertex2f(84.2-p, 26.3f);

 glVertex2f(77.6-p, 26.3f);
 glVertex2f(77.6-p, 23.7f);

 glVertex2f(77.6-p, 26.3f);
 glVertex2f(75.8-p, 28.1f);

 glVertex2f(77.6-p, 26.3f);
 glVertex2f(79.6-p, 24.7f);

 glVertex2f(77.6-p, 26.3f);
 glVertex2f(79.6-p, 28.1f);

 glVertex2f(77.6-p, 26.3f);
 glVertex2f(75.8-p, 24.4f);
 glEnd();


//wheel-2
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(89.4-p+2.6*cos(th),26.3+2.6*sin(th));
 }
 glEnd();

//wheel-2 in-1
 glBegin(GL_POLYGON);
 glColor3ub(242, 242, 242);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(89.4-p+1.8*cos(th),26.3+1.8*sin(th));
 }
 glEnd();

//wheel-2 in-2
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(89.4-p+.7*cos(th),26.3+.7*sin(th));
 }
 glEnd();


//wheel-2 line
 glLineWidth(3);
 glBegin(GL_LINES);
 glColor3ub(108, 108, 108);

 glVertex2f(89.4-p, 26.3f);
 glVertex2f(86.8-p, 26.3f);

 glVertex2f(89.4-p, 26.3f);
 glVertex2f(89.4-p, 28.9f);

 glVertex2f(89.4-p, 26.3f);
 glVertex2f(96.0-p, 26.3f);

 glVertex2f(89.4-p, 26.3f);
 glVertex2f(89.4-p, 23.7f);

 glVertex2f(89.4-p, 26.3f);
 glVertex2f(87.6-p, 28.1f);

 glVertex2f(89.4-p, 26.3f);
 glVertex2f(91.4-p, 24.7f);

 glVertex2f(89.4-p, 26.3f);
 glVertex2f(91.4-p, 28.1f);

 glVertex2f(89.4-p, 26.3f);
 glVertex2f(87.6-p, 24.4f);
 glEnd();


//Cabin bottom
 glBegin(GL_QUADS);
 glColor3ub (21, 21, 21);

 glVertex2f(71.4-p, 26.0f);
 glVertex2f(92.5-p, 26.0f);
 glVertex2f(92.5-p, 27.0f);
 glVertex2f(71.4-p, 27.0f);
 glEnd();


 //Cabin body
 glBegin(GL_QUADS);
 glColor3ub (255, 0, 76);
 //glVertex2f(f, f);

 glVertex2f(74.0-p, 35.0f);
 glVertex2f(92.0-p, 35.0f);
 glVertex2f(92.0-p, 27.0f);
 glVertex2f(74.0-p, 27.0f);
 glEnd();


//Cabin_body_window-1
 glBegin(GL_QUADS);
 glColor3ub (255, 255, 255);

 glVertex2f(74.5-p, 33.7f);
 glVertex2f(76.3-p, 33.7f);
 glVertex2f(76.3-p, 31.0f);
 glVertex2f(74.5-p, 31.0f);
 glEnd();


//Cabin_body_window-2
 glBegin(GL_QUADS);
 glColor3ub (255, 255, 255);

 glVertex2f(77.0-p, 33.7f);
 glVertex2f(79.0-p, 33.7f);
 glVertex2f(79.0-p, 31.0f);
 glVertex2f(77.0-p, 31.0f);
 glEnd();

//Cabin_body_window-3
 glBegin(GL_QUADS);
 glColor3ub (255, 255, 255);

 glVertex2f(80.0-p, 33.7f);
 glVertex2f(82.0-p, 33.7f);
 glVertex2f(82.0-p, 31.0f);
 glVertex2f(80.0-p, 31.0f);
 glEnd();


//Cabin_body_door
 glBegin(GL_QUADS);
 glColor3ub (255, 255, 255);

 glVertex2f(82.8-p, 33.7f);
 glVertex2f(86.5-p, 33.7f);
 glVertex2f(86.5-p, 27.0f);
 glVertex2f(82.8-p, 27.0f);
 glEnd();


//Cabin_body_window-4
 glBegin(GL_QUADS);
 glColor3ub (255, 255, 255);

 glVertex2f(87.1-p, 33.7f);
 glVertex2f(89.1-p, 33.7f);
 glVertex2f(89.1-p, 31.0f);
 glVertex2f(87.1-p, 31.0f);
 glEnd();

//Cabin_body_window-5
 glBegin(GL_QUADS);
 glColor3ub (255, 255, 255);

 glVertex2f(89.6-p, 33.7f);
 glVertex2f(91.6-p, 33.7f);
 glVertex2f(91.6-p, 31.0f);
 glVertex2f(89.6-p, 31.0f);
 glEnd();


//Cabin roof
 glBegin(GL_QUADS);
 glColor3ub (0, 0, 0);

 glVertex2f(74.0-p, 35.0f);
 glVertex2f(75.0-p, 36.0f);
 glVertex2f(92.0-p, 35.5f);
 glVertex2f(92.0-p, 35.0f);
 glEnd();


//Cabin grill
 glLineWidth(1.5);
 glBegin(GL_LINES);
 glColor3ub (21, 21, 21);

 glVertex2f(71.5-p, 30.5f);
 glVertex2f(74.0-p, 30.5f);

 glVertex2f(71.5-p, 27.0f);
 glVertex2f(71.5-p, 30.5f);

 glVertex2f(72.33-p, 27.0f);
 glVertex2f(72.33-p, 30.5f);

 glVertex2f(73.16-p, 27.0f);
 glVertex2f(73.16-p, 30.5f);

 glVertex2f(73.99-p, 27.0f);
 glVertex2f(73.99-p, 30.5f);
 glEnd();

/////////////////////////////////////////////////////////////////////

//cabin-2
//wheel-1
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(99.6-p+2.6*cos(th),26.3+2.6*sin(th));
 }
 glEnd();

//wheel-3 in-1
 glBegin(GL_POLYGON);
 glColor3ub(242, 242, 242);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(99.6-p+1.8*cos(th),26.3+1.8*sin(th));
 }
 glEnd();

//wheel-3 in-2
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(99.6-p+.7*cos(th),26.3+.7*sin(th));
 }
 glEnd();


//wheel-3 line
 glLineWidth(3);
 glBegin(GL_LINES);
 glColor3ub(108, 108, 108);

 glVertex2f(99.8-p, 26.3f);
 glVertex2f(101.2-p, 26.3f);

 glVertex2f(99.8-p, 26.3f);
 glVertex2f(99.8-p, 28.9f);

 glVertex2f(99.8-p, 26.3f);
 glVertex2f(102.4-p, 26.3f);

 glVertex2f(99.8-p, 26.3f);
 glVertex2f(99.8-p, 23.7f);

 glVertex2f(99.8-p, 26.3f);
 glVertex2f(98.0-p, 28.0f);

 glVertex2f(99.8-p, 26.3f);
 glVertex2f(101.5-p, 24.5f);

 glVertex2f(99.8-p, 26.3f);
 glVertex2f(101.5-p, 28.0f);

 glVertex2f(99.8-p, 26.3f);
 glVertex2f(98.0-p, 24.5f);
 glEnd();



//wheel-2
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(106.6-p+2.6*cos(th),26.3+2.6*sin(th));
 }
 glEnd();

//wheel-2 in-1
 glBegin(GL_POLYGON);
 glColor3ub(242, 242, 242);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(106.6-p+1.8*cos(th),26.3+1.8*sin(th));
 }
 glEnd();

//wheel-2 in-2
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(106.6-p+.7*cos(th),26.3+.7*sin(th));
 }
 glEnd();


//wheel-2 line
 glLineWidth(3);
 glBegin(GL_LINES);
 glColor3ub(108, 108, 108);

 glVertex2f(106.8-p, 26.3f);
 glVertex2f(98.2-p, 26.3f);

 glVertex2f(106.8-p, 26.3f);
 glVertex2f(106.8-p, 28.9f);

 glVertex2f(106.8-p, 26.3f);
 glVertex2f(102.4-p, 26.3f);

 glVertex2f(106.8-p, 26.3f);
 glVertex2f(106.8-p, 23.7f);

 glVertex2f(106.8-p, 26.3f);
 glVertex2f(105.0-p, 28.0f);

 glVertex2f(106.8-p, 26.3f);
 glVertex2f(108.5-p, 24.5f);

 glVertex2f(106.8-p, 26.3f);
 glVertex2f(108.5-p, 28.0f);

 glVertex2f(106.8-p, 26.3f);
 glVertex2f(105.0-p, 24.5f);
 glEnd();




//Cabin-2_bottom
 glBegin(GL_QUADS);
 glColor3ub (21, 21, 21);

 glVertex2f(95.5-p, 26.0f);
 glVertex2f(110.0-p, 26.0f);
 glVertex2f(110.0-p, 27.0f);
 glVertex2f(95.5-p, 27.0f);
 glEnd();


//Cabin-2 body
 glBegin(GL_QUADS);
 glColor3ub (255, 0, 76);;

 glVertex2f(96.5-p, 31.5f);
 glVertex2f(109.5-p, 31.5f);
 glVertex2f(109.5-p, 27.0f);
 glVertex2f(96.5-p, 27.0f);
 glEnd();

//Cabin-2 koila
 glBegin(GL_QUADS);
 glColor3ub (13, 15, 16);

 glVertex2f(96.5-p, 31.5f);
 glVertex2f(109.5-p, 31.5f);
 glVertex2f(106.5-p, 33.5f);
 glVertex2f(99.5-p, 33.5f);
 glEnd();

//cabin connections
 glLineWidth(3.5);
 glBegin(GL_LINES);
 glColor3ub (21, 21, 21);

 glVertex2f(70.0-p, 27.0f);
 glVertex2f(70.0-p, 26.0f);

 glVertex2f(68.5-p, 26.5f);
 glVertex2f(71.5-p, 26.5f);
 glEnd();

//cabin connections
 glLineWidth(3.5);
 glBegin(GL_LINES);
 glColor3ub (21, 21, 21);

 glVertex2f(94.0-p, 27.0f);
 glVertex2f(94.0-p, 26.0f);

 glVertex2f(92.5-p, 26.5f);
 glVertex2f(95.5-p, 26.5f);
 glEnd();

glPopMatrix();



//Train smoke-2...........................................................................................
glPushMatrix();
glTranslatef(-5.0,-10.0,0.0);
//1
glBegin(GL_POLYGON);
 glColor3ub(130, 132, 133);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-52.5+p+1.9*cos(th),38.5+1.9*sin(th));
 }
 glEnd();

 //2
glBegin(GL_POLYGON);
 glColor3ub(130, 132, 133);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-54.0+p+1.9*cos(th),39.6+1.9*sin(th));
 }
 glEnd();

 //3
glBegin(GL_POLYGON);
 glColor3ub(130, 132, 133);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-51.0+p+1.9*cos(th),40.0+1.9*sin(th));
 }
 glEnd();

 //4
 glBegin(GL_POLYGON);
 glColor3ub(161, 162, 164);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-51.5+p+1.9*cos(th),41.4+1.9*sin(th));
 }
 glEnd();

 //5
glBegin(GL_POLYGON);
 glColor3ub(161, 162, 164);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-52.9+p+1.9*cos(th),42.5+1.9*sin(th));
 }
 glEnd();

 //6
glBegin(GL_POLYGON);
 glColor3ub(161, 162, 164);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-55.9+p+1.9*cos(th),41.2+1.9*sin(th));
 }
 glEnd();

 //7
glBegin(GL_POLYGON);
 glColor3ub(180, 181, 185);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-54.9+p+1.7*cos(th),43.8+1.7*sin(th));
 }
 glEnd();

 //8
glBegin(GL_POLYGON);
 glColor3ub(180, 181, 185);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-57.9+p+1.7*cos(th),43.8+1.7*sin(th));
 }
 glEnd();

 //9
glBegin(GL_POLYGON);
 glColor3ub(180, 181, 185);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-56.9+p+1.5*cos(th),44.8+1.5*sin(th));
 }
 glEnd();

 //10
glBegin(GL_POLYGON);
 glColor3ub(180, 181, 185);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-57.9+p+1.3*cos(th),46.0+1.3*sin(th));
 }
 glEnd();

 //11
glBegin(GL_POLYGON);
 glColor3ub(180, 181, 185);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-58.9+p+0.9*cos(th),47.5+0.9*sin(th));
 }
 glEnd();




//Train2........................................................................................
//Engine
//wheel-1
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-50+p+2.1*cos(th),26+2.1*sin(th));
 }
 glEnd();

//wheel-1 in-1
 glBegin(GL_POLYGON);
 glColor3ub(242, 242, 242);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-50+p+1.3*cos(th),26+1.3*sin(th));
 }
 glEnd();

//wheel-1 in-2
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-50+p+.5*cos(th),26+.5*sin(th));
 }
 glEnd();

/////////////////////////////////////////////////////////

//wheel-2
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-54.5+p+2.1*cos(th),26+2.1*sin(th));
 }
 glEnd();

//wheel-2 in-1
 glBegin(GL_POLYGON);
 glColor3ub(242, 242, 242);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-54.5+p+1.3*cos(th),26+1.3*sin(th));
 }
 glEnd();

//wheel-2 in-2
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-54.5+p+.5*cos(th),26+.5*sin(th));
 }
 glEnd();
 ////////////////////////////////////////////////////////////////////


//wheel-3
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-60.6+p+2.6*cos(th),26.3+2.6*sin(th));
 }
 glEnd();

//wheel-3 in-1
 glBegin(GL_POLYGON);
 glColor3ub(242, 242, 242);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-60.6+p+1.8*cos(th),26.3+1.8*sin(th));
 }
 glEnd();

//wheel-3 in-2
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-60.6+p+.7*cos(th),26.3+.7*sin(th));
 }
 glEnd();


//wheel-3 line
 glLineWidth(3);
 glBegin(GL_LINES);
 glColor3ub(108, 108, 108);

 glVertex2f(-60.6+p, 26.3f);
 glVertex2f(-58.0+p, 26.3f);

 glVertex2f(-60.6+p, 26.3f);
 glVertex2f(-60.6+p, 28.9f);

 glVertex2f(-60.6+p, 26.3f);
 glVertex2f(-63.2+p, 26.3f);

 glVertex2f(-60.6+p, 26.3f);
 glVertex2f(-60.6+p, 23.7f);

 glVertex2f(-60.6+p, 26.3f);
 glVertex2f(-58.8+p, 28.1f);

 glVertex2f(-60.6+p, 26.3f);
 glVertex2f(-62.6+p, 24.7f);

 glVertex2f(-60.6+p, 26.3f);
 glVertex2f(-62.6+p, 28.1f);

 glVertex2f(-60.6+p, 26.3f);
 glVertex2f(-58.8+p, 24.4f);
 glEnd();

/////////////////////////////////////////////////////////////////////

//wheel-4
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-65.8+p+2.6*cos(th),26.3+2.6*sin(th));
 }
 glEnd();

//wheel-4 in-1
 glBegin(GL_POLYGON);
 glColor3ub(242, 242, 242);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-65.8+p+1.8*cos(th),26.3+1.8*sin(th));
 }
 glEnd();

//wheel-4 in-2
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-65.8+p+.7*cos(th),26.3+.7*sin(th));
 }
 glEnd();

//wheel-3 line
 glLineWidth(3);
 glBegin(GL_LINES);
 glColor3ub(108, 108, 108);

 glVertex2f(-65.8+p, 26.3f);
 glVertex2f(-63.2+p, 26.3f);

 glVertex2f(-65.8+p, 26.3f);
 glVertex2f(-65.8+p, 28.9f);

 glVertex2f(-65.8+p, 26.3f);
 glVertex2f(-68.4+p, 26.3f);

 glVertex2f(-65.8+p, 26.3f);
 glVertex2f(-65.8+p, 23.7f);

 glVertex2f(-65.8+p, 26.3f);
 glVertex2f(-64.0+p, 28.0f);

 glVertex2f(-65.8+p, 26.3f);
 glVertex2f(-67.5+p, 24.5f);

 glVertex2f(-65.8+p, 26.3f);
 glVertex2f(-67.5+p, 28.0f);

 glVertex2f(-65.8+p, 26.3f);
 glVertex2f(-64.0+p, 24.5f);
 glEnd();

/////////////////////////////////////////////////////////////////////////

//Train engine
//front-shild_top
 glBegin(GL_TRIANGLES);
 glColor3ub (52, 52, 54);

 glVertex2f(-51.2+p, 34.5f);
 glVertex2f(-51.2+p, 29.2f);
 glVertex2f(-49.0+p, 31.85f);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub (255, 204, 0);

 glVertex2f(-50.9+p, 34.5f);
 glVertex2f(-51.2+p, 34.5f);
 glVertex2f(-51.2+p, 29.2f);
 glVertex2f(-50.9+p, 29.2f);
 glEnd();


//engine-body_front
 glBegin(GL_QUADS);
 glColor3ub (255, 0, 76);

 glVertex2f(-51.2+p, 34.0f);
 glVertex2f(-53.8+p, 34.0f);
 glVertex2f(-53.8+p, 29.2f);
 glVertex2f(-51.2+p, 29.2f);
 glEnd();

//engine-body_front_line
  glBegin(GL_LINES);
  glColor3ub (25, 25, 25);

  glVertex2f(-51.2+p, 33.0f);
  glVertex2f(-53.8+p, 33.0f);
  glEnd();

//engine-body
 glBegin(GL_QUADS);
 glColor3ub (255, 0, 76);

 glVertex2f(-53.8+p, 33.7f);
 glVertex2f(-60.1+p, 33.7f);
 glVertex2f(-60.1+p, 29.2f);
 glVertex2f(-53.8+p, 29.2f);
 glEnd();

//Engine-body_line
//glLineWidth(.5);
 glBegin(GL_LINES);
 glColor3ub (25, 25, 25);

 glVertex2f(-53.8+p, 32.0f);
 glVertex2f(-60.1+p, 32.0f);
 glEnd();

//Engine cabin_body
 glBegin(GL_POLYGON);
 glColor3ub (255, 0, 76);

 glVertex2f(-66.0+p, 30.0f);
 glVertex2f(-67.7+p, 30.0f);
 glVertex2f(-67.7+p, 29.2f);
 glVertex2f(-60.1+p, 29.2f);
 glVertex2f(-60.1+p, 35.0f);
 glVertex2f(-67.0+p, 35.0f);
 glEnd();

//Engine cabin_body_roof
 glBegin(GL_QUADS);
 glColor3ub (0, 0, 0);

 glVertex2f(-61.0+p, 36.0f);
 glVertex2f(-67.0+p, 35.6f);
 glVertex2f(-67.0+p, 35.0f);
 glVertex2f(-60.1+p, 35.0f);
 glEnd();


//Engine cabin_body_window-1
 glBegin(GL_QUADS);
 glColor3ub (255, 255, 255);

 glVertex2f(-61.2+p, 33.7f);
 glVertex2f(-63.0+p, 33.7f);
 glVertex2f(-63.0+p, 31.0f);
 glVertex2f(-61.2+p, 31.0f);
 glEnd();


//Engine cabin_body_window-2
 glBegin(GL_QUADS);
 glColor3ub (255, 255, 255);

 glVertex2f(-63.85+p, 33.7f);
 glVertex2f(-65.5+p, 33.7f);
 glVertex2f(-65.5+p, 31.0f);
 glVertex2f(-63.85+p, 31.0f);
 glEnd();


//Engine bottom
 glBegin(GL_POLYGON);
 glColor3ub (26, 26, 26);

 glVertex2f(-47.5+p, 27.5f);
 glVertex2f(-49.9+p, 29.2f);
 glVertex2f(-68.5+p, 29.2f);
 glVertex2f(-68.5+p, 26.0f);
 glVertex2f(-44.0+p, 26.0f);
 glEnd();

//Engine bottom_gold
 glBegin(GL_QUADS);
 glColor3ub (255, 204, 0);

 glVertex2f(-47.5+p, 27.5f);
 glVertex2f(-49.9+p, 29.2f);
 glVertex2f(-68.5+p, 29.2f);
 glVertex2f(-68.5+p, 27.5f);
 glEnd();

//smoke washer_bottom
 glBegin(GL_QUADS);
 glColor3ub (52, 52, 54);

 glVertex2f(-51.8+p, 34.0f);
 glVertex2f(-51.4+p, 35.5f);
 glVertex2f(-53.5+p, 35.5f);
 glVertex2f(-53.2+p, 34.0f);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub (255, 204, 0);

 glVertex2f(-51.8+p, 34.0f);
 glVertex2f(-53.1+p, 34.0f);
 glVertex2f(-53.1+p, 34.4f);
 glVertex2f(-51.8+p, 34.4f);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub (255, 204, 0);

 glVertex2f(-51.2+p, 35.5f);
 glVertex2f(-53.8+p, 35.5f);
 glVertex2f(-53.8+p, 35.9f);
 glVertex2f(-51.2+p, 35.9f);
 glEnd();


//smoke washer_top
 glBegin(GL_QUADS);
 glColor3ub (52, 52, 54);

 glVertex2f(-51.0+p, 37.0f);
 glVertex2f(-54.0+p, 37.0f);
 glVertex2f(-53.8+p, 35.9f);
 glVertex2f(-51.2+p, 35.9f);
 glEnd();

//////////////////////////////////////////////////////////////////////

//cabin-1
//wheel-1
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-77.6+p+2.6*cos(th),26.3+2.6*sin(th));
 }
 glEnd();

//wheel-1 in-1
 glBegin(GL_POLYGON);
 glColor3ub(242, 242, 242);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-77.6+p+1.8*cos(th),26.3+1.8*sin(th));
 }
 glEnd();

//wheel-1 in-2
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-77.6+p+.7*cos(th),26.3+.7*sin(th));
 }
 glEnd();


//wheel-1 line
 glLineWidth(3);
 glBegin(GL_LINES);
 glColor3ub(108, 108, 108);

 glVertex2f(-77.6+p, 26.3f);
 glVertex2f(-75.0+p, 26.3f);

 glVertex2f(-77.6+p, 26.3f);
 glVertex2f(-77.6+p, 28.9f);

 glVertex2f(-77.6+p, 26.3f);
 glVertex2f(-84.2+p, 26.3f);

 glVertex2f(-77.6+p, 26.3f);
 glVertex2f(-77.6+p, 23.7f);

 glVertex2f(-77.6+p, 26.3f);
 glVertex2f(-75.8+p, 28.1f);

 glVertex2f(-77.6+p, 26.3f);
 glVertex2f(-79.6+p, 24.7f);

 glVertex2f(-77.6+p, 26.3f);
 glVertex2f(-79.6+p, 28.1f);

 glVertex2f(-77.6+p, 26.3f);
 glVertex2f(-75.8+p, 24.4f);
 glEnd();


//wheel-2
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-89.4+p+2.6*cos(th),26.3+2.6*sin(th));
 }
 glEnd();

//wheel-2 in-1
 glBegin(GL_POLYGON);
 glColor3ub(242, 242, 242);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-89.4+p+1.8*cos(th),26.3+1.8*sin(th));
 }
 glEnd();

//wheel-2 in-2
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-89.4+p+.7*cos(th),26.3+.7*sin(th));
 }
 glEnd();


//wheel-2 line
 glLineWidth(3);
 glBegin(GL_LINES);
 glColor3ub(108, 108, 108);

 glVertex2f(-89.4+p, 26.3f);
 glVertex2f(-86.8+p, 26.3f);

 glVertex2f(-89.4+p, 26.3f);
 glVertex2f(-89.4+p, 28.9f);

 glVertex2f(-89.4+p, 26.3f);
 glVertex2f(-96.0+p, 26.3f);

 glVertex2f(-89.4+p, 26.3f);
 glVertex2f(-89.4+p, 23.7f);

 glVertex2f(-89.4+p, 26.3f);
 glVertex2f(-87.6+p, 28.1f);

 glVertex2f(-89.4+p, 26.3f);
 glVertex2f(-91.4+p, 24.7f);

 glVertex2f(-89.4+p, 26.3f);
 glVertex2f(-91.4+p, 28.1f);

 glVertex2f(-89.4+p, 26.3f);
 glVertex2f(-87.6+p, 24.4f);
 glEnd();


//Cabin bottom
 glBegin(GL_QUADS);
 glColor3ub (21, 21, 21);

 glVertex2f(-71.4+p, 26.0f);
 glVertex2f(-92.5+p, 26.0f);
 glVertex2f(-92.5+p, 27.0f);
 glVertex2f(-71.4+p, 27.0f);
 glEnd();


 //Cabin body
 glBegin(GL_QUADS);
 glColor3ub (255, 0, 76);
 //glVertex2f(f, f);

 glVertex2f(-74.0+p, 35.0f);
 glVertex2f(-92.0+p, 35.0f);
 glVertex2f(-92.0+p, 27.0f);
 glVertex2f(-74.0+p, 27.0f);
 glEnd();


//Cabin_body_window-1
 glBegin(GL_QUADS);
 glColor3ub (255, 255, 255);

 glVertex2f(-74.5+p, 33.7f);
 glVertex2f(-76.3+p, 33.7f);
 glVertex2f(-76.3+p, 31.0f);
 glVertex2f(-74.5+p, 31.0f);
 glEnd();


//Cabin_body_window-2
 glBegin(GL_QUADS);
 glColor3ub (255, 255, 255);

 glVertex2f(-77.0+p, 33.7f);
 glVertex2f(-79.0+p, 33.7f);
 glVertex2f(-79.0+p, 31.0f);
 glVertex2f(-77.0+p, 31.0f);
 glEnd();

//Cabin_body_window-3
 glBegin(GL_QUADS);
 glColor3ub (255, 255, 255);

 glVertex2f(-80.0+p, 33.7f);
 glVertex2f(-82.0+p, 33.7f);
 glVertex2f(-82.0+p, 31.0f);
 glVertex2f(-80.0+p, 31.0f);
 glEnd();


//Cabin_body_door
 glBegin(GL_QUADS);
 glColor3ub (255, 255, 255);

 glVertex2f(-82.8+p, 33.7f);
 glVertex2f(-86.5+p, 33.7f);
 glVertex2f(-86.5+p, 27.0f);
 glVertex2f(-82.8+p, 27.0f);
 glEnd();


//Cabin_body_window-4
 glBegin(GL_QUADS);
 glColor3ub (255, 255, 255);

 glVertex2f(-87.1+p, 33.7f);
 glVertex2f(-89.1+p, 33.7f);
 glVertex2f(-89.1+p, 31.0f);
 glVertex2f(-87.1+p, 31.0f);
 glEnd();

//Cabin_body_window-5
 glBegin(GL_QUADS);
 glColor3ub (255, 255, 255);

 glVertex2f(-89.6+p, 33.7f);
 glVertex2f(-91.6+p, 33.7f);
 glVertex2f(-91.6+p, 31.0f);
 glVertex2f(-89.6+p, 31.0f);
 glEnd();


//Cabin roof
 glBegin(GL_QUADS);
 glColor3ub (0, 0, 0);

 glVertex2f(-74.0+p, 35.0f);
 glVertex2f(-75.0+p, 36.0f);
 glVertex2f(-92.0+p, 35.5f);
 glVertex2f(-92.0+p, 35.0f);
 glEnd();


//Cabin grill
 glLineWidth(1.5);
 glBegin(GL_LINES);
 glColor3ub (21, 21, 21);

 glVertex2f(-71.5+p, 30.5f);
 glVertex2f(-74.0+p, 30.5f);

 glVertex2f(-71.5+p, 27.0f);
 glVertex2f(-71.5+p, 30.5f);

 glVertex2f(-72.33+p, 27.0f);
 glVertex2f(-72.33+p, 30.5f);

 glVertex2f(-73.16+p, 27.0f);
 glVertex2f(-73.16+p, 30.5f);

 glVertex2f(-73.99+p, 27.0f);
 glVertex2f(-73.99+p, 30.5f);
 glEnd();

/////////////////////////////////////////////////////////////////////

//cabin-2
//wheel-1
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-99.6+p+2.6*cos(th),26.3+2.6*sin(th));
 }
 glEnd();

//wheel-3 in-1
 glBegin(GL_POLYGON);
 glColor3ub(242, 242, 242);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-99.6+p+1.8*cos(th),26.3+1.8*sin(th));
 }
 glEnd();

//wheel-3 in-2
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-99.6+p+.7*cos(th),26.3+.7*sin(th));
 }
 glEnd();


//wheel-3 line
 glLineWidth(3);
 glBegin(GL_LINES);
 glColor3ub(108, 108, 108);

 glVertex2f(-99.8+p, 26.3f);
 glVertex2f(-101.2+p, 26.3f);

 glVertex2f(-99.8+p, 26.3f);
 glVertex2f(-99.8+p, 28.9f);

 glVertex2f(-99.8+p, 26.3f);
 glVertex2f(-102.4+p, 26.3f);

 glVertex2f(-99.8+p, 26.3f);
 glVertex2f(-99.8+p, 23.7f);

 glVertex2f(-99.8+p, 26.3f);
 glVertex2f(-98.0+p, 28.0f);

 glVertex2f(-99.8+p, 26.3f);
 glVertex2f(-101.5+p, 24.5f);

 glVertex2f(-99.8+p, 26.3f);
 glVertex2f(-101.5+p, 28.0f);

 glVertex2f(-99.8+p, 26.3f);
 glVertex2f(-98.0+p, 24.5f);
 glEnd();



//wheel-2
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-106.6+p+2.6*cos(th),26.3+2.6*sin(th));
 }
 glEnd();

//wheel-2 in-1
 glBegin(GL_POLYGON);
 glColor3ub(242, 242, 242);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-106.6+p+1.8*cos(th),26.3+1.8*sin(th));
 }
 glEnd();

//wheel-2 in-2
 glBegin(GL_POLYGON);
 glColor3ub(108, 108, 108);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(-106.6+p+.7*cos(th),26.3+.7*sin(th));
 }
 glEnd();


//wheel-2 line
 glLineWidth(3);
 glBegin(GL_LINES);
 glColor3ub(108, 108, 108);

 glVertex2f(-106.8+p, 26.3f);
 glVertex2f(-98.2+p, 26.3f);

 glVertex2f(-106.8+p, 26.3f);
 glVertex2f(-106.8+p, 28.9f);

 glVertex2f(-106.8+p, 26.3f);
 glVertex2f(-102.4+p, 26.3f);

 glVertex2f(-106.8+p, 26.3f);
 glVertex2f(-106.8+p, 23.7f);

 glVertex2f(-106.8+p, 26.3f);
 glVertex2f(-105.0+p, 28.0f);

 glVertex2f(-106.8+p, 26.3f);
 glVertex2f(-108.5+p, 24.5f);

 glVertex2f(-106.8+p, 26.3f);
 glVertex2f(-108.5+p, 28.0f);

 glVertex2f(-106.8+p, 26.3f);
 glVertex2f(-105.0+p, 24.5f);
 glEnd();




//Cabin-2_bottom
 glBegin(GL_QUADS);
 glColor3ub (21, 21, 21);

 glVertex2f(-95.5+p, 26.0f);
 glVertex2f(-110.0+p, 26.0f);
 glVertex2f(-110.0+p, 27.0f);
 glVertex2f(-95.5+p, 27.0f);
 glEnd();


//Cabin-2 body
 glBegin(GL_QUADS);
 glColor3ub (255, 0, 76);;

 glVertex2f(-96.5+p, 31.5f);
 glVertex2f(-109.5+p, 31.5f);
 glVertex2f(-109.5+p, 27.0f);
 glVertex2f(-96.5+p, 27.0f);
 glEnd();

//Cabin-2 koila
 glBegin(GL_QUADS);
 glColor3ub (13, 15, 16);

 glVertex2f(-96.5+p, 31.5f);
 glVertex2f(-109.5+p, 31.5f);
 glVertex2f(-106.5+p, 33.5f);
 glVertex2f(-99.5+p, 33.5f);
 glEnd();

//cabin connections
 glLineWidth(3.5);
 glBegin(GL_LINES);
 glColor3ub (21, 21, 21);

 glVertex2f(-70.0+p, 27.0f);
 glVertex2f(-70.0+p, 26.0f);

 glVertex2f(-68.5+p, 26.5f);
 glVertex2f(-71.5+p, 26.5f);
 glEnd();

//cabin connections
 glLineWidth(3.5);
 glBegin(GL_LINES);
 glColor3ub (21, 21, 21);

 glVertex2f(-94.0+p, 27.0f);
 glVertex2f(-94.0+p, 26.0f);

 glVertex2f(-92.5+p, 26.5f);
 glVertex2f(-95.5+p, 26.5f);
 glEnd();

glPopMatrix();

//Front tree....................................................................

glPushMatrix();
glTranslatef(26.0,-120.0,0.0);
glScalef(4.0,3.0,0.0);

//tree1
glBegin(GL_POLYGON);
 glColor3ub (114, 66, 20);

 glVertex2f(22.0f,50.0f);
 glVertex2f(21.9f,48.0f);
 glVertex2f(21.6f,47.0f);//16
 glVertex2f(20.7f,44.0f);
 glVertex2f(20.2f,42.0f);
 glVertex2f(20.0f,40.0f);
 glVertex2f(19.9f,38.0f);
 glVertex2f(19.5f,36.0f);
 glVertex2f(19.0f,34.0f);
 glVertex2f(21.0f,34.0f);
 glVertex2f(20.8f,37.0f);
 glVertex2f(21.0f,39.0f);
 glVertex2f(21.0f,40.0f);
 glVertex2f(21.4f,42.0f);
 glVertex2f(22.0f,45.0f);
 glVertex2f(22.8f,48.0f);
 glVertex2f(23.0f,51.0f);
 glVertex2f(22.8f,53.0f);
 glVertex2f(22.5f,55.0f);
 glVertex2f(21.5f,55.0f);
 glVertex2f(22.0f,52.0f);
 //glVertex2f();
 glEnd();

 //tree2
 glBegin(GL_POLYGON);
 glColor3ub (114, 66, 20);

 glVertex2f(24.9f,53.0f);
 glVertex2f(24.1f,51.9f);
 glVertex2f(23.0f,51.0f);
 glVertex2f(23.0f,50.0f);
 glVertex2f(24.0f,51.0f);
 glVertex2f(24.9f,52.0f);
 glVertex2f(25.6f,53.4f);
 glVertex2f(25.9f,54.1f);
 glVertex2f(26.0f,55.0f);
 //glVertex2f();
 glEnd();

 //tree3
 glBegin(GL_POLYGON);
 glColor3ub (114, 66, 20);

 glVertex2f(18.0f,53.0f);
 glVertex2f(19.0f,52.0f);
 glVertex2f(20.0f,51.0f);
 glVertex2f(21.0f,50.1f);
 glVertex2f(22.0f,49.6f);
 glVertex2f(22.0f,48.0f);
 glVertex2f(21.0f,49.0f);
 glVertex2f(20.0f,50.0f);
 glVertex2f(19.0f,51.0f);
 glVertex2f(18.0f,52.2f);
 glVertex2f(17.3f,53.0f);
 glVertex2f(17.0f,53.8f);
 glVertex2f(16.4f,55.0f);
 glVertex2f(17.0f,55.0f);
 glVertex2f(17.4f,54.0f);
 //glVertex2f();
 glEnd();


//tree leaf....................................................
 //tree leaf1
 glBegin(GL_POLYGON);
 glColor3ub(58, 124, 67);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(22.8+11*cos(th),58.2+4*sin(th));
 }
 glEnd();

 //////////////////////////////////////

 glBegin(GL_POLYGON);
 glColor3ub(58, 124, 67);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(28.3+0.8*cos(th),54.9+0.8*sin(th));
 }
 glEnd();

 /////////////////////////////////////

 glBegin(GL_POLYGON);
 glColor3ub(58, 124, 67);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(14.6+0.8*cos(th),55.5+0.8*sin(th));
 }
 glEnd();

 ////////////////////////////////////

 glBegin(GL_POLYGON);
 glColor3ub(58, 124, 67);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(14.1+0.7*cos(th),56+0.7*sin(th));
 }
 glEnd();



/* //tree leaf3
 glBegin(GL_POLYGON);
 glColor3ub(85, 157, 94);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(23.8+16*cos(th),62.3+5*sin(th));
 }
 glEnd();*/

 //tree leaf2 copy
 glBegin(GL_POLYGON);
 glColor3ub(99, 173, 94);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(23.8+11*cos(th),64.4+6*sin(th));
 }
 glEnd();

 //tree leaf2.1 copy
 glBegin(GL_POLYGON);
 glColor3ub(85, 157, 94);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(22.2+11*cos(th),63.4+6*sin(th));
 }
 glEnd();

 //tree leaf2---should copy
 glBegin(GL_POLYGON);
 glColor3ub(85, 157, 94);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(23.8+11*cos(th),59.4+4*sin(th));
 }
 glEnd();







 //tree4
 glBegin(GL_POLYGON);
 glColor3ub (114, 66, 20);

 glVertex2f(25.4f,46.0f);
 glVertex2f(25.0f,45.5f);
 glVertex2f(24.0f,44.8f);
 glVertex2f(23.0f,44.0f);
 glVertex2f(22.0f,43.1f);
 glVertex2f(21.5f,42.6f);
 glVertex2f(21.4f,41.5f);
 glVertex2f(23.0f,43.05f);
 glVertex2f(24.0f,44.0f);
 glVertex2f(25.0f,45.0f);
 glVertex2f(25.9f,46.0f);
 glVertex2f(26.4f,47.0f);
 glVertex2f(26.0f,47.0f);
 //glVertex2f();
 glEnd();


 //tree leaf
 glBegin(GL_POLYGON);
 glColor3ub(99, 173, 94);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(27+5.3*cos(th),49.4+1.8*sin(th));
 }
 glEnd();

  //tree leaf
 glBegin(GL_POLYGON);
 glColor3ub(58, 124, 67);
 for(i=0; i<360; i++)
 {
    th=i*3.1416/180;
	glVertex2f(26+5.3*cos(th),48.7+1.8*sin(th));
 }
 glEnd();

glPopMatrix();


//Display border
 glBegin(GL_LINE_LOOP);
 //glColor3ub (40, 40, 110);
 glColor3ub (0, 0, 0);

 glVertex2f(0.7, 99.3);
 glVertex2f(119.3, 99.3);
 glVertex2f(119.3, 0.7);
 glVertex2f(0.7, 0.7);
 glEnd();

//PlaySound(TEXT("sound.wav"), NULL, SND_SYNC);
  //glFlush ();
  glutSwapBuffers();

}

void display1()
{
    glClear (GL_COLOR_BUFFER_BIT);
    //Text.....
  glColor3ub (23, 23, 23);
        glRasterPos2f(26.0, 62.75); //define position on the screen
        char *string = "THE DAILY ACTIVITIES OF A RAILWAY STATION ";

      while(*string){
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
      }


   glColor3ub (23, 23, 23);
        glRasterPos2f(45.4, 56.75); //define position on the screen
        char *string1 = " IN THE DESERT AREA.";

      while(*string1){
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string1++);
      }


   glColor3ub (23, 23, 23);
        glRasterPos2f(65.4, 36.75); //define position on the screen
        char *string2 = " CREATED BY.";

      while(*string2){
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, *string2++);
      }



       glColor3ub (23, 23, 23);
        glRasterPos2f(65.4, 32.75); //define position on the screen
        char *string3 = " MD. ASHRAFUR RAHMAN    ID: 191-15-2433";

      while(*string3){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, *string3++);
      }


   /*glColor3ub (23, 23, 23);
        glRasterPos2f(65.4, 29.75); //define position on the screen
        char *string4 = " MEHEDI FIROZ                    ID: 191-15-2475";

      while(*string4){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, *string4++);
      }*/

//Display border
 glLineWidth(5);
 glBegin(GL_LINE_LOOP);
 //glColor3ub (40, 40, 110);
 glColor3ub (0, 0, 0);

 glVertex2f(0.7, 99.3);
 glVertex2f(119.3, 99.3);
 glVertex2f(119.3, 0.7);
 glVertex2f(0.7, 0.7);
 glEnd();


      glutSwapBuffers();
}


void display2()
{
    glClear (GL_COLOR_BUFFER_BIT);
    //Text.....
  glColor3ub (23, 23, 23);
        glRasterPos2f(50.0, 50.75); //define position on the screen
        char *string5 = "THANK YOU ";

      while(*string5){
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string5++);
      }


//Display border
 glLineWidth(5);
 glBegin(GL_LINE_LOOP);
 glColor3ub (0, 0, 0);

 glVertex2f(0.7, 99.3);
 glVertex2f(119.3, 99.3);
 glVertex2f(119.3, 0.7);
 glVertex2f(0.7, 0.7);
 glEnd();


      glutSwapBuffers();
}

/*void update(int x)
{
    angle+=0.2f;
    if (angle > 360)
    {
        angle-= 360;
    }

    glutPostRedisplay();
    glutTimerFunc(25,update,0);
}*/

void welt (int x)
{
    glutDisplayFunc(display);
    glutPostRedisplay();
}

void ext (int y)
{
    glutDisplayFunc(display2);
    glutPostRedisplay();
}

void init (void)
{
glClearColor (1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 120.0, 0.0, 100.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_DOUBLE| GLUT_RGB);
glutInitWindowSize (1000, 700);
glutInitWindowPosition (180, 30);
glutCreateWindow ("Ashrafur_191-15-2433");
init();
glutDisplayFunc(display1);
glutTimerFunc(6000,welt,0);
glutTimerFunc(130000,ext,0);
//glutTimerFunc(25,update,0);
//PlaySound(("sound.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
PlaySound(("Seen-audio.wav"), NULL, SND_FILENAME | SND_ASYNC);
//PlaySound(("sound.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
glutMainLoop();
return 0;
}
