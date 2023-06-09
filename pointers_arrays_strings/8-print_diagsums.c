#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the diagnal sums of a given array
 * @a: Array to be calculated
 * @size: size of the array
 *
 * Return: No return
 */
void print_diagsums(int *a, int size)
{
	int t1;
	int t2;
	int i;
	int *p = a;

	t1 = 0;
	t2 = 0;
	i=0;
	for (i = 0; i < size; i++)
	{
		t1 = p[i][i] + t1;
		t2 = p[size - i][size - i] + t2;
	}
	printf("%d, %d", t1, t2);
}
