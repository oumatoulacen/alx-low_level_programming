#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: fisrt
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *curr, *trv = *head;

	while (trv != NULL)
	{
		curr = trv;
		trv = trv->next;
		free(curr);
	}
	*head = NULL;
}

