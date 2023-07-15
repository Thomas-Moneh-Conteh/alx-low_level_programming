#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints all the alphabet expect q and e
 * in lowercase followed by a newline.
 * return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
			putchar(a);
		a++;
	}
	putchar ('\n');
	return (0);
}
