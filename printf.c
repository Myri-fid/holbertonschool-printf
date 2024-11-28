#include "main.h"
/**
 * _printf - Print arguments according to a format.
 * @format: Format string containing the format specifiers.
 * Return: The number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...)
{
	unsigned int count = 0;
	va_list args; /* Déclare une liste */
	const char *ptr; /* Déclare pointeur pour parcourir la chaîne*/

	for (ptr = format; (*ptr != '\0'); ptr++)
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
				count++;
			}
			ptr++; /*Passe au caractère suivant*/
		}
		else
		{
			_putchar(*ptr); /*caractère n'est pas '%'*/
			count++; /*Incrémente le compteur*/
		}
	}
	return (count);
}
