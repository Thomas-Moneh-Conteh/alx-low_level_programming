#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints the alphabet from 'A' to 'Z'
 *              using two putchar calls without spacing between the letters,
 *              and outputs a newline character at the end.
 * return: returns 0
 */

int main(void)
{
	char myLet;

	for (myLet = 'a'; myLet <= 'z'; myLet++)
	{
		putchar(myLet);
	}
	putchar('\n');
	return (0);
}
