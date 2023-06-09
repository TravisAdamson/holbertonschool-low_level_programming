#include "main.h"
#include <stdio.h>

/**
 * *_strspn - Finds the length of a prefix substring
 * @s: String to be examined
 * @accept: Characters in the prefix substring
 *
 * Return: Length of the prefix substring
 */
unsigned int _strncpy(char *s, char *accept)
{
	int i;
	int i2;
	int s;
	unsigned int r;

	i = 0;
	i2 = 0;
	r = 0;
	s = 0;
	while (s[i] != '\0')
	{
		while (accept[i2] != '\0')
		{
			if (s[i] == accept[i2])
			{
				r++;
				s = 1;
				break;
			}
			i2++;
		}
		if (s == 0)
			return (r);
		else
		{
			i++;
			i2 = 0;
			s = 0;
		}
	}
	return (r);
}
