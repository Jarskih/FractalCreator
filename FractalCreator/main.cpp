// FractalCreator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "FractalCreator.h"
#include "RGB.h"
#include "Zoom.h"
#include <iostream>

using namespace std;
using namespace home;

int main()
{
	FractalCreator fractalCreator(1920, 1080);

	fractalCreator.addRange(0, RGB(66, 30, 15));
	fractalCreator.addRange(0.001, RGB(25, 7, 26));
	fractalCreator.addRange(0.002, RGB(9, 1, 47));
	fractalCreator.addRange(0.004, RGB(4, 4, 73));
	fractalCreator.addRange(0.006, RGB(0, 7, 100));
	fractalCreator.addRange(0.01, RGB(12, 44, 138));
	fractalCreator.addRange(0.02, RGB(24, 82, 177));
	fractalCreator.addRange(0.03, RGB(57, 125, 209));
	fractalCreator.addRange(0.05, RGB(134, 181, 229));
	fractalCreator.addRange(0.06, RGB(211, 236, 248));
	fractalCreator.addRange(0.08, RGB(241, 233, 191));
	fractalCreator.addRange(0.9, RGB(248, 201, 95));
	fractalCreator.addRange(0.1, RGB(255, 170, 0));
	fractalCreator.addRange(0.14, RGB(204, 128, 0));
	fractalCreator.addRange(0.2, RGB(153, 87, 0));
	fractalCreator.addRange(1.0, RGB(106, 52, 3));

	/*
	fractalCreator.addRange(0, RGB(66, 30, 15));
	fractalCreator.addRange(0.001, RGB(25, 7, 26));
	fractalCreator.addRange(0.002, RGB(9, 1, 47));
	fractalCreator.addRange(0.005, RGB(4, 4, 73));
	fractalCreator.addRange(0.008, RGB(0, 7, 100));
	fractalCreator.addRange(0.01, RGB(12, 44, 138));
	fractalCreator.addRange(0.05, RGB(24, 82, 177));
	fractalCreator.addRange(0.1, RGB(57, 125, 209));
	fractalCreator.addRange(0.15, RGB(134, 181, 229));
	fractalCreator.addRange(0.20, RGB(211, 236, 248));
	fractalCreator.addRange(0.25, RGB(241, 233, 191));
	fractalCreator.addRange(0.35, RGB(248, 201, 95));
	fractalCreator.addRange(0.4, RGB(255, 170, 0));
	fractalCreator.addRange(0.45, RGB(204, 128, 0));
	fractalCreator.addRange(0.5, RGB(153, 87, 0));
	fractalCreator.addRange(1.0, RGB(106, 52, 3));
	*/

	// 1920x1080
	fractalCreator.addZoom(Zoom(361, 509, 0.1));
	fractalCreator.addZoom(Zoom(838, 586, 0.1));
	fractalCreator.addZoom(Zoom(1401, 1071, 0.1));

	// 800x600
	//fractalCreator.addZoom(Zoom(295, 202, 0.1));
	//fractalCreator.addZoom(Zoom(312, 304, 0.1));
	fractalCreator.run("test.bmp");

    return 0;
}