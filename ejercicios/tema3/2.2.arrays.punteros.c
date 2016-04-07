#include <stdio.h>
#include <string.h>

int main(void)
{
	int A[5] = {0, 1, 2, 3, 4};
	float B[5] = {10.1, 10.2, 10.3, 10.4, 10.5};
	float C[5];

	int *A_p = A;
	float *B_p = B;
	float *C_p;
	int i;

	/* forma 1: Contador e incremento de puntero */
	printf("A[5] = ");
	for (i = 0; i < 5; i++)
		printf("% 5d\t", *A_p++);
	printf("\n");

	printf("B[5] = ");
	for (i = 0; i < 5; i++)
		printf("%2.2f\t", *B_p++);
	printf("\n");

	/* forma 3: Contador y puntero como array */
	for (i = 0, C_p = C, A_p = A, B_p = B; i < 5; i++)
		C_p[i] = A_p[i] * B_p[i];

	/*
	 * La diferencia entre declararlo como
	 * char *cadena y como char cadena[] es:
	 * - con *cadena se guarda en memoria no modificable, da un SIGSEV
	 *   al intentar modificar un caracter de la cadena, en el punto [$$1].
	 * - con cadena[] sin embargo se marca la zona como modificable, y
	 *   no hay violación del uso permitido.
	 *
	 * Pensaba que para hacer esa distinción estaba el
	 * modificador `const' ¿?¿?¿!
	 *
	 * char *cadena = "the quick brown fox jumps over the lazy dog";
	 */
	char cadena[] = "the quick brown fox jumps over the lazy dog";
	char *cadena_a_p, *cadena_b_p;
	char temp;

	printf("cadena inicial: %s\n", cadena);
	/* forma 2: Incremento de puntero y comparacion de direcciones */
	for (cadena_a_p = cadena, cadena_b_p = cadena + strlen(cadena) - 1;
		cadena_a_p != cadena_b_p; cadena_a_p++, cadena_b_p--) {
		temp = (char) (*cadena_b_p);
		printf("cambio %c por %c\n", temp, (char) (*cadena_a_p));
		*cadena_b_p = (char) (*cadena_a_p); /* posible SIGSEV [$$1] */
		*cadena_a_p = temp;
	}
	printf("cadena invertida: %s\n", cadena);

	return 0;
}
