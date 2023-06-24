#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - Creates an array of integers
 * @min: The first value to put in the array
 * @max: The last value to put in the array
 *
 * Return: Pointer to new array or NULL
 */
int *array_range(int min, int max)
{
	int nia;
	int *a;

	if (min > max)
		return (NULL);
	nia = 1 + max - min;
	a = malloc(nia * sizeof(int));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < nia; i++)
		a[i] = min + i;
	return (a);
}
