#include <GL/glut.h> ///��18��d�U�A�ϥ�GLUT�~��

void display()
{
    glBegin(GL_POLYGON);///�}�l�e(�h�䫬)
        glVertex2f((34-200)/200.0,-(76-200)/200.0);
        glVertex2f((48-200)/200.0,-(131-200)/200.0);
        glVertex2f((85-200)/200.0,-(59-200)/200.0);
    glEnd();///�����e
    glBegin(GL_POLYGON);///�}�l�e(�h�䫬)
        glVertex2f((383-200)/200.0,-(79-200)/200.0);
        glVertex2f((348-200)/200.0,-(146-200)/200.0);
        glVertex2f((312-200)/200.0,-(55-200)/200.0);
    glEnd();///�����e
    glutSwapBuffers();
}
int main(int argc, char *argv[])///��138��,main()�禡
{
    glutInit(&argc, argv);///140,�}��GLUT�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143��,�]�w��ܼҦ�
    glutCreateWindow("week02_color_teapot");///145��,�}�@��GLUT����
    glutDisplayFunc(display);///148��,�n��display()�禡�ӵe��

    glutMainLoop();///174��,�D�n���j��,�b�o�̤@���B�@,������
}
