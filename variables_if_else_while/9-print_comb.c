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


	for (n = 48 ; n < 58 ; n++)
	{
		putchar(n);
		if (n != 57)
			putchar(g);
	}
	putchar('\n');
	return (0);
}
