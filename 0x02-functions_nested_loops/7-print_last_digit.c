#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: the digit to be printed
 * Return: always 0.
 */

int print_last_digit(int n)
{
	int d;

	d = n % 10;
	if (d < 0)
	{
		d = d * -1;
	}
	putchar(d + '0');
	return (d);
}
