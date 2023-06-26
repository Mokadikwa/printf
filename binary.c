#include "main.h"

/**
 * print_binary - handles custom conversion specifier
 * @num unsigned int:
 * @count: integer count
 *
 * Return: void
 */

void print_binary(unsigned int num, int *count)
{
	int binary[32];
	int i = 0;
	int j;

	if (num == 0)
	{
		print_char('0', count);
			return;
	}

	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		print_char(binary[j] + '0', count);
	}
}
