#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - Finds the first occurance of a stated character
 * @s: String to be examined
 * @accept: Characters in the list to locate
 *
 * Return: Pointer to first occurance
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int i2;
	
	i = 0;
	i2 = 0;
	while (s[i] != '\0')
	{
		while (accept[i2] != '\0')
		{
			if (s[i] != accept[i2])
				i2++;
			else
				return (&s[i]);
		}
		if (s[i] == accept[i2]
				return (&s[i]);
		i++;
		i2 = 0;
	}
	return (NULL);
}
