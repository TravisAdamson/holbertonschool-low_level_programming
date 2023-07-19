#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Adds new node at index
 * @head: The list to add node to
 * @idx: The location to add the node to
 * @n: Value of the node to be added
 *
 * Return: The address of new node, or NULL on error
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *temp, *previous;

	previous = *head;
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		temp->next = previous;
		temp->prev = NULL;
		*head = temp;
		return (*head);
	}
	while (idx > 1)
	{
		previous = previous->next;
		idx--;
		if (!previous)
		{
			free(temp);
			return (NULL);
		}
	}
	temp->next = previous->next;
	temp->prev = prev;
	previous->next = temp;
	return (temp);
}
