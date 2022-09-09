#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Will assign a random no to n
 *
 * Return: 0 Always correct
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	{
		printf("Last digit %d is %d and is greater than 5", n, m);
	}
	else if m == 0)
	{
		printf("Last digit %d is %d and is equal to zero", n, m);
	}
	else
	{
		printf("Last digit %d is %d and is less than 6 but greater than 0\n", n, m);
	}
	return (0);
}
