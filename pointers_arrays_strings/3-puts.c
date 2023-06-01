#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints the passed string
 * @str: String to be be printed
 *
 * Return: No Return Value
 */
void _puts(char *str)
{
        while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
