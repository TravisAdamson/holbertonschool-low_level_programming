#include "main.h"
#include <stdio.h>

/**
 * *cap_string - Makes all words capitalized
 * @str: Pointer to string to be converted
 *
 * Return: Converted string
 */
char *cap_string(char *str)
{
	int i;
	int c;
	int l;
	char t;
	char d[11];
       
	d[] = "32,33,34,40,41,44,46,59,63,123,125";
	i = 0;
	c = 0;
	l = 0;
	while (str[i] != '\0')
	{
		t = str[i];
		for (l = 0; l < 11; l++)
		{
			if ((t == d[l]) || (t = '\n') || (t = '\t'))
			{
				c = 1;
				l = 11;
			}
		}
		if ((c = 1) && (t > 96) && (t < 123))
		{
			str[i] = (t - 32);
			c = 0;
		}
		i++;
	}
	return (str);
}
