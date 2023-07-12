#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Prints the elements of the given list
 * @h: The list to be used
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (h->str == NULL)
			h->str = (nil);
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
