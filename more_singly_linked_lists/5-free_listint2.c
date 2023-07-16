#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Free the elements of the given list and sets head to NULL
 * @head: The list to be freed
 *
 * Return: No Return
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*head = NULL;
}
