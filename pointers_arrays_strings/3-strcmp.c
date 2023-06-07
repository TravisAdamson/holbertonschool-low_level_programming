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
	int r1;
	int r2;
	int t;

	i = 0;
	r1 = 0;
	r2 = 0;
	while (s1[i] != '\0')
	{
		r1 = r1 + s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		r2 = r2 + s2[i];
		i++;
	}
	if (r1 > r2)
		return (s1 - s2);
	else if (r1 < r2)
		return (s2 - s1);
	else
		return (0);
}
