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
	if (*head == NULL)
		return;
	free_listint2(*head);
	*head = NULL;
}
