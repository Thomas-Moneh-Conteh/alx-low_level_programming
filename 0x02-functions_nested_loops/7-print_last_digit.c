#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: the digit to be printed
 * Return: always 0.
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
