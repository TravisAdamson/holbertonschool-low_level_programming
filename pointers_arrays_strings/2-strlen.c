#include "main.h"
#include <stdio.h>

/**
 * _strlen - gets the length of a passed string
 * @s: String to be evaluated
 *
 * Return: Returns value based on the length
 */
int _strlen(char *s)
{
	int l = 1;
	int i = 0;

	while (*s[i] != '\0')
	{
		l++;
		i++;
	}
	return (l);
}
