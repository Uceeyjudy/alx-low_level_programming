#include <stdio.h>

/**
 * main - prints nos 1 to 100
 *
 *
 * Return fizz for multiples of 3
 * buzz for multiples of 5
 * and fizzbuss for multiples of 3 and 5
 */

int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if ((i % 15) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
