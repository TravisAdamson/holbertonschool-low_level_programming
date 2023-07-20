#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table of given size
 * @size: The size of the hash table
 *
 * Return: A pointer to the new table, or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_t;

	if (size <= 0)
		return (NULL);
	new_t = malloc(sizeof(hash_table_t));
	if (!new_t)
		return (NULL);
	new_t->size = size;
	new_t->array = malloc(size * sizeof(hash_node_t *));
	if (new_t->array == NULL)
	{
		free(new_t);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_t->array[i] = NULL;
	return (new_t);
}
