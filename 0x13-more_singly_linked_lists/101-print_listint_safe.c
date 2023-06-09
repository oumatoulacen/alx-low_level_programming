#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to head node
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, count = 0;
	const listint_t *current, *next;
	const listint_t *printed_nodes[1024] = {NULL};

	if (head == NULL)
		exit(98);

	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		printed_nodes[count] = current;
		count++;
		next = current->next;
		for (i = 0; i < count && next; i++)
		{
			if (next == printed_nodes[i])
			{
				printf("-> [%p] %d\n", (void *)next, next->n);
				return (count);
			}
		}
		current = next;
	}
	return (count);
}

