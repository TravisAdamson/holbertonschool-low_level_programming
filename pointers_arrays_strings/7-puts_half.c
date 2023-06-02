#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of given string
 * @str: String to be be printed
 *
 * Return: No Return Value
 */
void puts_half(char *str)
{
	int n;
	int l;
	int g;
	int m;

	n = 0;
	l = 0;
	m = 0;
	while (*str != '\0')
	{
		l++;
		str++;
	}
	if (l % 2 != 0)
		n = (l - 1) / 2;
	else
		n = l / 2;
	for (g = l; g >= 0; g--)
		str--;
	while (*str != '\0')
	{
		if (m >= n)
			_putchar(*str);
		m++;
		str++;
	}
	_putchar('\n');
}
