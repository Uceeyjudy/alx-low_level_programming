#include "main.h"

/**
 * _strlen - lenght of string
 * @s: the string given
 * Return: retruns the lengt of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != "\0")
		count ++;
	return (count);
}
