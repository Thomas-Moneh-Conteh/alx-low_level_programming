#include <stdio.h>
/**
 * main - Prints out single digits of base 10
 * return: Always (0) successful
 */
int main(void)
{
	int b = 0;

	while (b < 10)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
