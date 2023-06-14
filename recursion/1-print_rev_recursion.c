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
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
