#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an aray using a given number of elements
 * @a: The array to be printed
 * @n: The number of elements in the array
 *
 * Return: No Return Value
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	putchar('\n');
}
