#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: singly linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	if (temp != NULL)
	{
		if (temp->str != NULL)
			free(temp->str);
		free(temp);
		while (temp->next != NULL)
		{
			if (temp->next->str != NULL)
				free(temp->next->str);
			free(temp->next);
			temp = temp->next;
		}

	}
}
