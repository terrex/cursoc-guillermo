#include <stdio.h>

int main()
{
    char *magic = (char*)0x00796177;
    printf("\nmagic = %p\n", magic);
    printf("magic = \"%s\"\n", (char *)(&magic));
    return 0;
}
