#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - Makes all leters uppercase
 * @str: Pointer to string to be converted
 *
 * Return: Converted string
 */
char *string_toupper(char *str)
{
	int i;
	char t;

	while (str[i] != '\0')
	{
		t = str[i];
		if ((t > 96) && (t < 123))
			str[i] = (t - 32);
		i++;
	}
	return(str);
}
