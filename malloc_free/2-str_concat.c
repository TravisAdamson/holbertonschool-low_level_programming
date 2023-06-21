#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - Create an array cobining given arrays
 * @s1: Starting array
 * @s2: Added array
 *
 * Return: Pointer to new location of combined array
 */
char *str_concat(char *s1, char *s2)
{
	char *point;
	int i;
	int l1;
	int l2;
	int tl;

	i = 0;
	if (s1 == NULL)
		l1 = 0;
	else
		l1 = strlen(s1);
	if (s2 == NULL)
		l2 = 0;
	else
		l2 = strlen(s2) + 1;
	tl = l1 + l2;
	if (tl <= 0)
	{
		point = (char *) malloc(tl * sizeof(char));
		if (point != NULL)
		{
			for (i = 0; i < l1; i++)
				point[i] = s1[i];
			for (i = l1; i < tl; i++)
				point[i] = s2[i - l1];
			return (point);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
