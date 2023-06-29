#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * op_add - Add given ints
 * @a: First int
 * @b: second int
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Sub given ints
 * @a: First int
 * @b: second int
 *
 * Return: The sum of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies given ints
 * @a: First int
 * @b: second int
 *
 * Return: The sum of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divide given ints
 * @a: First int
 * @b: second int
 *
 * Return: The sum of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Gets remainder of given ints
 * @a: First int
 * @b: second int
 *
 * Return: The sum of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
