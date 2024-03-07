#include <GL/glut.h>
#include <stdio.h> ///為了printf()
float teapotX =0 , teapotY = 0;
void mouse(int button, int state, int x, int y)
{
    teapotX =(x-150)/150.0 ;
    teapotY = -(y-150)/150.0 ;
}
void display()
{
    ///複製範例 46 49 54 行
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glTranslatef(teapotX, teapotY, 0);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03_mouse");
    glutDisplayFunc(display);
    glutMouseFunc(mouse);///註冊mouse函式

    glutMainLoop();
}
