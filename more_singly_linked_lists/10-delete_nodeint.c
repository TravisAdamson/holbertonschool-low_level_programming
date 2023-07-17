#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index
 * @head: The list to delete the node from
 * @index: The location of the node to delete
 *
 * Return: 1 if successful and -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *following;
	int i;

	if (!*head || !head)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < (index -1); i++)
	{
		following = following->next;
		if (following == NULL)
			return (-1);
	}
	following = temp->next;
	temp->next = following->next;
	free(following);
	return (1);
}
