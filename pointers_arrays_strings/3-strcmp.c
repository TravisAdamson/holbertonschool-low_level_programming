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
	int n;

	if (s1 > s2)
		n = s2 - s1;
	else if (s1 < s2)
		n = s1 - s2;
	else
		n = 0;
	return (n);
}
