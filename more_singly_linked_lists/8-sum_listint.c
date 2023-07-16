#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Finds the sum of the nodes in the given list
 * @head: The list to add up
 *
 * Return: The sum of nodes in the list
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum+= head->n, head = head->next)
		;
	return (sum);
}
