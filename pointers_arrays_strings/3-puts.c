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
	int l = 0;
	int i;
	char *pstr = *str;

	l = _strlen(*pstr);
	for (i = 0; i <= l; i++)
		_putchar(*pstr[i]);
	_putchar('\n');
}
