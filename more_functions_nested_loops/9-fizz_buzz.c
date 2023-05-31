#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers 1-100 with substitutions
 *
 * Return: Always returns 0
 */
int main(void)
{
	int i;
	int b;
	int c;

	for (i = 1; i <= 100; i++)
	{
		b = i % 3;
		c = i % 5;
		if ((b == 0) && (c == 0))
			printf("FizzBuzz ");
		else if (b == 0)
			printf("Fizz ");
		else if (c == 0)
		{
			if (i == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else
			printf("%d ", i);
	}
	putchar('\n');
	return (0);
}
