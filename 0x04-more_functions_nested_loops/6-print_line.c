#include "main.h"
#include <stdio.h>

/**
 * print_line - A function that draws a straight line in the terminal
 *
 * @n: The number of times the character _ will be printed.
 *
 * Return: always 0.
 */

void print_line(int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		putchar('_');
	}
	putchar('\n');
}
