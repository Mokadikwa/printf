#include "main.h"

/**
 * print_decimal - prints a decimal integer and updates the count
 * @num: integer to be printed
 * @count: a pointer
 */

void print_decimal(int num, int *count)
{
	int digit;
	int reversed = 0;
	if (num == 0)
	{
		_putchar('0');
		(*count)++;
		return;
	}
	if (num < 0)
	{
		_putchar(('-'));
		(*count)++;
		num = -num;
	}
	while (num > 0)
	{
		reversed = (reversed * 10) + (num % 10);
		num /= 10;
	}
	while (reversed > 0)
	{
		digit = reversed % 10;
		_putchar(digit + '0');
		(*count)++;
		reversed /= 10;
	}
}
