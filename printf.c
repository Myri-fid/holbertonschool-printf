#include "main.h"
/**
 * _printf - Print arguments according to a format.
 * @format: Format string containing the format specifiers.
 * Return: The number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *ptr;

	va_start(args, format);
	if (format == NULL)
		return (0);
	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr == 'c')
			{
				_putchar(va_arg(args, int));
				count++;
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
			_putchar(*ptr);
			count++;
		}
	}
	va_end(args);
	return (count);
}
