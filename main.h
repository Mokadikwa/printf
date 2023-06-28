#ifndef MAIN_H
#define MAIN_H

#ifndef _PUTCHAR_H
#define _PUTCHAR_H
#endif

#define MINUS (1 << 0)
#define PLUS (1 << 1)
#define ZERO (1 << 2)
#define HASH (1 << 3)
#define SPACE (1 << 4)

#include <stdio.h>
#include <stdarg.h>
<<<<<<< HEAD
#include <limits.:h>
=======
#include <limits.h>
#include <stdlib.h>

void print_binary(unsigned int num, int *count);
>>>>>>> a84aa0d18b8ef31e53d0c4f6e5902370c1a693be
int _printf(const char *format, ...);
void print_char(int c, int *count);
void print_string(char* s, int *count);
int flag(const char *format, int *x);
int _putchar(char c);
void print_decimal(int num, int *count);
int print_r(va_list list);
unsigned int len_num(unsigned int num, int base);
int string_reverse(char *r);
char *hexadecimal_num(int num);
int print_octal(va_list list);

#endif
=======
void handle_conversion_specifier(unsigned int value, char specifier);
#endif /* MAIN_H */
>>>>>>> a84aa0d18b8ef31e53d0c4f6e5902370c1a693be
