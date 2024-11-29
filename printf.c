#include "main.h" /* Inclut le fichier d'en-tête principal*/
#include <stdio.h>

/**
 * print_integer - Print arguments according to a format.
 * @args: arguments
 * Return: The number of characters printed (excluding null byte).
 */
void print_integer(va_list args)
{
	int num, mul;

	mul = 1;
	num = va_arg(args, int);
	if (num < 0)
	{
		_putchar('-');
		num = -1 * num;
	}
	while (num / mul > 9)
	{
		mul = mul * 10;
	}
	while (mul != 1)
	{
		_putchar ((num / mul) % 10 + '0');
		mul = mul / 10;
	}
	_putchar(num % 10 + '0');
}

/**
 * print_char_ptr - Print arguments according to a format.
 * @args: arguments
 * Return: The number of characters printed (excluding null byte).
 */
void print_char_ptr(va_list args)
{
	char *str = va_arg(args, char *);

	while (*str) /* Parcourt chaque caractère de la chaîne*/
	{
		_putchar(*str);
		str++;
	}
}

/**
 * _printf - Print arguments according to a format.
 * @format: format
 * Return: The number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *ptr;

	va_start(args, format);
	for (ptr = format; (*ptr != '\0'); ptr++)
	{
		if (*ptr == '%')
		{
			ptr++; /*Passe au caractère suivant*/
			if (*ptr == 'c')
			{
				_putchar(va_arg(args, int));
				count++; /*Incrémente le compteur*/
			}
			else if (*ptr == '%') /*Vérifie si le spécificateur est '%'*/
			{
				_putchar('%'); /* Imprime le caractère '%'*/
				count++; /*Incrémente le compteur*/
			}
			else if (*ptr == 's')
				print_char_ptr(args);
			else if (*ptr == 'i' || *ptr == 'd')
				print_integer(args);
		}
		else
		{
			_putchar(*ptr); /*Imprime le caractère actuel qui n'est pas '%'*/
			count++; /*Incrémente le compteur*/
		}
	}
	return (count);
}
