#include "primitives.h"
#include "math.h"

double f(double x) { return cos(x) + sin(x); }

int main ()
{
	atom *a = new_atom(0,0,0);
	print_atom(a);

	material *m = new_material();
	// print_material(m);
	
	double int_ = integrate(f, 0, 1);
	printf("integral: %f\n", int_);

	double deriv = differentiate(f, 2);
	printf("derivative: %f\n", deriv);

	return 0;
}

