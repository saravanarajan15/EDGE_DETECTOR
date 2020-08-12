#include<iostream>
#include<opencv\cv.h>
#include<opencv\highgui.h>
#include<conio>

using namespace cv;
using namespace std;

int main()
{
	VideoCapture capture(0);
	if(!capture.isOpened())
	{
		cout<<"error to initalize camera";
		return 1;
	}
	Mat cap_img,gray_img;
	Mat detected_edges;
	while(1)
	{
		caputre >> cap_img;
		cvtColor(cap_img,gray_img,CV_BGR2GRAY);
		canny(gray_img,detected_edges,20,60,3);
		imshow("video",cap_img);
		imshow("Edges",detected_edges);
		
		if(waitkey(10)>=0)break;
	
	}
	return 0;
}
