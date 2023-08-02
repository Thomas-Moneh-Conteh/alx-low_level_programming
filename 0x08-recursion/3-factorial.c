#include "main.h"

/**
 * factorial - A function that returns the factorial of
 * given number.
 * @n: factorial number to be found
 *
 * Return: ! of a number.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
