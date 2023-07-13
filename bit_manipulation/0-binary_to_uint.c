#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_to_int - Converts a char from string to unsigned int
 * @a: the char to convert
 *
 * Return: The unsigned int after conversion
 */

unsigned int str_to_int(char a)
{
	if (a == '0')
		return (0);
	return (1);
}
/**
 * binary_to_uint - Converts a string of 0 and 1s to a uint
 * @b: the string to convert
 *
 * Return: The unsigned int after conversion
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int length;
	unsigned int total;
	unsigned int svalue;
	unsigned int tempv = 0;

	length = 0;
	svalue = 0;
	total = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
		length++;
	while (length--)
	{
		if (b[length] != 48 && b[i] != 49)
			return (0);
		tempv = str_to_int(b[i]);
		if (tempv != 0)
			total += 1 << svalue;
		svalue++;
	}
	return (total);
}
