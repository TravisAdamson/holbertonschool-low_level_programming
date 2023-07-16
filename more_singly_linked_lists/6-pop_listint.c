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
	listint_t *currenth, *templisth;

	if (*head)
	{
		templisth = currenth = *head;
		rvalue = currenth->n;
		*head = current->next;
		free(templisth);
	}
	else
		rvalue = 0;
	return (rvalue);
}
