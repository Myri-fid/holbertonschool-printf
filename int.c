#include "main.h"

void print_integer(va_list args)
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
}
