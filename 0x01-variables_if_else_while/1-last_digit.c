#include <stdlib.h>
#include <time.h>
/**
 * main - Will assign a random no to n
 *
 * Return: 0 Always correct
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (1 > 5)
	{
		printf("Last digit %d is %d and is greater than 5", n, 1);
	}
	else if (1 ==0 )
	{
		printf("Last digit %d is %d and is equal to zero", n, 1);
	}
	else
	{
		printf("Last digit %d is %d and is less than 6 but not greater than 0\n", n, 1);
	}
	return (0);
}
