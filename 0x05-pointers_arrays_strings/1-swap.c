#include "main.h"
/**
 * swap_int - swappes the value of intergers
 * @a: first interger
 * @b: seconde interger
 * Return: no return value
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
