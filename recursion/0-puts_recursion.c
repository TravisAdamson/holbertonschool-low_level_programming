#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Uses puts within recursion
 * @s: What to print
 *
 * Return: No Return
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
		_puts_recursion(s);
	else
		_putchar('\n');
}
