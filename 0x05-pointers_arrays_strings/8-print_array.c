#include "main.h"

/**
 * print_array - prints the array of numbers
 * @a: input array
 * @n: number of elements
 * Return: does not return anything
 */
void print_array(int *a int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", (a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
