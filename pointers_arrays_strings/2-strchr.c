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
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			*p = s[i];
			return (p);
		}
		i++;
	}
	return (NULL);
}
