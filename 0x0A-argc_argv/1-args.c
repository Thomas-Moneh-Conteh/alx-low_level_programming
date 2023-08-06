#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: an array of strings that is conatins the
 * actual command line argument
 *
 * Return: aways 0.
 */

int main(int argc, char  *argv[]__attribute__((unused)))
{
	int i;

	i = argc - 1;
	printf("%d\n", i);
	return (0);
}
