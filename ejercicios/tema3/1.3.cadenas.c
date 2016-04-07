#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
	char cadena[] = "the quick brown fox jumps over the lazy dog";
	//char cadena[] = "the quick brown fox, jumps over the lazy dog";
	//char cadena[] = "t";
	//char cadena[] = "";
	printf("Original: %s (%lu)\n", cadena, strlen(cadena));

	for (int i = 0; i < strlen(cadena); i++)
		if (cadena[i] >= 'a' && cadena[i] <= 'z')
			cadena[i] = (char) (cadena[i] - 0x20);
	printf("Todo mayusculas: %s\n", cadena);

	bool espacio_anterior = true;
	for (int i = 0; i < strlen(cadena); i++) {
		if (espacio_anterior) {
			if (cadena[i] >= 'a' && cadena[i] <= 'z')
				cadena[i] = (char) (cadena[i] - 0x20);
		} else {
			if (cadena[i] >= 'A' && cadena[i] <= 'Z')
				cadena[i] = (char) (cadena[i] + 0x20);
		}

		espacio_anterior = (bool) (cadena[i] == ' ');
	}
	printf("Estilo Titulo: %s\n", cadena);

	return 0;
}
