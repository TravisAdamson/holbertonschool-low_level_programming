#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints 9-times table
 *
 * Return: Always returns 0
 */
void times_table(void)
{
	int total;
	int i;
	int b;
	int fd;
	int ld;

	for (i = 0; i < 10; i++)
	{
		for (b = 0; b < 10; b++)
		{
			total = (i * b);
			if (total > 9)
			{
				ld = (total % 10);
				fd = (total / 10);
				_putchar(fd + 48);
				_putchar(ld + 48);
				if (b != 9)
					_putchar(44);
				_putchar(32);
			}
			else
			{
				if (b > 1)
					_putchar(32);
				_putchar(total + 48);
				if (b != 9)
					_putchar(44);
				_putchar(32);
			}
		}
		_putchar ('\n');
	}
}
