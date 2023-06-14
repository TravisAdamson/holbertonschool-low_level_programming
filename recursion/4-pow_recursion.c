#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Uses recursion to get x to the power of y
 * @x: Base number
 * @y: Power to be use
 *
 * Return: X to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, (y - 1)));
	return (1);
}
