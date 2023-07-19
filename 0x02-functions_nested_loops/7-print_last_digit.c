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
	last_digit = d % 10;
	putchar('0' + last_digit % 10);
	return (last_digit);
}
