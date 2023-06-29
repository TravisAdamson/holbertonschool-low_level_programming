#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Run a function on numbers
 * 
 * Return: 0 on success, exit code indicating the issue
 */
int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((b == 0) && (argv[2] == '/') || (argv [2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (get_op_func(argv[2])(a, b));
	return (0);
}
