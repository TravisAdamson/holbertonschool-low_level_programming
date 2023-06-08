#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - Directly copies n bytes of memory
 * @dest: Destination location
 * @src: Source location
 * @n: Is number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((dest[i] != '\0') && (src[i] != '\0'))
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}
	return (dest);
}
