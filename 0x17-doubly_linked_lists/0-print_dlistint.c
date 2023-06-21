#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a d list
 * @h: the d list
 * Return: number of elements in d list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
