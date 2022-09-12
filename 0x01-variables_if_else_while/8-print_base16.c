#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase, followed by a new line.
 *
 * Return: 0 Always successful
 */

int main(void)
{
	int i;
	
	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar(i);
	return (0);
}
