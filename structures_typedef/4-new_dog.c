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
	char *n2 = name;
	char *o2 = owner;
	dog_t *tdog;
	
	l1 = 0;
	l2 = 0;
	while (name[l1])
		l1++;
	while (owner[l2])
		l2++;
	tdog = malloc(sizeof(dog_t));
	if (tdog == NULL)
	{
		free(tdog->name);
		free(tdog->owner);
		free(tdog);
		return (NULL);
	}
	for (i = 0; i < l1; i++)
		tdog->name[i] = n2[i];
	tdog->age = age;
	for (i = 0; i < l2; i++)
		tdog->owner[i] = o2[i];
	return (tdog);
}
