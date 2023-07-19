#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Adds new node at index
 * @h: The list to add node to
 * @idx: The location to add the node to
 * @n: Value of the node to be added
 *
 * Return: The address of new node, or NULL on error
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *previous;

	previous = *h;
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (*h == NULL)
	{
		temp->next = NULL;
		temp->prev = NULL;
		*h = temp;
		return (temp);
	}
	if (idx == 0)
	{
		temp->next = previous;
		temp->prev = NULL;
		previous->prev = temp;
		*h = temp;
		return (*h);
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
	temp->prev = previous;
	previous->next->prev = temp;
	previous->next = temp;
	return (temp);
}
