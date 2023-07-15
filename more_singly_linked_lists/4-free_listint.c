#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Free the elements of the given list
 * @head: The list to be freed
 *
 * Return: No Return
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head->n);
	free(head);
}
