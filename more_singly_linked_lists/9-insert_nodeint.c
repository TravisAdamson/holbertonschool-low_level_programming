#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Adds new node at index
 * @head: The list to add node to
 * @idx: The location to add the node to
 * @n: Value of the node to be added
 *
 * Return: The address of new node, or NULL on error
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *previous;

	previous = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		temp->next = previous;
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
	previous->next = temp;
	return (temp);
}
