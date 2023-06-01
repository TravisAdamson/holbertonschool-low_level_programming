#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses the passed string
 * @s: String to be be reversed
 *
 * Return: No Return Value
 */
void rev_string(char *s)
{
	int l;
	int n;
	int g;
	char *t;

	l = 0;
	n = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	l--;
	while (l >= 0)
	{
		*t = *s;
		s--;
		l--;
		n++;
		t++;
	}
	for (g = n; g >= 0; g--)
		t--;
	for (g = 0; g <= n; g++)
	{
		*s = *t;
		s++;
		t++;
	}
}
