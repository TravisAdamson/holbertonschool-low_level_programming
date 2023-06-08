#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the passed array
 * @a: Array to be be reversed
 * @n: Length of the array
 *
 * Return: No Return Value
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
	}
}
