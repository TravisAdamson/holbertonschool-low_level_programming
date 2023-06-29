#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Does a given thing to a given array
 * @array: The array to be affected
 * @size: The size of given array
 * @action: The function to be used
 *
 * Return: No Return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((action) && (array) && (size > 0))
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
