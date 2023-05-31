#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square of given size
 * @size: the size of the square to be printed
 *
 * Return: No Return
 */
void print_square(int size)
{
	int i;
	int b;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (b = 1; b <= size; b++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
