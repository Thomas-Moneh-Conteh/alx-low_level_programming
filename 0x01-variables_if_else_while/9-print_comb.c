#include <stdio.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);

		if (i != 9)

		putchar(',');

		putchar(' ');
	}
	putchar('\n');
	return (0);
}
