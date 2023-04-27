#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: first node
 * @str: data - string value
 * Return: head
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	while (str[i] != '\0')
		i++;
	if (head == NULL)
		head = malloc(sizeof(list_t));
	if (head == NULL)
		return (0);
	new->len = i;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (*head);
}

