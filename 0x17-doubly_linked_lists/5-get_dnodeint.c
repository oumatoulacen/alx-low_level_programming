#include "lists.h"

/**
 * get_dnodeint_at_index - get elemet at index
 * @head: the head of doubly linked list
 * @index: the index where to get it
 * Return: the nth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *curr = head;

	if (head == NULL)
		return (NULL);
	while (curr && i < index)
	{
		curr = curr->next;
		i++;
	}
	if (i == index && curr)
		return (curr);
	else
		return (0);
}
