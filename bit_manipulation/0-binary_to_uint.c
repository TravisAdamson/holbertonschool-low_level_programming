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
	int g;
	unsigned int total;
	unsigned int svalue;
	char tempc = 0;

	svalue = 1;
	g = 0;
	i = 0;
	total = 0;
	if (b == NULL)
		return (0);
	while (b[i] != '\0')
		i++;
	i--;
	while (i > 0)
	{
		tempc = b[i];
		if (tempc == '0')
		{
			svalue *= 2;
			i--;
		}
		else if (tempc == '1')
		{
			if (g = 0)
			{
				total += svalue;
				svalue *= 2;
				i--;
				g = 10;
			}
			else
				total++;
		}
		else
			return (0);
	}
	return (total);
}
