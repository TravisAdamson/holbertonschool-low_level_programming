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
	
	if (n < 0)
		n = n * -1;
	r = n % 10;
	_putchar(r + 48);

	return (r);
}
