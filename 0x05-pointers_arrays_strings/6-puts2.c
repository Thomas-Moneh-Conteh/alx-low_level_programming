#include "main.h"
#include <stdio.h>

/**
 * puts2 - A function that prints every other character of a
 * string, starting with the first character,
 * followed by a new line.
 * @str: string to be printed.
 *
 * Return: always 0;
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
}
