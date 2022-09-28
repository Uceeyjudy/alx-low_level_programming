#include "main.h"
/**
 * factorial - factorial of numbers
 * @n: number
 * Return: the factorial of numbers
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n-1));
}
