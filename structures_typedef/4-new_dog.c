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
	char *n2;
	char *o2;
	int i;
	dog_t *tdog;
	
	l1 = 0;
	l2 = 0;
	while (name[l1])
		l1++;
	while (owner[l2])
		l2++;
	n2 = malloc(l1);
	if (n2 == NULL)
		free(n2);
	for (i = 0; i < l1; i++)
		n2[i] = name[i];
	o2 = malloc(l2);
	if (o2 == NULL)
		free(o2);
	for (i = 0; i < l2; i++)
		o2[i] = owner[i];
	tdog = malloc(sizeof(dog_t));
	if (tdog == NULL)
		return (NULL);
	tdog->name = malloc(l1 * sizeof(tdog->name));
	if (tdog->name == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		tdog->name[i] = n2[i];
	tdog->age = age;
	tdog->owner = malloc(l2 * sizeof(tdog->owner));
	if (tdog->owner == NULL)
		return (NULL);
	for (i = 0; i < l2; i++)
		tdog->owner[i] = o2[i];
	return (tdog);
}
