#pragma once
#include <complex>

namespace home {
	class Mandelbrot
	{
	public:
		static const int MAX_ITERATIONS = 6000;
		static int getItenartions(double x, double y);
	};
}
