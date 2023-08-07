#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given
 * as a parameter.
 * @str: The string the pointer to be allocted
 *
 * Return: always 0.
 */

char *_strdup(char *str)
{
	char *dpt;

	if (str == NULL)
	{
		return (NULL);
	}
	dpt = (char *)malloc(strlen(str) + 1);

	if (dpt == NULL)
	{
		return (NULL);
	}
	strcpy(dpt, str);
	return (dpt);
}
