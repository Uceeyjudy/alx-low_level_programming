#include "main.h"

/**
 * _isalpha - Checks the code if alphabet
 *
 * @c: Ascii characters
 *
 * Return: 1 if alphabet and 0 for others
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
