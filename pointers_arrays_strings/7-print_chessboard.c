#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Print the chessboard
 * @a: Array with content
 *
 * Return: No return
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int i2;

	i = 0;
	i2 = 0;
	for (i = 0; i < 8; i++)
	{
		for (i2 = 0; i2 < 8; i2++)
		{
			_putchar(a[i][i2]);
		}
		_putchar('\n');
	}
}
