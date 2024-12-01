#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    len = _printf("%i\n", INT_MIN);
    len2 = printf("%i\n", INT_MIN);
    printf("Length:[%d, %i]\n", len, len2);
    return (0);
}
