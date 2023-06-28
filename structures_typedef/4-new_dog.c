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
	dog_t *tdog;
	
	l1 = 0;
	l2 = 0;
	for (i = 0; name[l1]; i++)
	{
		if (name[l1] != '\0')
			l1++;
		else
			continue;
	}
	for (i = 0; owner[l2]; i++)
	{
		if (name[l2] != '\0')
			l2++;
		else
			continue;
	}
	n2 = malloc(l1);
	if (n2 == NULL)
	{
		free(n2);
		return (NULL);
	}
	o2 = malloc(l2);
	if (o2 == NULL)
	{
		free(n2);
		return (NULL);
	}
	tdog = malloc(sizeof(dog_t));
	if (tdog == NULL)
	{
		free(tdog);
		return (NULL);
	}
	for (i = 0; i < l1; i++)
		n2[i] = name[i];
	for (i = 0; i < l2; i++)
		o2[i] = owner[i];
	tdog->name = n2;
	tdog->owner = o2;
	return (tdog);
}
