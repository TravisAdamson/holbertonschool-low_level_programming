#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the program name
 * @argc: Count of arguements
 * @argv: Vector of arguements
 *
 * Return: Always Return 0
 */
int main(int argc, char *argv[])
{
	int n;
	int n2;
	int t;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	n2 = atoi(argv[2]);
	t = n * n2;
	printf("%d\n", t);
	return (0);
}
