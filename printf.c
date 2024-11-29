#include "main.h"
#include <stdio.h>
/**
 * _printf - Print arguments according to a format.
 * @format: Format string containing the format specifiers.
 * Return: The number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...)
{
	va_list args; /* Déclare une liste pour les arguments variadiques*/
	int count = 0; /* Initialise le compteur de caractères imprimés à 0*/
	const char *ptr; /* Déclare un pointeur pour parcourir la chaîne format*/

	va_start(args, format); /* Initialise la liste d'arguments variadiques*/
	for (ptr = format; (*ptr != '\0'); ptr++)
	{
		if (*ptr == '%') /* Vérifie si le caractère actuel est '%'*/
		{
			ptr++; /*Passe au caractère suivant*/
			if (*ptr == 'c') /* Vérifie si le spécificateur est 'c'*/
			{
				_putchar(va_arg(args, int));
				count++; /*Incrémente le compteur*/
			}
			else if (*ptr == 's') /* Vérifie si le spécificateur est 's'*/
			{
				char *str = va_arg(args, char *);

				while (*str) /* Parcourt chaque caractère de la chaîne*/
				{
					_putchar(*str);
					str++;
					count++;
				}
			}
			else if (*ptr == '%')
			{
				_putchar('%'); /* Imprime le caractère '%'*/
			}
		}
		else
		{
			_putchar(*ptr); /*Imprime le caractère actuel qui n'est pas '%'*/
		}
		count++;
	}
	va_end(args);
	return (count);
}
