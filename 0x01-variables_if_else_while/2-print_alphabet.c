#include <stdio.h>
/**
 * main - prints alphabets in uppercase then in lower case
 *
 * Return: 0 Always sucess
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
		int i;

		for (i = 0; i < 26; i++)
		{
			putchar(alph[i]);
		}
		putchar('\n');
		return (0);
}
