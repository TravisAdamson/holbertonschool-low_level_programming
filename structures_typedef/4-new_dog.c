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
	char *n2 = name;
	char *o2 = owner;
	int i;
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
		free(tdog);
		return (NULL);
	}
	tdog->name = n2;
	tdog->age = age;
	tdog->owner = o2;
	return (tdog);
}
