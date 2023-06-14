#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Uses recursion to print reverse
 * @s: What to print
 *
 * Return: No Return
 */
void _print_rev_recursion(char *s)
{
	int i;

	i = 0;
	if ((*s != '\0') && (i != 0))
	{
		_putchar(*s);
		s--;
		_print_rev_recursion(s);
	}
	else
	{
		s++;
		if (*s == '\0')
			i = 1;
		_print_rev_recursion(s);
	}
}
