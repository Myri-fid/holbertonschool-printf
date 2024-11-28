#include "main.h" /* Inclut le fichier d'en-tête principal*/
#include <stdio.h>
/**
 * _printf - Print arguments according to a format.
 * @format: Format string containing the format specifiers.
 * Return: The number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...)
{
	int num, mul = 1, de_d, j = 1;
	float num2, de_p;
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
			else if (*ptr == 'i')
			{
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
				count++ ;
			}
			else if (*ptr == 'd')
			{
				num2 = va_arg(args, double);
				mul = 1;
				while ((int)num2 / mul > 9)
				{
					mul = mul * 10;
				}
				while (mul != 1)
				{
					_putchar (((int)num2 / mul) % 10 + '0');
					mul = mul / 10;
				}
				_putchar((int)num2 % 10 + '0');
				/*Afficher le point décimal*/
				if ((num2 - (int)num2) != 0)
				{
					_putchar('.');
					de_p = num2 - (int)num2;
					while (j < 4)
					{
						de_p = 10 * de_p;
						de_d = (int)de_p;
						_putchar(de_d + '0');
						de_p = de_p - de_d;
						j++;
					}
				}
				count++;
			}
		}
		else
		{
			_putchar(*ptr); /*Imprime le caractère actuel qui n'est pas '%'*/
			count++; /*Incrémente le compteur*/
		}
	}
	return (count);
}
