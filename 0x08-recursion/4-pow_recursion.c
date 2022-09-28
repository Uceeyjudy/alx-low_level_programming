#include "main.h"
/**
 * _power_recursion - returns the value of x raised to y
 * @x: base
 * @y: power
 * Return: value of the exponetiation
 */
int _power_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _power_recursion(x, y - 1));
}
