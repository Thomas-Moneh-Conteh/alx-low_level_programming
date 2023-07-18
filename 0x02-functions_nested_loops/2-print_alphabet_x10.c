#include <stdio.h>

/**
 * print_alphabet_10 - Entry point
 * Description: A functtion tht prints the alphabet 10 times in lower case
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int num;

	for (num = 1; num <= 10; num++)
	{
		char alphabet;

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			putchar(alphabet);
		}
		putchar('\n');
	}
}
