#include <stdio.h>

/**
 * print_alphabet - This is the main function
 * Description: A  function that prints the alphabet,
 * in lowercase, followed by a new line.
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
}
