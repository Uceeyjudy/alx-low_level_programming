#include "main.h"

/**
 * _abs - similar function to abs
 * computs absolute value of a number
 *
 * @i: Ascii value
 *
 * Return: absolute value
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
