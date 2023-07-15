#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: Print out letters from 'a' to 'z'
 * Return: 0
 */
int main(void)
{
	char myLet = 'a';

	while (myLet <= 'z')
	{
		putchar(myLet);
		myLet++;
	}

	putchar('\n');
	return (0);
}
