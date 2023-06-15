#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: character to be compared
 *
 * Return: Returns a true or false value
 */
int _isdigit(int c)
{
	int b;

	for (b = 48; b <= 57; b++)
	{
		if (c == b)
		{
			return (1);
		}
	}
	return (0);
}
