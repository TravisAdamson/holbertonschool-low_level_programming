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
	int g = 44;
	int l = 32;


	for (n = 48 ; n < 58 ; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(g);
			putchar(l);
		}
	}
	putchar('\n');
	return (0);
}
