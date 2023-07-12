#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Free the elements of the given list
 * @h: The list to be freed
 *
 * Return: No Return
 */
void free_list(const list_t *h)
{
	if (h == null)
		return;
	free_list(h->next
	free(h->str);
	free(h);
}
