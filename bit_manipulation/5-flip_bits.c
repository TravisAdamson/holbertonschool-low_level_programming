#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - Find the number of bits needed to flip
 * @n: The starting number
 * @m: The resulting number
 *
 * Return: Bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result;
	int i;

	i=0;
	result = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
	{
		if (((n ^ m) >> i) & 1)
			result++;
	}
	return (result);
}

