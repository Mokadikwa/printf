#include "main.h"

/**
 * print_decimal - prints a decimal integer and updates the count
 * @num: integer to be printed
 * @count: a pointer
 */

void print_decimal(int num, int *count)
{
	int digits = 0;
	int temp = num;

	if (num == 0)
	{
		_putchar('0');
	}
	else if (num < 0)
	{
		_putchar('-');
		(*count)++;

		num = -num;
	}
	while (temp != 0)
	{
		temp /= 10;
		digits++;
	}
	while (digits > 0)
	{
		int divisor = 1;
		int i;

		for (i = 1; i < digits; i++)
			divisor *= 10;

		_putchar((num / divisor) + '0');
		(*count)++;

		num %= divisor;
		digits--;
	}
}
