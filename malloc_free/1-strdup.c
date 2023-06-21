#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - Create an array duplicating a given array
 * @str: the array to be copied
 *
 * Return: NULL or pointer to new array
 */
char *_strdup(char *str)
{
	char *point;
	unsigned int i;
	int length;

	i = 0;
	length = sizeof(*str);
	if (length != 0)
	{
		point = (char *) malloc(length * sizeof(char));
		if (point != NULL)
		{
			for (i = 0; i < size; i++)
				point[i] = str[i];
			return (&*point);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
