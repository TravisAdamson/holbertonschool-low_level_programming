#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Uses recursion to get sqrt of n
 * @n: Number to calculate
 *
 * Return: Sqrt
 */
int _sqrt_recursion(int n)
{
	if (n / 2 == 0)
		return (_sqrt_recursion(n/2));
	else
		return (-1);;
	return (1);
}
