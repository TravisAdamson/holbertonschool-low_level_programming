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
	char *tvalue;
	hash_node_t *new_node, *tnode, *tkey;

	if (!key)
		return (0);
	tvalue = strdup(value);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = (char *)key;
	new_node->value = tvalue;
	index = key_index((unsigned const char *)key, ht->size);
	if (!index)
		return (0);
	tkey = ht->array[index];
	if (!tkey)
		return (0);
	if (tkey->next == NULL)
		new_node->next = NULL;
	else
		new_node->next = tkey->next;
	tnode = ht->array[index - 1];
	if (tnode == NULL)
		return (1);
	tnode->next = new_node;
	ht->array[index] = new_node;
	return (1);
}
