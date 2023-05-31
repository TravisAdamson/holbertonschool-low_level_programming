#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints a diagonal line of length n
 * @n: The length of the diagonal
 *
 * Return: No Return
 */
void print_diagonal(int n)
{
	int i;
	int b;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			if (i > 1)
			{
				for (b = 1; b < i; b++)
					_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
