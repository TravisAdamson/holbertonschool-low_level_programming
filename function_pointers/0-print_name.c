#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints the given name using function pointer
 * @name: The name to be printed
 * @f: The function to use
 *
 * Return: No Return
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
