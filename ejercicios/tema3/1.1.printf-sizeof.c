#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main()
{
    uint8_t a = 55;
    int64_t *b = (int64_t *) 33848, c = 87773272636473231;
    char d = 'r';
    long double e = c * c / sqrt(c);

    printf("variable de tipo uint8_t con nombre a y valor %d, de tamaño %lu byte\n", a, sizeof(a));
    printf("variable de tipo int64_t* con nombre b y valor %p, de tamaño %lu byte\n", b, sizeof(b));
    printf("variable de tipo int64_t con nombre c y valor %lld, de tamaño %lu byte\n", c, sizeof(c));
    printf("variable de tipo char con nombre d y valor %c, de tamaño %lu byte\n", d, sizeof(d));
    printf("variable de tipo long double con nombre e y valor %Lf, de tamaño %lu byte\n", e, sizeof(e));

	return 0;
}
