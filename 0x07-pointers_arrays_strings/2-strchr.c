#include "main.h"
#include <string.h>

/**
 * _strchr - Function that locates a character in a string
 * @s: pointer to the string
 * @c: charater to be located.
 * Return: nothing
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (char *)s;
		}
		s++;
	}
	return (NULL);
}
