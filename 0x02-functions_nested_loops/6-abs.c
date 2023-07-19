#include "stdio.h"
#include <stdlib.h>
/**
 * _abs - returns absolute value of an int
 * @i: integer from which to get an absolute value
 * Return: Void.
 */

int _abs(int i)
{
	if (i < 0)
	{
	return (i * -1);
	}
	return (i);
}
