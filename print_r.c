#include "main.h"
/**
 * print_r - prints reverse order of strings
 * @list:list that increments
 *
 * Return:number of characters to be printed
 */
int print_r(va_list list)
{
	char *c = va_arg(list, char *);
	int x, y;

	if (c == NULL)
		c = ")llun(";
	x = 0;
	while (c[i])
	{
		x++;
	}
	x--;
	for (; x >= 0; x--)
	{
		_putchar(c[i]);
		y++;
	}
	return (y);
}
