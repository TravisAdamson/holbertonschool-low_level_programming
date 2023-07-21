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
	hash_node_t *new_node;

	if (!key)
		return (0);
	tkey = strdup(key);
	tvalue = strdup(value);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	index = key_index((unsigned const char *)tkey, ht->size);
	if (!index)
		return (0);
	new_node->key = tkey;
	new_node->value = tvalue;
	new_node->next = ht->array[index]->next;
	ht->array[index] = new_node;
	return (1);
}
