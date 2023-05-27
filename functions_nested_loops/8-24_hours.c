#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - print time by min
 *
 * Return: Always returns 0
 */
int jack_bauer(void)
{
	int f;
	int s;
	int t;
	int f2;

	for (f = 49; f < 51; f++)
	{
		for (s = 49; s < 53; s++)
		{
			for (t = 49; t < 54; t++)
			{
				for (f2 = 49; f2 < 57; f2++)
				{
					_putchar(f);
					_putchar(s);
					_putchar(58);
					_putchar(t);
					_putchar(f2);
					_putchar('\n');
				}
			}
		}
	}

	return (0);
}
