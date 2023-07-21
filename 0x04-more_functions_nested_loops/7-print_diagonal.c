#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - A function that draws a diagonal on the terminal.
 * @n: The number of times the character \ will be printed.
 * Return: always 0.
 */

void print_diagonal(int n)
{
	int i;
	int blank;

	for (i = 0; i < n; i++)
	{
	for (blank = 0; blank < i; blank++)
	{
		putchar(' ');
	}
		putchar('\\');
		putchar('\n');
	}

	if (n <= 0)
	{
		putchar('\n');
	}
}
