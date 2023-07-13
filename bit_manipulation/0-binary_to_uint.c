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
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int total;
	unsigned int svalue;

	svalue = 1;
	i = 0;
	total = 0;
	if (b == NULL)
		return (0);
	while (b[i] != '\0')
		i++;
	while (i > 0)
	{
		if (b[i] == 48)
		{
			svalue++;
			i--;
		}
		else if (b[i] == 49)
		{
			total += 1 << svalue;
			svalue++;
			i--;
		}
		else
			return (1);
	}
	return (total);
}
