#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: return (0)
 * j: reprensents last digit
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int j = abs(n % 10);

	if (j > 5)
	{
		printf("Last digit of %d is %d and is greater then 5\n", n, j);
	}
	else if (j == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, j);
	}
	else
		(j < 6);
		(n != 0);
	{
		printf("Last digit of %d is %d is less than 6 and not 0\n", n, j);
	}
	return (0);
}
