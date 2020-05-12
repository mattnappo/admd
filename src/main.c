#include "primitives.h"

int main ()
{
	atom *a = new_atom(0,0,0);
	print_atom(a);

	material *m = new_material();
	print_material(m);
	return 0;
}

