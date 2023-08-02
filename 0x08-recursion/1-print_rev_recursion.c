#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - A function that prints a string in reverse.
 * @s: The string to be reversed
 *
 * Return: 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	putchar(*s);
	}
}
