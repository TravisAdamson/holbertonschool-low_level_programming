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
	
	if ( n <99 )
	{
		for ( i = n; i < 99; i++)
		{
			if ( i != 98)
				printf("%d, ", i);
			else
				printf("%d",i);
		}
	}
	else
	{
		for ( i = n; i > 97; i = i - 1)
		{
			if ( i != 98)
				printf("%d, ", i);
			else
				printf("%d, ", i);
		}
	}
}
