#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints the hash table
 * @ht: The hash table to be used
 *
 * Return: No return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, size;
	hash_node_t *temp;
	char *tkey, *tvalue;

	if (ht != NULL)
	{
		size = ht->size;
		for (i = 0; i < size; i++)
		{
			temp = ht->array[i];
			if (temp->key && temp->value)
			{
				tkey = temp->key;
				tvalue = temp->value;
				printf("%s : %s", tkey, tvalue);
			}
			temp = temp->next;
			if (temp)
				printf(", ");
		}
	}
}
