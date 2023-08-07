#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - A function that concatenates two strings.
 * @s1: destination string
 * @s2: source string
 *
 * Return: always 0.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size_t length = strlen(s1) + strlen(s2) + 1;

	concat = (char *)malloc(length);

	if (concat == NULL)
	{
		return (NULL);
	}
	strcpy(concat, s1);
	strcat(concat, s2);

	return (concat);
}
