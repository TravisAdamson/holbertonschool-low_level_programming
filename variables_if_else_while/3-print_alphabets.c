#include <stdio.h>

/**
 * main - Displays lowercase and uppercase alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char C;

	for (C = 'a' ; C <= 'z' ; C++)
	{
		putchar(C);
	}
	for (C = 'A' ; C <= 'Z' ; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
