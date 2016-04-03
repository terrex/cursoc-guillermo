#include <stdio.h>
#include <stdint.h>

union string64
{
	char text[8];
	uint64_t numeric;
};

int main()
{
	union string64 us64 = {'P', 'e' , 'r' , 'i', 'c', 'o'};
	printf("El texto es %s\n", us64.text);
	printf("En su representación numérica es %llu\n", us64.numeric);

	return 0;
}