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
	unsigned long int i;
	hash_node_t *temp;
	char *tkey, *tvalue;

	if (ht != NULL)
	{
		putchar('{');
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				temp = ht->array[i];
				while (temp)
				{
					tkey = temp->key;
					tvalue = temp->value;
					printf("%s : %s", tkey, tvalue);
					temp = temp->next;
					if (temp)
						printf(", ");
				}
			}
		}
		printf("}\n");
	}
}
