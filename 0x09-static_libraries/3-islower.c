#include <stdio.h>

/**
 * _islower - Mian entry
 * @c: character bein tested
 * Description: A function that checks for lowercase character
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
