#include <stdio.h>

#define MAYUSC(c, out) do { \
    if (c >= 0x61 && c <= 0x7A) { out = c - 0x20; } \
    else if (c >= 0x41 && c <= 0x5A) {} \
    else { printf("ERROR: No es una letra, %s:%d\n", __FILE__, __LINE__); } \
} while (0);

int main()
{
	char a = 'a';
	char b = 'b';
	char A = '0';
	char B = '0';

	MAYUSC(a, A);
	printf("la letra %c en mayusculas es %c\n", a, A);

	MAYUSC(B, B);
	printf("la letra %c en mayusculas es %c\n", B, B);

	MAYUSC('R', B);
	printf("la letra %c en mayusculas es %c\n", 'R', B);

	MAYUSC('b', B);
	printf("la letra %c en mayusculas es %c\n", 'b', B);

	MAYUSC('z', B);
	printf("la letra %c en mayusculas es %c\n", 'z', B);

	MAYUSC('4', B);
	printf("la letra %c en mayusculas es %c\n", '4', B);

	return 0;
}