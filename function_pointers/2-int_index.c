#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Looks fora given integer
 * @array: The array to be searched
 * @size: The size of given array
 * @cmp: Pointer to the function to use
 *
 * Return: The index when the function first returns a non 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if ((cmp) && (array))
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
