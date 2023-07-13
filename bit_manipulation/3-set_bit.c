#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - Sets the value of a given bit
 * @n: The number to look at
 * @index: The index of the bit to set
 *
 * Return: 1, or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n |  (1 << index);
	return (i);
}

