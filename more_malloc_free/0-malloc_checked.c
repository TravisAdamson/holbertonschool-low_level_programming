#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - Allocates memmory using malloc
 * @b: Size of memmory block needed
 *
 * Return: Pointer to new memmory location
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *point;
	
	point = malloc(b);
	if (point != NULL)
	{
		return (point);
	}
	else
		exit(98);
}
