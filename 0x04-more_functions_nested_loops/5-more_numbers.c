#include "main.h"
#include <stdio.h>

/**
 * more_numbers - A function that prints 10 times the numbers (0 to 14);
 * followed by a newline.
 * Return: always 0.
 */

void more_numbers(void)
{
	int m;
	int n;

	for (m = 0; m < 10; m++)
	{
	for (n = 0; n <= 14; n++)
	{
	if (n >= 10)
	{
	putchar(n / 10 + '0');
	}
	putchar(n % 10 + '0');
	}
	putchar('\n');
	}
}
