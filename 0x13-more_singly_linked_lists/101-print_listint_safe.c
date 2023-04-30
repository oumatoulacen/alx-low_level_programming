#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to head node.
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current, *next;

	if (head == NULL)
		exit(98);

	current = head;
	while (current != NULL)
	{
		next = current->next;
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		if (next > current)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);
			break;
		}
		current = next;
	}
	return (count);
}
