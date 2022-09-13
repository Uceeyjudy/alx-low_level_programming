#include "main.h"

/**
 * main - prints aphabets in lowercase
 *
 * Return: 0 when successfull
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
