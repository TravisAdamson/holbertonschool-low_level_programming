#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Adds all parameters
 * @n: Numbers to be added.
 *
 * Return: The sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int total;
	int i;

	total = 0;
	va_list lst;
	va_start(lst, n);
	for (i = 0; i < n; i++)
		total = total + va_arg(lst, int);
	va_end(lst);
	return (total);
}
