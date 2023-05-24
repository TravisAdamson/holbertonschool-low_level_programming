#include <stdio.h>

/**
 * main - display character sizes with printf
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf ("Size of char pointer: %d\n",sizeof (char*));
	printf ("Size of int pointer: %d\n",sizeof (int*));
	printf ("Size of float pointer: %d\n",sizeof (float*));
	printf ("Size of long int pointer: %d\n",sizeof (long int*));
	printf ("Size of double pointer: %d\n",sizeof (double*));
	return (0);
}
