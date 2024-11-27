#ifndef main_h
#define main_h
#include <stdlib.h>
#include <stdarg.h>
char _putchar (char c);
int _printf(const char *format, ...);
typedef struct what_format
{
char *type;
void (*f)(char *separator, va_list args);
}what_format;
int	sum_them_all(const unsigned int n, ...);
void	print_numbers(const char *separator, const unsigned int n, ...);
void	print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_char(char *separator, va_list args);
void print_integer(char *separator, va_list args);
void print_porcentage(char *separator, va_list args);
void print_char_ptr(char *separator, va_list args);
#endif
