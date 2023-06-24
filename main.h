#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char *format, ...);
void print_char(int c, int* count);
void print_string(char* s, int* count);

#endif
