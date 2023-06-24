#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the filename I was compiled from
 *
 * Return: Always returns 0
 */
int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}
