#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Adds new nodes
 * @head: The previous list_t
 * @str: Value to be added to new list_t
 *
 * Return: The address of the new list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, length;
	char *newvalue;
	list_t *new;

	length = 0;
	if ((str == NULL) || (head == NULL))
		return (NULL);
	for(i = 0; str[i]; i++)
		length++;
	new = *head;
	newvalue = malloc(length + 1);
	if (newvalue == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		newvalue[i] = str[i];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(newvalue);
		return (NULL);
	}
	new->str = newvalue;
	new->len = length;
	new->next = *head;
	*head = new;
	return (new);
}
