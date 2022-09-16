#include "main.h"

/**
 * _isdigit - checks for nos 0 to 9
 * @c: the number to check
 *
 * Return: 1 if it is a number
 * and 0 if not a number
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
