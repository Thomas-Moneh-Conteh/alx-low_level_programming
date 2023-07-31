#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte.
 * @s: pointer variable
 * @b: The value to be set of type char
 * @n: The number of bytes to be filled
 *
 * Return: Returns s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
