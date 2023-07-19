#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @d: the digit to be printed
 * Return: always 0.
 */

int print_last_digit(int d)
{
if (d < 0)
d = -d;

last_digit = d % 10;

putchar(last_digit + '0');
return (last_digit);
}
