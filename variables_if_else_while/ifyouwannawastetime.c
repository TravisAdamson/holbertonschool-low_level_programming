#include <stdio.h>

/**
 * main - Uses two loops to combine number digits
 * using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int s;
	int g = 44;


	for (n = 48 ; n < 58 ; n++)
	{
		for (s = 48 ; s < 58 ; s++)
		{
			putchar(n);
			putchar(s);
			if (s == 57)
			{
				if (n == 57)
					putchar('\n');
			}
			else
				putchar(g);
		}
	}
	return (0);
}
