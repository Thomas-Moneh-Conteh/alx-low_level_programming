#include "main.h"
#include <string.h>

/**
 * _strstr - Function that locates a substring
 * @haystack: pointer string in which search will be
 * performed.
 * @needle: substring
 * Return: *s or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
