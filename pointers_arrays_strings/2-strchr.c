#include "main.h"
#include <stdio.h>

/**
 * *_strchr - Locates a char in a passed string
 * @s: String to search
 * @c: Character to locate
 *
 * Return: Pointer to charcter or NULL
 */
char *_strchr(char *s, char c)
{
	int i;
	int c;
	char *p = 0;

	i = 0;
	c = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == c) || (c ==1))
		{
			p[i] = s[i];
			c = 1;
		}
		i++;
	}
	if (s[i] == c)
	{
		*p = s[i];
		return (p);
	}
	return (NULL);
}
