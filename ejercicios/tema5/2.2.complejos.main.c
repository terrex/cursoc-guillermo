#include <stdio.h>
#include "2.2.complejos.libcomplx.h"

int main(void)
{
	struct cmplx a, b, c, d;

	a.real = 2;
	a.img = 3;
	b.real = 4;
	b.img = 5;
	c.real = 6;
	c.img = 7;
	d.real = 8;
	d.img = 9;

	cmplx_print(&a);
	printf(" + ");
	cmplx_print(&b);
	printf(" = ");
	c = cmplx_sum(&a, &b);
	cmplx_print(&c);
	printf("\n");

	cmplx_print(&a);
	printf(" - ");
	cmplx_print(&b);
	printf(" = ");
	c = cmplx_sub(&a, &b);
	cmplx_print(&c);
	printf("\n");

	printf("abs");
	cmplx_print(&a);
	printf(" = ");
	printf("%lf", cmplx_abs(&a));
	printf("\n");

	printf("norm");
	cmplx_print(&d);
	cmplx_norm(&d);
	printf(" = ");
	cmplx_print(&d);
	printf("\n");

	return 0;
}
