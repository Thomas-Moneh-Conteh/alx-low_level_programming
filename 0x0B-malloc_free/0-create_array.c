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
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(arr));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i =0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);

}
