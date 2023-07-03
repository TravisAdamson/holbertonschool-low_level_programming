#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints the numbers given with a separator
 * @separator: The seperator to be used between numbers
 * @n: Numbers to be printed
 *
 * Return: No Return
 */
int print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lst;

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lst, int));
		if (separator != NULL)
			printf ("%s", separator);
	}
	va_end(lst);
}
