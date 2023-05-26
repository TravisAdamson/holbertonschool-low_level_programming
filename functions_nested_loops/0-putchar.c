#include "main.h"
#include <stdio.h>

/**
 * main - Calls the function _putchar to print with
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[] = "_putchar";
	int s = sizeof(a);
	int i;
	
	for (i = 0; i < s; i++)
	{
			_putchar(a[i]);
	}
	
	_putchar('\n');
	return (0);
}
