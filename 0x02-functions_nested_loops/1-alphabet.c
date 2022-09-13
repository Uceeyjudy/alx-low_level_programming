#include "main.h"

/**
 * print_alphabet - prints aphabets in lowercase
 *
 * Return: 0 when successfull
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
