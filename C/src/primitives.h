#include <stdlib.h>
#include <stdio.h>
#include "constants.h"

typedef struct atom {
	float x; float y;
	float v;
} atom;

atom *new_atom(float x, float y, float v);
int print_atom(atom *a);

typedef struct material {
	atom *A[Y_MAT_SIZE][X_MAT_SIZE];
} material;

material *new_material();
int print_material(material *m);

