#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: doubly linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *tmp;

	current = head;
	if (current == NULL)
		return;
	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
}
