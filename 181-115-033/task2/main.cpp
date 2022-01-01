#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857


void init(void)
{

    glClearColor(0.0, 0.0, 0.0, 1.0);

    glColor3f(0.0, 1.0, 0.0);


    glPointSize(1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();


    gluOrtho2D(-780, 780, -420, 420);
}
float center_x,center_y,r;
void display (void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
    float x, y, i;

    for ( i = 0; i < (2 * pi); i += 0.001)
    {

        x = r * cos(i);
        y = r* sin(i);
        x+=center_x;
        y+=center_y;
        glVertex2i(x, y);
    }
    glEnd();
    glFlush();
}

int main (int argc, char** argv)
{
    printf("Enter the center of the circle x :");
    scanf("%f",&center_x);
    printf("Enter the center  of the circle y :");
    scanf("%f",&center_y);
    printf("Enter the radius of the circle:");
    scanf("%f",&r);

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(1000, 600);
    glutInitWindowPosition(100, 100);


    glutCreateWindow("Circle Drawing");
    init();

    glutDisplayFunc(display);
    glutMainLoop();
}
