#include <stdio.h>
#include <stdlib.h>


/**
 * malloc_checked - Allocate a block of memory.
 * @b: size of memory to be allocated.
 *
 * Return: always 0.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *)malloc(b * sizeof(int));

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
