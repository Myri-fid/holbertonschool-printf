#include <stdarg.h>
#include "main.h"

/**
 * print_all -  prints anything
 * @format: A string of characters representing the argument types
 * Retunr: 0
 */
void print_t(const char *format, ...)
{
va_list args;

what_format form_types[] = {
{"c", print_char},
{"i", print_integer},
{"d", print_float},
{"s", print_char_ptr},
{"%", print_porcentage},
{0, NULL}
};
unsigned int i = 0, j = 0;
va_start(args, format);
while (format != NULL && format[i])
{
j = 0;
while (j < 6)
{
if (format[i] == *form_types[j].type)
{
form_types[j].f(args);
}
j++;
}
i++;
}
va_end(args);
}
