#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - Create an array of chars, and sets a specific
 * char
 * @size: The size requested for the array
 * @c: The character to intialize into the array
 *
 * Return: Null if 0 size, or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *point;
	int i;

	i = 0;
	if (size != 0)
	{
		ptr = (char*) malloc(size * sizeof(char));
		for (i = 0; i < size; i++)
			ptr[i] = c;
		return (&ptr);
	}
	else
		return (NULL);
}
