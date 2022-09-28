#include "main.h"
/**
 * is_prime - detects if input number is a prime number
 * @n: input number
 * @c: iterator
 * Return: 1 if it is a prime number and 0 if other number
 */

int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == 0)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}

/**
 * is_prime_number - detects if number is prime number
 * @n: input number
 * Return: 1 if prime and 0 for others
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
