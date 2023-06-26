#include "main.h"
/**
 * print_r - prints reverse order of strings
 * @list:list that increments
 *
 *i Return:number of characters to be printed
 */
int print_r(va_list list)
{
	int i = 0;

	char *c = va_arg(list, char *);
	int x, y;

	if (c == NULL)
		c = ")LLUN(";
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
