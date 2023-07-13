#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - Prints a number provided in binary
 * @n: The number to be printed
 *
 * Return: No Return
 */
void print_binary(unsigned long int n)
{
	int test;
	int i;

	i = 0;
	if (n == 0)
		_putchar('0');
	test = 0;
	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			test = 1;
		if (test == 1)
		{
			if ((n >> i) & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}

}
