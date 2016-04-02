#include <stdio.h>
#include <string.h>

int main()
{
	char *cadena = "the quick brown fox jumps over the lazy dog";
	printf("Original: %s (%d)\n", cadena, strlen(cadena));

	for (int i = 0; i < strlen(cadena) -1; i++)
		cadena[i] = cadena[i] - 0x20;
	//printf("Todo mayusculas: %s\n", cadena);

	return 0;
}