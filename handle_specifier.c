#include "main.h"

/**
 * handle_conversion_specifier - handles conversion specifiers
 * @value: value you want to convert
 * @specifier: specifiers the desired format or type of conversion
 *
 * Return: void
 */

void handle_conversion_specifier(unsigned int value, char specifier)
{
	switch (specifier)
	{
		case 'u':
			_printf("%u\n", value);
			break;
		case 'o':
			_printf("%o\n", value);
			break;
		case 'x':
			_printf("%x\n", value);
			break;
		case 'X':
			_printf("%X\n", value);
			break;
		default:
			_printf("%c\n", specifier);
	}
}
