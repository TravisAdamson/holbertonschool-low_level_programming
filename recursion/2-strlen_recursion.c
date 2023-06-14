#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Uses recursion to get strlen
 * @s: What to evaluate
 *
 * Return: Strlen
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != '\0')
	{
		s++
		i = s + _strlen_recursion(s);
	}
	return (i);
}
