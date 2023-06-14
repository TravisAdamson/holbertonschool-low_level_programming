#include "main.h"
#include <stdio.h>

/**
 * calc - determine sqrt
 * @n: Number to calculate
 * @endval: Result
 *
 * Return: Result
 */

int calc(int n, int endval)
{
	if (endval * endval == n)
	{
		return (endval);
	}
	else if (endval * endval > n)
	{
		return (-1);
	}
	else
		return (calc(n, endval + 1));
}

/**
 * _sqrt_recursion - Uses recursion to get sqrt of n
 * @n: Number to calculate
 *
 * Return: Result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (calc(n, 0));
}
