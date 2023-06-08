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
	int d;
	char *p[7000];

	i = 0;
	d = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == c) || (d == 1))
		{
			p[i] = s[i];
			d = 1;
		}
		i++;
	}
	if (s[i] == c)
	{
		p[i] = s[i];
		return (p);
	}
	if (d == 1)
		return (p);
	else
		return (NULL);
}
