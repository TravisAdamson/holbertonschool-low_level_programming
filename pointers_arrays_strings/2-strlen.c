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
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
