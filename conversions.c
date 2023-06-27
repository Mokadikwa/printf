#include "main.h"

/**
 * print_decimal - prints a decimal integer and updates the count
 * @num: integer to be printed
 * @count: a pointer
 */

void print_decimal(int num, int *count)
{
	int digit = 0;
	int temp = num;

	if (num == 0)
	{
		_putchar('0');
		(*count)++;
	}
	else if (num < 0)
	{
		_putchar('-');
		(*count)++;
		num = -num;
	}

	if (count == NULL)
		return;

	while (temp != 0)
	{
		temp /= 10;
		digit++;
	}
	while (digit > 0)
	{
		int divisor = 1;
		int i;

		for (i = 1; i < digit; i++)
			divisor *= 10;

		if (divisor == 0)
			return;

		_putchar((num / divisor) + '0');
		(*count)++;

		num %= divisor;
		digit--;
	}
}
