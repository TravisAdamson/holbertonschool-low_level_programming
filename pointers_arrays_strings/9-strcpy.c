#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - Copys a stt to a new location
 * @dest: The destination
 * @src: The Source
 *
 * Return: Pointer to Dest
 */
char *_strcpy(char *dest, char *src)
{
	int l;
	int i;

	l = 0;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		l++;
	}
	*dest = *src;
	for (i = l; i > 0; i++)
		dest--;
	return dest;
}
