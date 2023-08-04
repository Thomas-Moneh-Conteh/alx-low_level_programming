#include "main.h"
#include <string.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: pointer to the bytes
 * @accept: represent the set of characters to be searchedfor.
 * Return: *s
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *apt = accept;

		while (*apt)
		{
			if (*s == *apt)
			{
				return (s);
			}
			apt++;
		}
		s++;
	}
	return (NULL);
}
