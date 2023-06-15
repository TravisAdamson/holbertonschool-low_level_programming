#include "main.h"
#include <stdio.h>

/**
 * *_memset - Directly modify memory based on past arguements
 * @s: Pointer to modified
 * @b: Is what to put in memory
 * @n: Is number of bytes to change
 *
 * Return: Pointer to Memory Address of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p = s;

	i = 0;
	for (i = 0; i < n; i++)
		s[i] = b;
	return (p);
}
