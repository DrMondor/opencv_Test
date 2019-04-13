#include<iostream>
#include "stdafx.h"


#include<opencv2\opencv.hpp>
#include<opencv2\highgui.hpp>
#include<opencv2\imgproc\imgproc.hpp>

using namespace cv;

int main()

{
	int Threehold = 0;
	int ucThre_New                                                         
	Mat dstimage;
	Mat picture = imread("_001a_0.png");

	cvtColor(picture, dstimage, CV_RGB2GRAY);




	imshow("测试程序", dstimage);
	/*Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstimage;
	erode(picture, dstimage, element);
	imshow("腐蚀操作", dstimage);*/
	/***这是一个github同步测试**/

	waitKey(0);

}