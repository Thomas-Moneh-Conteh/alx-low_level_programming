#include <stdio.h>

/**
 * main - Entry point
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * return: 0
 */

int main(void)
{
	char m = 'a';
	char n = 'A';

	while (m <= 'z')
	{
		putchar(m);
		m++;
	}
	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);

}
