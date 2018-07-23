#include "stdafx.h"
#include "Mandelbrot.h"

namespace home {
	int Mandelbrot::getItenartions(double x, double y) {

		std::complex<double> z = 0;
		std::complex<double> c(x, y);

		int iterations = 0;

		while (iterations < MAX_ITERATIONS) {
			z = z*z + c;

			if (abs(z) > 2) {
				break;
			}
			iterations++;
		}
		return iterations;
	}
}
