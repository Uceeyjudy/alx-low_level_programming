#include "main.h"

/**
 * print_sign - prints the sign
 *
 * @n: Ascii number
 *
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 48)
	{
		return (1);
		printf("+");
	}
	else if (n == 0)
	{
		return (0);
		printf(0);
	}
	else
	{
		return (-1);
		printf("-")
	}
	_putchar('\n');
}
