#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Finds value that matches key
 * @ht: The hash table to be used
 * @key: The key
 *
 * Return: Value if successful NULL if not
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *tkey;
	hash_node_t *temp;

	if ((!key) || (!ht))
		return (0);
	tkey = strdup(key);
	index = key_index((unsigned const char *)tkey, ht->size);
	if (!index)
		return (NULL);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strncmp(key, temp->key, strlen(key)) == 0)
		{
			tvalue = temp->value;
			return (tvalue);
		}
		temp = temp->next;
	}
	return (NULL);
}
