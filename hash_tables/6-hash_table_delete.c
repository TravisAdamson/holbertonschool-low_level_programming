#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_node_delete - Deletes the current node of the table
 * @temp: The node to be deleted recursively
 *
 * Return: No return
 */
void hash_node_delete(hash_node_t *temp)
{
	if (temp == NULL)
		return;
	hash_node_delete(temp->next);
	free(temp->key);
	free(temp->value);
	free(temp);
}

/**
 * hash_table_delete - Deletes the hash table
 * @ht: The hash table to be deleted
 *
 * Return: No return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				temp = ht->array[i];
				hash_node_delete(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
