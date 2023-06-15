#include "main.h"
#include <stdio.h>

/**
 * *_strspn - Finds the length of a prefix substring
 * @s: String to be examined
 * @accept: Characters in the prefix substring
 *
 * Return: Length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int i2;
	int c;
	unsigned int r;

	i = 0;
	i2 = 0;
	r = 0;
	c = 0;
	while (s[i] != '\0')
	{
		while (accept[i2] != '\0')
		{
			if (s[i] == accept[i2])
			{
				r++;
				c = 1;
				break;
			}
			i2++;
		}
		if (c != 0)
		{
			i++;
			i2 = 0;
			c = 0;
		}
		else
			return (r);
	}
	return (r);
}
