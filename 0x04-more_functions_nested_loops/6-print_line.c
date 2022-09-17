#include "main.h"

/**
 * print_line - prints a straigt line
 * @n: the number of lines to print
 * Return: n number of lines
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
