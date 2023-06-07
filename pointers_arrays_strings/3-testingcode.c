#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Value based on comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int r;

	i = 0;
	r = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1 != s2)
			r = s1[i] - s2[i];
		i++;
	}
	return (r);
}
