#include "main.h"
/**
 * flags - gives active flags
 * @format: string to print argument
 * @x: parameter
 * Return: number of flags
 */
int flags(const char *format, int *x)
{
	int w, valid_i;
	int initial = 0;

	const char C[] = {'-', '+', '0', '#', ' ', '\0'};
	const int NAMES[] = {MINUS, PLUS, ZERO, HASH, SPACE, 0};

	for (valid_i = *i + 1; format[valid_i] != '\0'; valid_i++)
	{
		for (w = 0; C[w] != '\0'; w++)
			if (format[valid_i] == C[w])
			{
				initial |= NAME[w];
				break;
			}

		if (C[w] == 0)
			break;
	}

	*i = valid_i - 1;

	return (initial);
}
