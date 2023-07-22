#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to be used
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if successful 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *tvalue, *tkey;
	hash_node_t *new_node, *temp;

	if ((!key) || (!ht))
		return (0);
	tkey = strdup(key);
	tvalue = strdup(value);
	index = key_index((unsigned const char *)tkey, ht->size);
	if (!index)
		index = 0;
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strncmp(key, temp->key, strlen(key)) == 0)
		{
			free(temp->value);
			free(tkey);
			temp->value = tvalue;
			if (temp->value == NULL)
				return (0);
			else
				return (1);
		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		return (0);
	}
	new_node->key = tkey;
	new_node->value = tvalue;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
