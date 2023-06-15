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
	int m;

	t = 0;
	m = 0;
	for (i = 0; i < argc; i++)
	{
		printf("Testing");
		if (isdigit(argv[i]) != 0)
		{
			t = t + atoi(argv[i]);
			m = 1;
		}
		if ((t > 0) && (m = 1))
		{
			printf("Error\n");
			return (1);
		}
	}
	if (t == 0)
		return (0);
	printf("%d\n", t);
	return (0);
}
