#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - Makes space fo s1 + n bytes of s2
 * @s1: Initial array of characters
 * @s2: Second array to use part of
 * @n: Number of bytes to add
 *
 * Return: Pointer to new memmory location
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *point;
	unsigned int size2;
	unsigned int size1;
	unsigned int tsize;
	unsigned int i;
	unsigned int i2;
	unsigned int nc;

	i = 0;
	i2 = 0;
	if (s1 != NULL)
		size1 = strlen(s1);
	else
		size1 = 0;
	if (s2 != NULL)
		size2 = strlen(s2);
	else
		size2 = 0;
	if (n >= size2)
		nc = size2;
	else
		nc = n;
	tsize = size1 + nc + 1;
	point = (char *) malloc(tsize * sizeof(char));
	if (point != NULL)
	{
		for( i = 0; i < size1; i++)
			point[i] = s1[i];
		for( i2 = 0; i2 < nc; i2++)
			point[i2] = point[i2 - size2];
		point[i2] = '\0';
		return (point);
	}
	else
		return (NULL);
}
