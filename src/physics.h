#include <stdlib.h>
#include <stdio.h>

typedef struct atom {
	float x; float y;
	float v;
} atom;

atom *new_atom(float x, float y, float v);
int print_atom(atom *a);

