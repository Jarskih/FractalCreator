#pragma once
#include <string>
#include <iostream>
#include <cstdint>
#include <memory>
#include <math.h>
#include <vector>
#include <assert.h>
#include "Zoom.h"
#include "ZoomList.h"
#include "Bitmap.h"
#include "ZoomList.h"
#include "Mandelbrot.h"
#include "RGB.h"

using namespace std;

namespace home {

	class FractalCreator
	{
	private:
		int m_width{ 0 };
		int m_height{ 0 };
		unique_ptr<int[]> m_histogram{ nullptr };
		unique_ptr<int[]> m_fractal{ nullptr };
		Bitmap m_bitmap;
		ZoomList m_zoomList;
		int m_total{ 0 };

		vector<int> m_ranges;
		vector<RGB> m_colors;
		vector<int> m_rangeTotals;

		bool m_bGotFirstRange{ false };

	public:
		void run(string name);
		void addRange(double rangeEnd, const RGB& rgb);
		void addZoom(const Zoom& zoom);
		FractalCreator(int width, int height);
		virtual ~FractalCreator();
	private:
		void calculateIterations();
		void calculateTotalIterations();
		void calculateRangeTotals();
		void antialiaze(double x, double y);
		void drawFractal();
		void writeBitmap(string name);
		int getRange(int iterations) const;
	};
}