#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The number to be computed
 *
 * Return: always 0.
 */

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		printf("%d\n", n);
		printf(",");
		printf(" ");
	}
	return (0);
}
