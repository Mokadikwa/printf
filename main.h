#ifndef MAIN_H
#define MAIN_H

#define MINUS 1
#define PLUS 2
#define ZERO 4
#define HASH 8
#define SPACE 16

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char *format, ...);
void print_char(int c, int* count);
void print_string(char* s, int* count);
int flag(const char *format, int *x);

#endif
