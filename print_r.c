#include "main.h"
/**
 * print_r - prints reverse order of strings
 * @list:list that increments
 *
 * Return:number of characters to be printed
 */
int print_r(va_list list)
{
	int y = 0;

	char *c = va_arg(list, char *);
	int x;

	if (c == NULL)
		c = "(NULL)";
	x = 0;
	while (c[x])
	{
		x++;
	}
	x--;
	for (; x >= 0; x--)
	{
		_putchar(c[x]);
		y++;
	}
	return (y);
}
