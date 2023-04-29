#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: first
 * @index: the index of the node, starting at 0
 * Return: nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *curr;

	if (head == NULL)
		return (0);
	curr = head;
	for (i = 0; i < index; i++)
	{
		if (curr->next == NULL)
			return (0);
		curr = curr->next;
		head = curr;
	}
	return (head);
}
