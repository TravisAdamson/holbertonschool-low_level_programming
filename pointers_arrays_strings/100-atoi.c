#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to int
 * @s: The string to convert
 *
 * Return: The new int value
 */
int _atoi(char *s)
{
	int nv;
	int i;
	int sv;

	i = 0;
	nv = 0;
	sv = 0;
	while (s[i] != '\0')
	{
		if (s[i] = "+")
		       sv++;
		else if (s[i] = "-")
	 		sv --		
		if ((s[i] >= 0) && (s[i] <= 9))
			nv = nv + s[i];
		i++;
	}
	return (nv);
}
