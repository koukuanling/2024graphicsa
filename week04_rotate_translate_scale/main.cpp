#include <GL/glut.h>///�ƻs10��+1��
#include <stdio.h>
float angle = 0, oldX = 0;
void display()
{
    glClearColor(1.0,1.0,0.9,1.0);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glRotatef(angle++, 0, 0, 1);///��ʤ���(�洫)
        glTranslatef(0.8,0,0);///���k��h(�洫)
        glScalef(0.3,0.3,0.3);///�p�p��
        glColor3f(0,1,0);///��⪺
        glutSolidTeapot(0.3);///����
    glPopMatrix();
    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week04_rotate_translate_scale");
    glutDisplayFunc(display);
    glutIdleFunc(display);///�[�o��A���ŴN���e�e��
    glutMainLoop();
}
