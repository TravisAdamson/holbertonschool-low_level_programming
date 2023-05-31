#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle of defined size
 * @size: the size of the triangle
 *
 * Return: No Return
 */
void print_triangle(int size)
{
	int i;
	int b;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (b = 1; b < size; b++)
			{
				if (b < (size - i))
					_putchar(32);
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
