#include "main.h"
#include <stdio.h>

/**
 * print_numbers - A function that prints the numbers (0 to 9),
 * followed by a newline.
 *
 * Return: always 0;
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
		putchar('\n');
}
