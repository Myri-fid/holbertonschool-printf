#include "main.h"

/**
 * print_double - print a double number with 4 decimal places
 * @args: the list of arguments
 * Return: 0
 */

void print_double(va_list args)
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
}
