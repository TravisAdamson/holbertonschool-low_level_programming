#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints the program name
 * @argc: Count of arguements
 * @argv: Vector of arguements
 *
 * Return: Always Return 0
 */
int main(int argc, char *argv[])
{
	int i;
	int t;
	int i2;

	t = 0;
	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	for (i2 = 1; i2 < argc; i2++)
		if (atoi(argv[i2] != argv[i2]))
		{
			printf("Error\n");
			return (1);
		}
	for (i = 0; i < argc; i++)
	{
			t = t + atoi(argv[i]);
	}
	if (t == 0)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", t);
	return (0);
}
