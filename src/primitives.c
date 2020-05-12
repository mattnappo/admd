#include "physics.h"

atom *new_atom(float x, float y, float v)
{
	atom *a = malloc(sizeof(atom *));
	a->x = x; a->y = y; a->v = v;
	return a;
}

int print_atom(atom *a)
{
	printf("(%f, %f) @ %f\n", a->x, a->y, a->v);
	return 0;
}

