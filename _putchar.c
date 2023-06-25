#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character to standard output
 * @c: character to print
 *
 * Return: results
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
