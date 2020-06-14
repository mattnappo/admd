#include "math.h"

double integrate(
	double (*f)(double),
	double lower,
	double upper
) {
	double int_ = 0;
	for (double dx = lower; dx <= upper; dx += DX) {
		int_ += f(dx) * DX;
	}
	return int_;
}

double differentiate(double (*f)(double), double a)
{
	return (f(a + DX) - f(a)) / DX;
}

