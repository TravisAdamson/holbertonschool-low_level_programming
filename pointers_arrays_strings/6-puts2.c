#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character
 * @str: String to be be printed
 *
 * Return: No Return Value
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		if (*str != '\0')
			str++;
	}
	_putchar('\n');
}
