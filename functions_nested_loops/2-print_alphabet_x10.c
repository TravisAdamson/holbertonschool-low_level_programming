#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char i;
	int b;

	for (b = 0; b <= 10; b++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
