#include<iostream>
#include "stdafx.h"


#include<opencv2\opencv.hpp>
#include<opencv2\highgui.hpp>
#include<opencv2\imgproc\imgproc.hpp>

using namespace cv;

int main()

{

	Mat picture = imread("006.png");

	imshow("���Գ���", picture);
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstimage;
	erode(picture, dstimage, element);
	imshow("��ʴ����", dstimage);


	waitKey(0);

}