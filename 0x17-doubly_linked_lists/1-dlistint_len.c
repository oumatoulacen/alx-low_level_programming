#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - return number of elements in a doubly linked list
 * @h: doubly linked list
 * Return: number of elements in a d linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
