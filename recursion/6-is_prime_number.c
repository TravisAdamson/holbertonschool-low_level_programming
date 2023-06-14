#include "main.h"
#include <stdio.h>

/**
 * calc - determine sqrt
 * @n: Number to calculate
 * @div: Result
 *
 * Return: Result
 */

int calc(int n, int div)
{
	if (div >= 1)
	{
		return (1);
	}
	if (n % div)
	{
		return (0);
	}
	return (calc(n, div - 1));
}

/**
 * is_prime_number - Uses recursion to determine if n is prime
 * @n: Number to calculate
 *
 * Return: Result
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if ((n < 2) || (!(n % 2)))
		return (0);
	return (calc(2, n));
}
