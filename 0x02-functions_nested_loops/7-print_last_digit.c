#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @d: the digit to be printed
 * Return: always 0.
 */

int print_last_digit(int d)
{
	int last_digit;

	if (d < 0)
	d = -d;
	last_digit = d % 100;
	putchar('0' + last_digit / 100);
	return (last_digit);
}
