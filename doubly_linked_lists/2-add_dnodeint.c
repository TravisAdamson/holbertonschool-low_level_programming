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
listint_t *add_dnodeint(dlistint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
