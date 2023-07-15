#include <stdio.h>

/**
* main - Print all single digit numbers using only putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar('0' + digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
