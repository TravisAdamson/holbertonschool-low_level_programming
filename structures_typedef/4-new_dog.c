#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the given struct dog
 * @d: The dog being printed
 *
 * Return: No Return
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int l1;
	int l2;
	int i;
	dog_t *tempdog;

	l1 = 0;
	l2 = 0;
	while (name[l1] != '\0')
		l1++;
	while (owner[l2] != '\0')
		l2++;
	tempdog = malloc(sizeof(dog_t));
	if (tempdog == NULL)
	{
		free(tempdog);
		return (NULL);
	}
	tempdog->name = malloc(l1 * sizeof(tempdog->name));
	if (tempdog == NULL)
	{
		free(tempdog->name);
		free(tempdog);
		return (NULL);
	}
	for (i = 0; i < l1; i++)
		tempdog->name[i] = name[i];
	tempdog->age = age;
	tempdog->owner = malloc(l2 * sizeof(tempdog->owner));
	if (tempdog == NULL)
	{
		free(tempdog->name);
		free(tempdog->owner);
		free(tempdog);
		return (NULL);
	}
	for (i = 0; i < l2; i++)
		tempdog->owner[i] = owner[i];
	return (tempdog);
}
