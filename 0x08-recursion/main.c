#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * n:
 * Return: factorial
 */
int main(void)
{
	int r;

	r = factorial(1);
	printf("%d\n", r);
	r = factorial(5);
        printf("%d\n", r);
	r = factorial(-1);
        printf("%d\n", r);
	return (0);
}
