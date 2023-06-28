#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the given dog
 * @d: The dog to be freed
 *
 * Return: No Return
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
