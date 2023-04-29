#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sums of all the data (n) of a listint_t linked list
 * @head: first
 * Return: sum of (n)s.
 */

int sum_listint(listint_t *head)
{
	int n = 0;
	listint_t *curr;

	if (head == NULL)
		return (0);
	curr = head;
	while (curr)
	{
		n += curr->n;
		curr = curr->next;
	}
	return (n);
}
