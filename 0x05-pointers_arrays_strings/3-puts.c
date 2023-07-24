#include "main.h"
#include <stdio.h>

/**
 * _puts - A function that prints a string,
 * followed by a new line, to stdout.
 * @str: string to be printed.
 *
 * Return: always 0.
 */

void _puts(char *str)
{
	fputs(str, stdout);
	putchar('\n');
}
