#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - A function that prints a string,
 * in reverse, followed by a new line.
 * @s: string to be reversed.
 *
 * Return: always 0.
 */
void print_rev(char *s)
{
	int length = strlen(s);
	int n;

	for (n = length - 1; n >= 0; n--)
	{
		putchar(s[n]);
	}
	putchar('\n');
}
