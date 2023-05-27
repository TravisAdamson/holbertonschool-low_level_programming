#include "main.h"
#include <stdio.h>

/**
 * _abs - gives the abs value of a passed number
 * @n: number to be evaluated
 *
 * Return: Returns the abs value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (n * -1);
		return (n);
	}
	else if (n > 0)
		return (n);
	else
		return (0);

	return (0);
}
