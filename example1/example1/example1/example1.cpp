// example1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <highgui.h>

int main(int argc, char** argv)
{
	if (!argv[1])
	{
		printf("error\n");
		return -1;
	}

	IplImage* img = cvLoadImage(argv[1]);//<将图像文件加载到内存
	cvNamedWindow("example1", CV_WINDOW_AUTOSIZE);
	cvShowImage("example1", img);
	cvWaitKey(0);
	cvReleaseImage(&img);
	cvDestroyWindow("example1");
    return 0;
}

