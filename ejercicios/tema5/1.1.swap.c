#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int x = 263;
	int y = 161;

	printf("Antes del intercambio:   x=%d, y=%d\n", x, y);

	swap(&x, &y);

	printf("Despues del intercambio: x=%d, y=%d\n", x, y);

	return 0;
}
