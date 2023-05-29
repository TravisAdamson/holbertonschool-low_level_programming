#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints from starting number to 98
 * @n: starting point
 *
 * Return: No Return
 */
void print_to_98(int n)
{
	int i;
	
	for ( i = n; i < 98; i++)
	{
		if ( i != 98)
			printf("%d, ", i);
		else
			printf("%d",i);
	}
}
