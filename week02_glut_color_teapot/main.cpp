#include <GL/glut.h> ///��18��d�U�A�ϥ�GLUT�~��

void display()
{
    glColor3f(247/255.0,180/255.0,171/255.0);///0229�[�s���o��
    glutSolidTeapot(0.3);
    glColor3f(251/255.0,233/255.0,219/255.0);
    glutSolidTeapot(0.2);
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
