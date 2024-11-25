#include "main.h"
/**
 *_printf - print arguments
 *@format: format
 *Return: value
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *ptr; /*Pointeur parcourir chaîne format*/

	va_start(args, format);
	for (ptr = format; *ptr != '\0'; ptr++)
	/*Parcourt chaque caractère de la chaîne format*/
	{
		if (*ptr == '%')
		{
			ptr++;
		if (*ptr == 'c')
		{
			_putchar(va_arg(args, int));
			count++; /*incrémente*/
		}
		else if (*ptr == 's')
		{
			char *str = va_arg(args, char *);
				while (*str)
				{
					_putchar(*str);
					str++;
					count++;
				}
		}
		else if (*ptr == '%')
		{
			_putchar('%');
			count++;
		}
		}
		else
		{
			_putchar(*ptr); /*affiche le caractere*/
			count++; /*incrémente*/
		}
	}
		va_end(args);
		return (count);
}
