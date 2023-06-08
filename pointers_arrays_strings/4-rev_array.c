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
		t = a;
		l1++;
		l2++;
		t++;
		a++;
	}
	while (l1 > 0)
	{
		l1--;
		a--;
	}
	while (l1 < n)
	{
		a = t;
		a++;
		t--;
		l1++;
	}
}
