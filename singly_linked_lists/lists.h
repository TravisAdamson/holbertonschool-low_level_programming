#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - Singly linked list
 * @str: The string to be printed in list
 * @len: The length of the string
 * @next: The next list
 * Description: A singly linked list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
