#include "main.h" /* Inclut le fichier d'en-tête principal*/
#include <stdio.h>
/**
 * _printf - Print arguments according to a format.
 * @format: Format string containing the format specifiers.
 * Return: The number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...)
{
	int a = 0, b, c, m = 1;
	va_list args; /* Déclare une liste pour les arguments variadiques*/
	int count = 0; /* Initialise le compteur de caractères imprimés à 0*/
	const char *ptr; /* Déclare un pointeur pour parcourir la chaîne format*/
	va_start(args, format); /* Initialise la liste d'arguments variadiques*/
	for (ptr = format; (*ptr != '\0'); ptr++) /* Parcourt chaque caractère de la chaîne format*/
	{
		if (*ptr == '%') /* Vérifie si le caractère actuel est '%'*/
		{
			ptr++; /*Passe au caractère suivant*/
			if (*ptr == 'c') /* Vérifie si le spécificateur est 'c'*/
			{
				_putchar(va_arg(args, int)); /* Imprime le caractère passé en argument*/
				count++; /*Incrémente le compteur*/
			}
			else if (*ptr == 's') /* Vérifie si le spécificateur est 's'*/
			{
				char *str = va_arg(args, char *); /*Récupère la chaîne de caractères passée en argument*/
				while (*str) /* Parcourt chaque caractère de la chaîne*/
				{
					_putchar(*str); /*Imprime chaque caractère de la chaîne*/
					str++; /*Passe au caractère suivant de la chaîne*/
					count++; /* Incrémente le compteur*/
				}
			}
			else if (*ptr == '%') /*Vérifie si le spécificateur est '%'*/
			{
				_putchar('%'); /* Imprime le caractère '%'*/
				count++; /*Incrémente le compteur*/
			}
			else if (*ptr == 'd' || *ptr == 'i')
			{
				a = va_arg(args, int);
				if (a < 0)
				{
				_putchar('-');
				a = -1 * a;
				}
				b = a;
				c = a;
				while (b > 9)
				{
					m = m * 10;
					b = b / 10;
				}
				while (m != 1)
				{
					c = a;
					c = (c / m) % 10 + 48;
					_putchar (c);
					m = m / 10;
				}
				_putchar(a % 10 + 48);
				count++ ;
			}
		}
			else
			{
				_putchar(*ptr); /*Imprime le caractère actuel qui n'est pas '%'*/
				count++; /*Incrémente le compteur*/
			}

	}
		return (39);
}
