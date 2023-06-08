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
	int *t;

	l1 = 0;
	l2 = 0;
	while (l1 < n)
	{
		t = a[l1];
		l1++;
		t++;
	}
	while (l2 < n)
	{
		a[l2] = t;
		t--;
		l2++;
	}
}
