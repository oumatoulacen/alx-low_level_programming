#include "lists.h"

/**
 * add_dnodeint - add node at the beginnin of a doubly linked list
 * @head: the head of a linked list
 * @n: the n data of that d linked list
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = node;
	}
	*head = node;
	return (*head);
}
