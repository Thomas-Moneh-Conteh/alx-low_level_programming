#include "main.h"
#include <string.h>

/**
 * _memcpy - Copies n bytes from memory are src to memory
 * area dest.
 * @dest: destination pointer
 * @src: source pointer.
 * @n: number of bytes to be filled
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
