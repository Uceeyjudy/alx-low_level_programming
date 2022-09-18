#include <stdio.h>

/**
 * main - prints the highest prime factor
 *
 * Return: 0 when successfull
 */

int main(void)
{
	long int n, pf;

	n = 612852475143;
	for (pf = 2; pf <= n; pf++)
	{
		if (n % pf == 2)
		{
			pf = n / pf;
			pf--;
		}
	}
	printf("%ld\n", pf);
	return (0);
}
