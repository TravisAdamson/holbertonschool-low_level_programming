#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 0 to 14 ten times
 *
 * Return: No Return
 */
void more_numbers(void)
{
	int i;
	int b;
	int ld;

	for (i = 1; i <= 10; i++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
				_putchar(49);
			ld = b % 10;
			_putchar(ld + 48);
		}
	}
	_putchar('\n');
}
