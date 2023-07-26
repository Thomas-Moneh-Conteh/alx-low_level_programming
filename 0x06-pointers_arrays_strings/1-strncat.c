#include "main.h"
#include <string.h>

/**
 * _strncat - A function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number to be specified in the dest string
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest);
	int j;

	for (j = 0; j < n && *src; src++, j++)
	{
		dest[i + j] = *src;
	}
	dest[i + j] = '\0';
	return (dest);
}
