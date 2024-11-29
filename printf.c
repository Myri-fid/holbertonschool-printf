#include "main.h" /* Inclut le fichier d'en-tête principal*/
#include <stdio.h>

/**
 * print_integer - Print arguments according to a format.
 * @args: arguments
 * Return: The number of characters printed (excluding null byte).
 */
int print_integer(va_list args)
{
	int num, mul, resultat = 0;

	mul = 1;
	num = va_arg(args, int);
	if (num < 0)
	{
		_putchar('-');
		resultat++;
		num = -1 * num;
	}
	while (num / mul > 9)
	{
		mul = mul * 10;
	}
	while (mul >= 1)
	{
		_putchar ((num / mul) % 10 + '0');
		mul = mul / 10;
		resultat++;
	}
	return (resultat);
}

/**
 * print_char_ptr - Print arguments according to a format.
 * @args: arguments
 * Return: The number of characters printed (excluding null byte).
 */
int print_char_ptr(va_list args)
{
	int resultat = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}

	while (*str) /* Parcourt chaque caractère de la chaîne*/
	{
		_putchar(*str);
		str++;
		resultat++;
	}
	return (resultat);
}
/**
 * print_char - Print arguments according to a format.
 * @args: argument
 * Return: The number of characters printed (excluding null byte).
 */
int print_char(va_list args)
{
	int resultat = 0;

	_putchar(va_arg(args, int));
		resultat++;
	return (resultat);
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
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (ptr = format; (*ptr != '\0'); ptr++)
	{
		if (*ptr == '%')
		{
			ptr++; /*Passe au caractère suivant*/
			if (*ptr == 'c')
				count += print_char(args);
			else if (*ptr == '%') /*Vérifie si le spécificateur est '%'*/
			{
				_putchar('%'); /* Imprime le caractère '%'*/
				count++;
			}
			else if (*ptr == 's')
				count += print_char_ptr(args);
			else if (*ptr == 'i' || *ptr == 'd')
				count += print_integer(args);
			else
			{
				_putchar('%');
				_putchar(*ptr);
			}
		}
		else
		{
			_putchar(*ptr); /*Imprime le caractère actuel qui n'est pas '%'*/
			count++;
		}
	}
	return (count);
}
