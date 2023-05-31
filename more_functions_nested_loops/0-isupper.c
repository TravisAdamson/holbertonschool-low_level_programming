#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if a character is upper case
 * @c: character to be compared
 *
 * Return: Returns a true or false value
 */
int _isupper(int c)
{
	int b;

	for (b = 65; b <= 90; b++)
	{
		if (c == b)
		{
			return (1);
		}
	}
	return (0);
}
