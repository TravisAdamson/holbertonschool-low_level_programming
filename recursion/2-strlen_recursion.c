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
	int i = 0;
	int *p;

	p = i;
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		p++;
	}
	return (i);
}
