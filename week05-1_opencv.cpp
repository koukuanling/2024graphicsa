///File-New �ť��ɮ� , week05-1_opencv.cpp
#include <opencv/highgui.h>
int main()
{///Intel performance library
    IplImage * img = cvLoadImage("C:/image.jpg");
    cvShowImage("week05", img);
    cvWaitKey(0);
}
