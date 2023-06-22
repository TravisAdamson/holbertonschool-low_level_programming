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
	unsigned int i;
	unsigned int i2;
	unsigned int nc;
	unsigned int length;

	i = 0;
	i2 = 0;
	nc = n;
	length = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		nc++;
	point = malloc((nc + 1) * sizeof(char));
	if (point != NULL)
	{
		for (i = 0; s1[i]; i++)
			point[length++] = s1[i];
		for (i2 = 0; s2[i] && i2 < n; i2++)
			point[length++] = s2[i2];
		point[length] = '\0';
		return (point);
	}
	else
		return (NULL);
}
