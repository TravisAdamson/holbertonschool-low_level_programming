#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a line n times
 * @n: The number of times the character should print
 *
 * Return: No Return
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
		_putchar(95);
		}
	}
	_putchar('\n');
}
