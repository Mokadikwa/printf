#include <stdio.h>
#include <stdlib.h>
#include <main.h>
/**
 *string_reverse -reverses a string
 *@r:string to reverse
 *Return:pointer to string reversed
 */
char *string_reverse(char *r)
{
	int x, max, half;
	char start, end;

	x = 0;
	while (r[x] != '\0')
	{
		x++;
	}
	max = x - 1;
	half = max / 2;

	while (half >= 0)
	{
		start = r[max - half];
		last = r[half];
		r[half] = start;
		r[max - half] = end;
		half--;
	}
	return (r);
}
/**
 *len_num - finds length of number
 *@num: checked number
 *@base: number to be calculated
 *Return:number length
 */
unsigned int len_num(unsigned int num, int base)
{
	unsigned int x;

	for (x = 0; num > 0; x++)
	{
		num = num / base;
	}
	return (x);
}
/**
 *hexadecimal_num - converts to hexadecimal
 *@num:input
 *Return:pointer
 */
char *hexadecimal_num(int num)
{
	char *s;
	int i, length;

	i = 0;
	length =len_num(num, 16);
	s = malloc((sizeof(char) * length) + 1);
	if (num == 0)
	{
		s[i] = 0;
	}
	i = 0;
	while (num > 0)
	{
		if ((num % 16) < 10)
		{
			s[i] = (num % 16) + 48;
			i++;
		}
		else
		{
			s[i] = (num % 16) + 55;
			i++;
		}
		num /= 16;
	}
	string_reverse(s);
	return (s);
}
