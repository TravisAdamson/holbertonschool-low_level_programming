#include "main.h"
#include "print_output.c"
#include <stdio.h>

/**
 * print_times_table - Prints the times table based on n
 * @n: upper limit of the times table
 *
 * Return: No Return value
 */
void print_times_table(int n)
{
	int total;
	int i;
	int b;
	int fd = 0;
	int md = 0;
	int ld = 0;

	if ((n < 16) && (n >= 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (b = 0; b <= n; b++)
			{
				total = (i * b);
				print_output(total, n, fd, md, ld, b);
			}
			_putchar ('\n');
		}
	}
}
