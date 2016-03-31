#include <stdio.h>

int main()
{
    char *magic = 0x00796177;
    printf("\nmagic = %0x\n", magic);
    printf("magic = \"%s\"\n", (char *)(&magic));
    return 0;
}
