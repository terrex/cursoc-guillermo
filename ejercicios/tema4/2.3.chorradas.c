#include <stdio.h>
#include <stdint.h>

union string64
{
	char text[8];
	uint64_t numeric;
};

#define MAYUSC(c, out) do { \
    if (c >= 0x61 && c <= 0x7A) { out = c - 0x20; } \
    else if (c >= 0x41 && c <= 0x5A) {} \
    else { printf("ERROR: No es una letra, %s:%d\n", __FILE__, __LINE__); } \
} while (0);

int main()
{
	union string64 us64 = {'P', 'e' , 'r' , 'i', 'c', 'o'};

	printf("El texto es %s\n", us64.text);
	printf("En su representación numérica es %llu\n", us64.numeric);

	MAYUSC(us64.text[3], us64.text[3]);
	MAYUSC(us64.text[4], us64.text[4]);
	MAYUSC(us64.text[5], us64.text[5]);

	printf("El texto es %s\n", us64.text);
	printf("En su representación numérica es %llu\n", us64.numeric);

	us64.numeric = 776236472234;

	MAYUSC(us64.text[0], us64.text[0]);

	return 0;
}