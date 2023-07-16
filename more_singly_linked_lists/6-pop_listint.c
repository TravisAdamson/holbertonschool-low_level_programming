#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Pops off the head of the given list
 * @head: The list to remove the head
 *
 * Return: The content of the head
 */
int pop_listint(listint_t **head)
{
	int rvalue;
	listint_t *newhead;

	rvalue = (*head)->n;
	if (head == NULL)
		return (0);
	newhead = malloc(sizeof(listint_t));
	if (newhead == NULL)
		return (0);
	newhead = (*head)->next;
	*head = newhead;
	free(newhead);
	return (rvalue);
}
