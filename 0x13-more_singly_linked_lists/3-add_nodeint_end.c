#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: first
 * @n: data
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *curr;

	if (node == NULL)
		return (0);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		curr = *head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = node;
	}
	return (node);
}
