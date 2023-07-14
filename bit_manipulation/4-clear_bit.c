#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - Clear the value of a given bit
 * @n: The number to look at
 * @index: The index of the bit to clear
 *
 * Return: 1, or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n |  (0 << index);
	return (1);
}

