#include "main.h"

/**
 * print_last_digit - prints the last digit
 * of a number
 *
 * @n: interger number
 *
 * Return: value of the last digit no
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
	{
		_putchar(-lastDigit + 48);
		return (-lastDigit);
	}
	else
	{
		_putchar(lastDigit + 48);
		return (lastDigit);
	}
}
