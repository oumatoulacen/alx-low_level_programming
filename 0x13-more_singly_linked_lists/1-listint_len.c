#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: singly linked list
 * Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

