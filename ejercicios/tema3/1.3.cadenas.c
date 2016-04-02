#include <stdio.h>
#include <string.h>

int main()
{
	char cadena[] = "the quick brown fox jumps over the lazy dog";
	printf("Original: %s (%lu)\n", cadena, strlen(cadena));

	for (int i = 0; i < strlen(cadena); i++)
		if (cadena[i] != ' ')
			cadena[i] = (char) (cadena[i] - 0x20);
	printf("Todo mayusculas: %s\n", cadena);

	for (int i = 1; i < strlen(cadena); i++)
		if (cadena[i - 1] != ' ' && cadena[i] != ' ')
			cadena[i] = (char) (cadena[i] + 0x20);
	printf("Estilo Titulo: %s\n", cadena);

	return 0;
}
