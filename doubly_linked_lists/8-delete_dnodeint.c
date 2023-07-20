#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index
 * @head: The list to delete the node from
 * @index: The location of the node to delete
 *
 * Return: 1 if successful and -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (!*head || !head)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	if (index == 1)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
		if (temp->next == NULL)
			temp->prev->next = NULL;
		else
		{
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
		}
		free(temp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	temp->next->prev = temp->prev;
	temp->prev->next = temp->next;
	free(temp);
	return (1);
}
