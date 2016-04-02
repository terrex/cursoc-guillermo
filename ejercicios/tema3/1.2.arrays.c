#include <stdio.h>

void print_array(int arr[], int count)
{
	for (int i = 0; i < count; i++)
		printf("%d, ", arr[i]);
	printf("\n\n");
}

int main()
{
	int my_array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	// a) Recorre e imprime el array
	for (int i = 0; i < 10; i++)
		printf("%d, ", my_array[i]);
	printf("\n\n");

	// b) Recorrer los elementos pares en orden inverso
	// (entiendo pares en el sentido 1-based indexing)
	for (int i = 9; i >= 0; i -= 2)
		printf("%d, ", my_array[i]);
	printf("\n\n");

	// c) shift una posición
	int temp = my_array[0];
	for (int i = 0; i < 9; i++)
		my_array[i] = my_array[i + 1];
	my_array[9] = temp;
	print_array(my_array, 10);
	
	// d) unshift una posición
	temp = my_array[9];
	for (int i = 9; i > 0; i--)
		my_array[i] = my_array[i - 1];
	my_array[0] = temp;
	print_array(my_array, 10);

	// e) espeja el array
	for (int i = 0; i < 10 / 2; i++)
		my_array[i] = my_array[9 - i];
	print_array(my_array, 10);

	return 0;
}
