#include <stdio.h>
#include <stdint.h>

union string64 {
	char text[8];
	uint64_t numeric;
};

#define MAYUSC(c, out) do { \
	if ((c) >= 'a' && (c) <= 'z') \
		(out) = (c) - 0x20; \
	else if ((c) >= 'A' && (c) <= 'Z') \
		; \
	else \
		printf("ERROR: No es una letra, %s:%d\n", __FILE__, __LINE__); \
} while (0)

int main(void)
{
	union string64 us64 = {{'P', 'e', 'r', 'i', 'c', 'o', '\0'} };

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
