#include <GL/glut.h>
#include <stdio.h>
void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
void mouse(int button,int state,int x,int y)
{
    ///printf("%d %d %d %d\n",button,state,x,y);
    if(state==GLUT_DOWN)
    {
        printf("glVertex2f((%d-150)/150.0,-(%d-150)/150.0",x,y);
    }
}
int main(int argc,char*argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week03 mouse");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);

    glutMainLoop();
}
