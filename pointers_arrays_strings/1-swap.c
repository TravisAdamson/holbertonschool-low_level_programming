#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two ints by pointer
 * @a: First number to swap with b
 * @b: Second number to swap with a
 *
 * Return: No return
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = *c;
}
