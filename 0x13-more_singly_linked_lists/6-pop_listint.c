#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: first
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (head == NULL)
		return (0);
	first = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = first;

	return (n);
}
