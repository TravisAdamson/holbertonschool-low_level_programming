#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Calculates the minimum number of coins
 * @argc: Count of arguements
 * @argv: Vector of arguements
 *
 * Return: The minimum number of coins
 */
int main(int argc, char **argv)
{
	int s = 0;
	int t = 0;

	if (argc == 2)
	{
		s = atoi(argv[1]);
		if (s <= 0)
		{
			printf("0\n");
			return (0);
		}
		t = smarter_cents(s);
		printf("%d\n", t);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
/**
 * reduce_to_cents - Calculates the minimum number of coins
 * @s: The value to be examined
 *
 * Return: The minimum number of coins
 */
int reduce_to_cents(int s)
{
	int q = 25;
	int d = 10;
	int n = 5;
	int w = 2;
	int p = 1;

	if (s >= q)
		return (1 + reduce_to_cents(s - 25));
	else if (s >= d)
		return (1 + reduce_to_cents(s - 10));
	else if (s >= n)
		return (1 + reduce_to_cents(s - 5));
	else if (s >= w)
		return (1 + reduce_to_cents(s - 2));
	else if (s >= p)
		return (1 + reduce_to_cents(s - 1));
	else
		return (0);
}
/**
 * smarter_cents - Calculates the minimum number of coins
 * @s: The value to be examined
 *
 * Return: The minimum number of coins
 */

int smarter_cents(int s)
{
	int t = 0;

	if (s >= 25)
	{
		t = s / 25;
		return (t + reduce_to_cents(s - (25 * t)));
	}
	else if (s >= 10)
	{
		t = s / 10;
		return (t + reduce_to_cents(s - (10 * t)));
	}
	else if (s >= 5)
	{
		t = s / 5;
		return (t + reduce_to_cents(s - (5 * t)));
	}
	else if (s >= 2)
	{
		t = s / 2;
		return (t + reduce_to_cents(s - (2 * t)));
	}
	else
		return (s);
}
