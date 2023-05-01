#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list safely
 * @h: double pointer to head node of list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i, size = 0;
	listint_t *current, *next;
	listint_t *freed_nodes[1024] = {NULL};

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		next = current->next;
		freed_nodes[size] = current;
		size++;
		free(current);
		current = next;
		for (i = 0; i < size; i++)
		{
			if (next == freed_nodes[i])
			{
				*h = NULL;
				return (size);
			}
		}
	}
	*h = NULL;
	return (size);
}

