#include "main.h"
#include <string.h>

/**
 * _strspn - Function that gets the length of a prefix
 * substring.
 * @s: pointer to the null-terminated strig
 * @accept: contains number of bytes.
 *
 * Return: length.
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = 0;
	int f = 1;

	while (s && f)
	{
		char *apt = accept;

		f = 0;
		while (*apt)
		{
			if (*s == *apt)
			{
				f = 1;
				break;
			}
			apt++;
		}
		if (f)
		{
			len++;
			s++;
		}
	}
	return (len);
}
