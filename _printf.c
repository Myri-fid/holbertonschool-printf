#include "main.h"
/**
 * _printf - Print arguments according to a format.
 * @format: Format string containing the format specifiers.
 * Return: The number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...)
{
	unsigned int count = 0;
	va_list args; /* Déclare une liste pour les arguments variadiques*/
	const char *ptr; /* Déclare un pointeur pour parcourir la chaîne format*/
	for (ptr = format; (*ptr != '\0'); ptr++) /* Parcourt chaque caractère de la chaîne format*/
	{
		if (*ptr == '%') /* Vérifie si le caractère actuel est '%'*/
		{
			if (*ptr == '%')
			{
				_putchar('%');
			}
			else
			{
			print_t(ptr);
			count ++;
			}
			ptr++; /*Passe au caractère suivant*/
		}
		else
		{
			_putchar(*ptr); /*Imprime le caractère actuel qui n'est pas '%'*/
			count++; /*Incrémente le compteur*/
		}
	}
	return (count);
}
