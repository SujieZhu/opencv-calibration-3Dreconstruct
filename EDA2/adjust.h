#pragma once


#ifndef ADJUST_H
#define ADJUST_H

#include "cv.h"
#include "cxmisc.h"
#include "highgui.h"
#include "cvaux.h"
#include <vector>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <opencv2/calib3d/calib3d.hpp>
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp> 
#include <opencv2/imgproc/imgproc.hpp> 
#include<iostream>
#include <fstream>


void dispShow(IplImage* disp, char* windowName)
{
	cvShowImage(windowName, disp);
	return;
}

void adjust(IplImage* left, IplImage* right)
{

	cvNamedWindow("parameters");
	cvNamedWindow("disp");

	int t0 = 0;
	//cvCreateTrackbar("SADWindowSize", "disp", &t0, 100, dispShow(disp));



	CvStereoBMState *BMState = cvCreateStereoBMState();
	assert(BMState != 0);
	BMState->preFilterSize = 41;
	BMState->preFilterCap = 31;
	/*BMState->SADWindowSize=41;
	BMState->minDisparity=0;
	BMState->numberOfDisparities=32;
	BMState->textureThreshold=10;
	BMState->uniquenessRatio=10;
	BMState->speckleWindowSize = 100;
	BMState->speckleRange = 32;
	BMState->disp12MaxDiff = 1;*/
	BMState->SADWindowSize = 41;
	BMState->minDisparity = 0;
	BMState->numberOfDisparities = 128;
	BMState->textureThreshold = 100;
	BMState->uniquenessRatio = 5;////
	BMState->speckleWindowSize = 100;
	BMState->speckleRange = 32;
	BMState->disp12MaxDiff = 1;

	

}




#endif