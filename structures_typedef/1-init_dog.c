#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Creates a new variable struct dog
 * @d: The dog being created
 * @name: The dogs name
 * @age: The dogs age
 * @owner: The dogs owner
 *
 * Return: No Return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
