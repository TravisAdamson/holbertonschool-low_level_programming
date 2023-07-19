#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node
 * @head: The previous list_t
 * @n: Value to be added to new list_t
 *
 * Return: The address of the new list_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	head->prev = new;
	*head = new;
	return (new);
}
