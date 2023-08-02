#include <stdio.h>

/**
 * _pow_recursion - A function that returns the
 * value of x raised to the power of y.
 * @x: Base number
 * @y: Index/power
 *
 * Return: 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
