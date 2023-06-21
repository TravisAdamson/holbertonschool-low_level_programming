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
	int i;
	int i2;

	i = 0;
	i2 = 0;
	if ((width <= 0) || (height <= 0))
		return (NULL);
	point = malloc(height * sizeof(int *));
	if (point == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		point[i] = malloc(width * sizeof(int));
		if (point[i] == NULL)
		{
			while (i >= 0)
				free(point[i]);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (i2 = 0; i < height; i++)
			point[i][i2] = 0;
	}
	return (point);
}
