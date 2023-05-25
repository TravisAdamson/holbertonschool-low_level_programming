#include <stdio.h>

/**
 * main - Displays lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char C;

	for (C = 'a' ; C <= 'z' ; C++)
	{
		if ((C != 'e') && (C != 'q'))
			putchar(C);
	}
	putchar('\n');
	return (0);
}
