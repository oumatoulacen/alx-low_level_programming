#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * delete_nodeint_at_index - deletes the node at given index .
 * @head: address of fisrt
 * @index: at which point to delete the node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pre, *temp;
	unsigned int i;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{

		pre = *head;
		*head = (*head)->next;
		free(pre);
		return (1);
	}
	pre = *head;
	for (i = 2; i <= index && pre != NULL; i++)
	{
		pre = pre->next;
	}
	if (pre == NULL || pre->next == NULL)
		return (-1);
	temp = pre->next;
	pre->next = pre->next->next;
	free(temp);
	return (1);
}
