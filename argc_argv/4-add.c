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

	t = 0;
	for (i = 0; i < argc; i++)
	{
		t = t + atoi(argv[i]);
		printf("%d\n", t);
	}
	if (t == 0)
		return (0);
	printf("%d\n", t);
	return (0);
}
