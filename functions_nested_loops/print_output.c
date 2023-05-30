#include "main.h"

/**
 * print_output - Prints the output based on total
 * @total: Values in times table
 * @n: Top value in times table
 * @fd: The First Digit of total
 * @md: The Middle digit of total
 * @ld: The Last digit of total
 * @b: The base of the table
 *
 * Return: No Return value
 */
void print_output(int total, int n, int fd, int md, int ld, int b)
{	
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

