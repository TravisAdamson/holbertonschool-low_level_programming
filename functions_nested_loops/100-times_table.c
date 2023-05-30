#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the times table based on n
 * @n: upper limit of the times table
 *
 * Return: No Return value
 */
void print_times_table(int n)
{
	int total;
	int i;
	int b;
	int fd;
	int ld;
	int md;

	if ((n < 16) && (n >= 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (b = 0; b <= n; b++)
			{
				total = (i * b);
				if (total > 99)
				{
					md = ((total / 10) % 10);
					fd = (total / 100);
					ld = (total % 10);
					_putchar(32);
					_putchar(fd + 48);
					_putchar(md + 48);
					_putchar(ld + 48);
					if (b != n)
						_putchar(44);
				}
				else if (total > 9)
				{
					ld = (total % 10);
					fd = (total / 10);
					_putchar(32);
					_putchar(32);
					_putchar(fd + 48);
					_putchar(ld + 48);
					if (b != n)
						_putchar(44);
				}
				else
				{
					if (b != 0)
					{
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(total + 48);
					if (b != n)
						_putchar(44);
				}
			}
			_putchar ('\n');
		}
	}
}
