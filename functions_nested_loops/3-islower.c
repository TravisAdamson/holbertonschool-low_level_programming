#include "main.h"
#include <stdio.h>

/**
 * _islower - checks if a character is lower case
 * c - passed from function call
 *
 * Return: Returns a value based on parameter c
 */
int _islower(int c)
{
	int b;

	for (b = 97; b <= 122; b++)
	{
		if (c == b)
		{
			return (1);
		}
	}
	return (0);
}
