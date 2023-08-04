#include "main.h"

/**
 * _isdigit - A function that checks for a digit (0 to 9).
 * @c: The int to be checked
 * Return: always 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
