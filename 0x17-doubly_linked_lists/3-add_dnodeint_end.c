#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of a doubly linked list
 * @head: the head of a linked list
 * @n: the n data of that d linked list to add
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *tmp = *head;

	node = malloc(sizeof(dlistint_t));
	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = node;
	node->prev = tmp;
	return (node);
}
