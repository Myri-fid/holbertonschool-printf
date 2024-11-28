#ifndef main_h
#define main_h
#include <stdlib.h>
#include <stdarg.h>
char _putchar (char c);
int _printf(const char *format, ...);
typedef struct what_format
{
	char *type;
	void (*f)(va_list args);
} what_format;
void print_t(const char * const format, ...);
void print_char(va_list args);
void print_integer(va_list args);
void print_porcentage(va_list args);
void print_char_ptr(va_list args);
void print_double(va_list args);
void print_char(va_list args)
{
	_putchar(va_arg(args, int)); /* Imprime le caractère passé en argument*/
}
/*
 * print_char_ptr - print character
 * @args: Argument list containing the string to print.
 * Description: This function takes the first argument from the va_list
 * Return: void
 */
void print_char_ptr(va_list args)
{
	char *str = va_arg(args, char *); /*Récupère chaîne de caractères*/

	while (*str) /* Parcourt chaque caractère de la chaîne*/
	{
		_putchar(*str); /*Imprime chaque caractère de la chaîne*/
		str++; /*Passe au caractère suivant de la chaîne*/
	}
}
#endif
