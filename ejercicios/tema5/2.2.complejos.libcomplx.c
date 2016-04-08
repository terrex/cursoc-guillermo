#include "2.2.complejos.libcomplx.h"
#include <stdio.h>
#include <math.h>

struct cmplx cmplx_sum(const struct cmplx *a, const struct cmplx *b)
{
	struct cmplx result;

	result.real = a->real + b->real;
	result.img = a->img + b->img;
	return result;
}

struct cmplx cmplx_sub(const struct cmplx *a, const struct cmplx *b)
{
	struct cmplx result;

	result.real = a->real - b->real;
	result.img = a->img - b->img;
	return result;
}

double cmplx_abs(const struct cmplx *c)
{
	double result;

	result = sqrt(c->real * c->real + c->img * c->img);
	return result;
}

void cmplx_norm(struct cmplx *c)
{
	/* no sé que es cmplx_norm */
	c->real = 1 / c->real;
	c->img  = 1 / c->img;
}

void cmplx_print(const struct cmplx *c)
{
	printf("(%lf + %lfi)", c->real, c->img);
}
