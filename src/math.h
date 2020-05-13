#include <math.h>

#define DX (float)0.000001

double integrate(double (*f)(double), double upper, double lower);
double differentiate(double (*f)(double), double a);

