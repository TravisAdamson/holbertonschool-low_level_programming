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
	int b;

	for (b = 0; b < s; b++)
	{
		_putchar(a[b]);
	}
	_putchar('\n');
	return (0);
}
