#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints the strings given with a separator
 * @separator: The seperator to be used between strings
 * @n: Number of strings to be printed
 *
 * Return: No Return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list lst;

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(lst, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if ((separator != NULL) && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(lst);
}
