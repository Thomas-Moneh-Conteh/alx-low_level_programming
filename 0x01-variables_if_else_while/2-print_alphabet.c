#include <stdio.h>

/**
 * main - This will output the alphabets in ascending order
 * return: returns 0
 */

int main(void)
{
	char myLet;

	for (myLet = 'a'; myLet <= 'z'; myLet++)
	{
		putchar(myLet);
		putchar(' ');
	}
	return (0);
}
