#include "main.h"

/**
 * _printf - Prints the values given with a separator
 * @format: The value to be printed
 *
 * Return: Returns the number of characters printed or -1
 */
int _printf(const char * const format, ...)
{
	va_list list;
	int i;
	true_types stuff[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_dec},
		{"i", print_int},
		{"%", print_letters},
		{NULL, NULL},
	};

	i = 0;
	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			while (stuff[i2].found != NULL)
			{
				if (format[i] == stuff[i2].found)
				{
					cprinted = cprinted + stuff[i2].doThis(list);
					i2 = 6;
				}
				else
					i2++;
			}
		}
		else
		{
			_putchar(format[i]);
			cprinted++;
		}
		i++;
	}
}
