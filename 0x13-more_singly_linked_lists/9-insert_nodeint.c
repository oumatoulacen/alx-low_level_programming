#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: first
 * @idx: index of the list where the new node should be added. starts at 0
 * @n: data for that new node
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *curr, *new;

	if (head == NULL)
		return (0);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (0);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	curr = *head;
	for (i = 0; i < idx - 1 && curr != NULL; i++)
		curr = curr->next;
	if (curr == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = curr->next ? curr->next : NULL;
	curr->next = new;
	return (curr);
}
