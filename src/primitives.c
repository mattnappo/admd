#include "primitives.h"

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

material *new_material()
{
	material *m = malloc(sizeof(material));
	for (int i = 0; i < Y_MAT_SIZE; i++) {
		for (int j = 0; j < X_MAT_SIZE; j++) {
			m->A[i][j] = new_atom(i, j, 0);
		}
	}

	return m;
}

int print_material(material *m) {
	for (int i = 0; i < Y_MAT_SIZE; i++) {
		for (int j = 0; j < X_MAT_SIZE; j++) {
			print_atom(m->A[i][j]);
		}
	}
	
	return 0;
}

