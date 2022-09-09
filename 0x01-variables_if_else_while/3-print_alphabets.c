#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alpUpper[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	for (i = 0; i < 52; i++)
	{
		putchar(alpUpper[i]);
	}
	putchar('\n');
	return (0);
}
