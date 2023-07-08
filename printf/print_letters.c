#include "main.h"

/**
 * print_char - Prints the letter values given
 * @list: The list of arguements
 *
 * Return: Returns the number of characters printed or -1
 */
int print_char(va_list list)
{
	char varg;

	varg = va_arg(list, char);
	if (varg != NULL)
	{
		_putchar(varg);
		return (1);
	}
	return (-1);
}

/**
 * print_string - Prints the string value given
 * @list: The list of arguements
 *
 * Return: Returns the number of characters printed or -1
 */

int print_string(va_list list)
{
	char *varg2;
	int i;

	i = 0;
	varg2 = va_arg(list, char *);
	if (varg2 != NULL)
	{
		while (varg2[i] != '\0')
		{
			_putchar(varg2[i]);
			i++;
		}
		return (i);
	}
	else
		return (-1);
}
