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
		if (s[i] == 43)
			sv++;
		else if (s[i] == 45)
	 		sv--;
		if ((s[i] >= 48) && (s[i] <= 57))
			nv = (nv*10) + s[i] - 48;
		i++;
	}
	if (sv < 0)
		nv = nv * -1;
	return (nv);
}
