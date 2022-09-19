#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: input string
 * Return: does not return anything
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_purchar(str[count]);
		count++;
	}
}
