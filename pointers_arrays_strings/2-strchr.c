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
	int i2;
	char *p = 0;

	i = 0;
	i2 = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = s[i];
			return (p);
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
