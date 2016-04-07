#include <stdio.h>

int main()
{
	int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

	// puntero a matriz bidimensional: es correcto pero innecesario
	//int ***A_p = (int ***) (&A);
	// mejor un alias a A
	int **A_p = (int **) (A);

	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			// es correcto
			// printf("  %04d", *(*(A_p + i) + j));
			// y así también
			printf("  %04d", (int) *(A_p + 3*i + j));
		}
		printf("\n");
	}

	return 0;
}