#include "main.h"

/**
 * print_char - prints a character and updates the count
 * @c: character to be printed
 * @count: A pointer to the count variable
 *
 * Return: Results
 */

void print_char(int c, int *count)
{
	_putchar(c);
	(*count)++;
}

/**
 * print_string - prints a string and updates the count
 * @s: the string to be printed
 * @count: a pointerer to the count variable
 *
 * Return: results
 */
void print_string(char *s, int *count)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		(*count)++;
	}
	if (*s == NULL)
		return (-1);
}

/**
 * _printf -  a function that produces output according to a format
 * @format: is a character string
 *
 * Return: results
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
			{
				format++;
				if (*format == 'c')
				{
					int c = va_arg(args, int);

					print_char(c, &count);
				}
				else if (*format == 's')
				{
					char *s = va_arg(args, char*);

					print_string(s, &count);
				}
				else if (*format == '%')
				{
					print_char('%', &count);
				}
				else if (*format == 'd' || *format == 'i')
				{
					int num = va_arg(args, int);

					print_decimal(num, &count);
				}
			}
		else
		{
			print_char(*format, &count);
		}
		format++;
	}
	va_end(args);
	return (count);
}
