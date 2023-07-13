#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - Gets the value of a given bit
 * @n: The number to look at
 * @index: The index of the bit to get
 *
 * Return: Returns the bit at a given index, or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int result;

	if (index > (8 * sizeof(n) - 1))
	       return (-1);
	result = (n >> index) & 1;
	return ((int) result);
}

