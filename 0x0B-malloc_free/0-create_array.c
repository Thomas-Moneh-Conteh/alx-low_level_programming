#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - A function that creates an array
 * of chars, and initializes it with a specific char.
 * @size: size of integer
 * @c: character to be created
 *
 * Return: always nothing
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(c));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);

}
