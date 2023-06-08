#include "main.h"
#include <stdio.h>

/**
 * *leet - Convert to leet speak
 * @str: String to convert
 *
 * Return: Converted string
 */
char *leet(char *str)
{
	int i;
	int i2;
	char d[] = {'a', 'e', 'o', 't', 'l'};
	char d2[] = {'A', 'E', 'O', 'T', 'L'};
	char r[] = {'4', '3', '0', '7', '1'};

	i = 0;
	i2 = 0;
	while (str[i2] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if ((str[i2] = d[i]) || (str[i2] = d2[i]))
				str[i2] = r[i];
		}
		i2++;
	}
	return (str);
}
