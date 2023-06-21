#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: the d l list
 * @idx: index where insertion
 * @n: the data n of new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr, *node, *tmp;
	unsigned int i = 0;

	curr = *h;
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (0);
	node->n = n;
	if (*h == NULL)
	{
		if (idx == 0)
		{
			node->next = NULL;
			node->prev = NULL;
			*h = node;
			return (*h);
		}
		else
		{
			free(node);
			return (NULL);
		}
	}
	while (curr && i < idx)
	{
		tmp = curr;
		curr = curr->next;
		i++;
	}
	if (i == idx)
	{
		tmp->next = node;
		node->prev = tmp;
		node->next = curr;
	}
	return (node);
}
