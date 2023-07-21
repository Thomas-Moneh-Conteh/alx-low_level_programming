#include "main.h"
#include <stdio.h>

/**
 * print_square - A function that prints a square, followed by a newline.
 * @size: The size be printed.
 * Return: always 0.
 */

void print_square(int size)
{
	int n;
	int s;

	for (n = 0; n < size; n++)
	{
		for (s = 0; s < size; s++)
		{
			putchar('#');
		}
		putchar('\n');
	}
	if (size <= 0)
	{
		putchar('\n');
	}
}
