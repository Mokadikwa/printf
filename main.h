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
#include <limits.h>

int _printf(const char *format, ...);
void print_char(int c, int* count);
void print_string(char* s, int* count);
int flag(const char *format, int *x);
int _putchar(char c);

#endif
