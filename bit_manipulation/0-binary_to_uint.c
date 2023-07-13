#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Converts a string of 0 and 1s to a uint
 * @b: the string to convert
 *
 * Return: The unsigned int after conversion
 */

unsigned int str_to_int(char a)
{
	return((unsigned int) a - '0');
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
	svalue = 1;
	total = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b; i++)
		length++;
	for (i = length - 1; b[i]; i--, svalue *=2)
	{
		if (b[i] != 1 && b[i] != 0)
			return (0);
		tempv = str_to_int(b[i]);
		total += tempv * svalue;
	}
	return (total);
}
