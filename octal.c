#include <main.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *print_octal - prints octal form of a number
 *@list:incremental list
 *Return:numbers
 */
int print_octal(va_list list)
{
	unsigned int num;
	int x, w, length;
	char *s;

	num = va_arg(list, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	length = len_num(num, 8);
	s = malloc((sizeof(char) * length) + 1);
	if (s == NULL)
	{
		return (-1);
	}
	x = 0;
	while (num > 0)
	{
		s[x] = num % 8;
		num = num / 8;
		x++;
	}
	for (w = (x - 1); w >= 0; w--)
	{
		_putchar(s[w] + '0');
	}
	free(s);
	return (length);
