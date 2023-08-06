#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the result of the multiplication,
 * followed by a new line
 * @argc: number of arguments
 * @argv: an array of strings that contains
 * that contains arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int multiply = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			multiply *= atoi(argv[i]);
		}
		printf("%d\n", multiply);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
