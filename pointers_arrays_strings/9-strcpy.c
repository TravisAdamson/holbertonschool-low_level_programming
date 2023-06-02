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
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
	return *dest;
}
