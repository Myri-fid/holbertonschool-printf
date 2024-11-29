#ifndef main_h
#define main_h
#include <stdlib.h>
#include <stdarg.h>
char _putchar (char c);
int _printf(const char *format, ...);
void print_t(const char *format, ...);
int print_char(va_list args);
int print_integer(va_list args);
int print_char_ptr(va_list args);
void print_double(va_list args);
#endif
