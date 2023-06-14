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
	if (*s == '\0')
	{
		s--;
		_putchar(*s);
		_print_rev_recursion;
	}
}
