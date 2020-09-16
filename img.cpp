#include <iostream>
#include <stdio.h>
#include "opencv2/opencv.hpp"
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
 // Read the image file
 Mat image = imread("image1.jpg");
 Mat image1;
 Mat image2;
 Mat image3;
 Mat image4 = imread("image1.jpg");

 // Check for failure
 if (image.empty()) 
 {
  cout << "Could not open or find the image" << endl;
  cin.get(); //wait for any key press
  return -1;
 }
 cvtColor(image,image1,COLOR_BGR2HSV);
 cvtColor(image,image2,COLOR_BGR2GRAY);
 threshold(image2,image3,128,255,THRESH_BINARY);
 rectangle(image4,Point(140,5),Point(290,170),Scalar(0,255,0),1);
 ellipse(image4,Point(75,55),Size(50,35),90,0,360,Scalar(255,0,0),1); 

 String windowName = "image1"; //Name of the window
 
 String windowName1 = "image2";
 
 String windowName2 = "image3";
 
 String windowName3 = "image4";
 
 String windowName4 = "image5";

 namedWindow(windowName); // Create a window
 
 namedWindow(windowName1);
 
 namedWindow(windowName2);
 
 namedWindow(windowName3);

 namedWindow(windowName4);

 imshow(windowName, image); // Show our image inside the created window.

 imshow(windowName1,image1);
 
 imshow(windowName2,image2);
 
 imshow(windowName3,image3);
 
 imshow(windowName4,image4);	
	
 waitKey(0); // Wait for any keystroke in the window

 destroyWindow(windowName); //destroy the created window
 
 destroyWindow(windowName1);
 
 destroyWindow(windowName2);
 
 destroyWindow(windowName3);
 
 destroyWindow(windowName4);

 return 0;
}
