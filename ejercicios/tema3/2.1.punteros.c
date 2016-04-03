#include <stdio.h>

int main()
{
	char letra = 'g'; // 103
	int numero = 666;
	
	char *letra_p = &letra;
	int *numero_p = &numero;

	// desrrefencia char*, obtengo char, moldeo a int, y posterior autosuma.
	*numero_p += (int) (*letra_p); // 666 + 103 = 769

	printf("Resultado: %d\n", *numero_p); // 769

	return 0;
}