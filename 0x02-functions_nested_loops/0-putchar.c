#include <unistd.h>
#include <main.h>

/**
 * _putchar - prints _putchar
 *
 * Return: 0 if successful
 * -1 if not successful
 */

int _putchar(char, c)
{
	return (write(1, $c, 1));
}
