#include "main.h"
#include <stdio.h>

/**
 * *_strncat - Adds n characters to the end of another string
 * @dest: The destination
 * @src: The Source
 * @n: Number of source characters to use
 *
 * Return: Pointer to Dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l1;
	int l2;

	l1 = 0;
	l2 = 0;
	while (dest[l1] != '\0')
	{
		l1++;
	}
	while (src[l2] != '\0')
	{
		if (l2 < n)
		{
			dest[l1] = src[l2];
			l1++;
			l2++;
		}
		else
			break;
	}
	dest[l1] = '\0';
	return (dest);
}
