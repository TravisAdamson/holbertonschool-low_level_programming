#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_char - Prints the character given
 * @c: The character to print
 *
 * Return: No Return
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, char));
}

/**
 * print_int - Prints the integer given
 * @i: The integer to print
 *
 * Return: No Return
 */
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_float - Prints the double given
 * @d: Double to be printed
 *
 * Return: No Return
 */
void print_float(va_list d)
{
	printf("%f", va_arg(f, float));
}

/**
 * print_str - Prints the string given
 * @s: The string to print
 *
 * Return: No Return
 */
void print_str(va_list s)
{
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Prints the values given with a separator
 * @format: The format of the values to be printed
 *
 * Return: No Return
 */
void print_all(const char * const format, ...)
{
	int i;
	int i2;
	char *s;
	va_list lst;
	true_Form valid[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str}
	};	

	i = 0;
	j = 0;
	s = "";
	va_start(lst, format);
	while ((format) && (format[i]))
	{
		i2 = 0;
		while (i2 < 4)
		{
			if (format[i] = valid[i2].use)
			{
				printf("%s", s);
				valid[i2].f(lst);
				s = ", ";
			}
			i2++;
		}
		i++;
	}
	printf("\n");
	va_end(lst);
}
