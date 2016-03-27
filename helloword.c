#include <stdio.h>

int main()
{
    char nombre[256];
    printf("Escriba su nombre: ");
    scanf("%s", nombre);
    printf("Hola %s!\n", nombre);

    return 0;
}

