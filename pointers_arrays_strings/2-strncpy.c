#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - Copys n bytes of a str to a new location
 * @dest: The destination
 * @src: The Source
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to Dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i <= n)
		{
			dest[i] = src[i];
			i++;
		}
		else
			break;
	}
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
