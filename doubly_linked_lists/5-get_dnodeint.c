#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Finds the value of the node at index
 * @head: The list to look through
 * @index: The location of the node to find in the list
 *
 * Return: The value of node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head != NULL)
			head = head->next;
		else
			return (NULL);
	}
	return (head);
}
