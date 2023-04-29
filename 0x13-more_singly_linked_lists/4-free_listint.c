#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a list
 * @head: fisrt
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *old, *curr = head;

	if (curr != NULL)
	{
		old = curr;
		curr = curr->next;
		free(old);
	}
}
