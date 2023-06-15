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
	unsigned int nv;
	int i;
	int sv;
	int tv;

	i = 0;
	nv = 0;
	sv = 0;
	tv = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 45)
		{
			if (sv < 0)
				sv = sv * -1;
			else
				sv--;
		}
		if ((s[i] >= 48) && (s[i] <= 57))
		{
			tv = s[i] - 48;
			nv = (nv * 10) + tv;
			i++;
		}
		else if (nv == 0)
			i++;
		else
			break;
	}
	if (sv < 0)
		nv = nv * -1;
	return (nv);
}
