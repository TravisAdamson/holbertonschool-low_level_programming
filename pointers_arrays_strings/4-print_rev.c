#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints the passed string in reverse
 * @s: String to be be printed
 *
 * Return: No Return Value
 */
void print_rev(char *s)
{
	int l;

	l = 0;
	while (*s != '\0')
	{
		l++
		s++;
	}
	while (l >= 0)
	{
		_putchar(*s);
		s--;
		l--;
	}
	_putchar('\n');
}
