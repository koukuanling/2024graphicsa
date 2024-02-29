#include <GL/glut.h> ///第18行留下，使用GLUT外掛
#include <math.h>

void myCircle(float x,float y,float r){
    glBegin(GL_POLYGON);///開始畫(多邊型)
    for(float a=0; a<=3.1415*2; a+=0.1){
        glVertex2f( r*cos(a)+x , r*sin(a)+y );
    }
    glEnd();///結束畫
}
void display()
{
    myCircle(  0.5,  0.5, 0.3);
    myCircle( -0.5,  0.5, 0.3);
    myCircle(    0, -0.1, 0.6);
    glutSwapBuffers();
}
int main(int argc, char *argv[])///第138行,main()函式
{
    glutInit(&argc, argv);///140,開啟GLUT功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143行,設定顯示模式
    glutCreateWindow("week02_color_teapot");///145行,開一個GLUT視窗
    glutDisplayFunc(display);///148行,要用display()函式來畫圖

    glutMainLoop();///174行,主要的迴圈,在這裡一直運作,不結束
}
