#include "main.h"

/**
 * set_string - sets the string
 *
 * @s: pointer to pointer
 * @to: sets pointer to it
 * Return: pointer to char
 */
void set_string(char **s, char *to)
{
	int i;

	for (i = 0; i < (**s + *to); i++)
	{
		*to = **s;
	}
	return (s);
}
