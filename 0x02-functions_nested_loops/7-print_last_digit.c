#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @d: the digit to be printed
 * Return: always 0.
 */

int print_last_digit(int d)
{
int last_digit = d % 100;
printf("%d\n", last_digit);
return (last_digit);
}
