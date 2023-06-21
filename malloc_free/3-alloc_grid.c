#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * **alloc_grid - Creates a multidimensional array of ints
 * @width: The width
 * @height: The height
 *
 * Return: NULL or pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int **point;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	for (i = 0; i < height; i++)
	{
		point[i] = malloc(width * sizeof(int));
		if (point[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (i2 = 0; i < width; i++)
			point[i][i2] = 0;
	}
	return (point)
}