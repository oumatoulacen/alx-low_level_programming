#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: first node
 * @str: string data of nodes
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *curr;
	list_t *new;
	int i = 0;

	while (str[i] != '\0')
		i++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (0);
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		curr = *head;
		while (curr->next != NULL)
			curr = curr->next;
	}
	curr->next = new;
	return (new);
}
