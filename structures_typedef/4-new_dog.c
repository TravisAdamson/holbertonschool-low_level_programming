#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: New dogs name
 * @age: New dogs age
 * @owner: New dogs owner
 *
 * Return: Returns the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int l1;
	int l2;
	int i;
	char *n2;
	char *o2;
	dog_t *tempdog;

	l1 = 0;
	l2 = 0;
	while (name[l1] != '\0')
	{
		n2[l1] = name[l1];
		l1++;
	}
	while (owner[l2] != '\0')
	{
		o2[l2] = owner[l2];
		l2++;
	}
	tempdog = malloc(sizeof(dog_t));
	if (tempdog == NULL)
		return (NULL);
	tempdog->name = malloc(l1 * sizeof(tempdog->name));
	if (tempdog == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		tempdog->name[i] = name[i];
	tempdog->age = age;
	tempdog->owner = malloc(l2 * sizeof(tempdog->owner));
	if (tempdog == NULL)
		return (NULL);
	for (i = 0; i < l2; i++)
		tempdog->owner[i] = owner[i];
	return (tempdog);
}
