#include "main.h"
#include <string.h>

/**
 * rev_string - A function that reverses a string.
 * @s: String to be reversed.
 *
 * Return: always 0.
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int i;
	int j;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		char tmp = s[i];

		s[i] = s[j];
		s[j] = tmp;
	}
}
