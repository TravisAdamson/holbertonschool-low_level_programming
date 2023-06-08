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
	int l1;
	int l2;
	int *t = 0;

	l1 = 0;
	l2 = 0;
	while (l1 < n)
	{
		t[l1] = a[l1];
		l1++;
	}
	while (l2 < n)
	{
		t[l1] = a[l2];
		l1--;
		l2++;
	}
}
