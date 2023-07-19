#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - Prints the elements of the given list
 * @h: The list to be used
 *
 * Return: The number of nodes
 */
size_t dprint_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
