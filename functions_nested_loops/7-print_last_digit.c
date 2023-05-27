#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print the last digit of n
 * @n: number to be evaluated
 *
 * Return: Returns the value of the last digit
 */
int print_last_digit(int n)
{
	int r;

	r = r % 10;
	if (r < 0)
		r = r * -1;
	_putchar(r + 48);

	return (r);
}
