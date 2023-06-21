#include "lists.h"

/**
 * sum_dlistint - Sum elements of a list
 * @head: the head of doublty linked list
 * Return: the sum of all the data (n) of a dlistint_t linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int count = 0;
	dlistint_t *curr = head;

	if (!head)
		return (0);
	while (curr)
	{
		count += curr->n;
		curr = curr->next;
	}
	return (count);
}
