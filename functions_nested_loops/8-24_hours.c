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

	for (f = 48; f < 51; f++)
	{
		for (s = 48; s < 52; s++)
		{
			for (t = 48; t < 54; t++)
			{
				for (f2 = 48; f2 < 58; f2++)
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
