#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @d: the digit to be printed
 * Return: always 0.
 */

int print_last_digit(int d)
{
	int i;

	if (d < 0)
	d = -d;

	i = d % 10;

	if (i < 0)
	i = -i;

	putchar(i + '0');
	return (i);
}
