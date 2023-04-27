#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: singly linked list
 * Return: the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
