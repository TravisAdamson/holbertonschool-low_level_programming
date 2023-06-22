#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - Allocates an array with malloc
 * @nmemb: Array
 * @size: Size of the given array
 *
 * Return: Pointer to new memmory location
 */
char *_calloc(unsigned int nmemb, unsigned int size)
{
	char *point;

	if ((nmemb == 0) || (size = 0))
		return (NULL);
	point = malloc(nmemb * size);
	if (point == NULL)
		return (NULL);
	return (point);
}
