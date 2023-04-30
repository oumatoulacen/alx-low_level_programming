#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely.
 * @head: pointer to head node
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *tortoise = head, *hare = head;

    if (head == NULL)
        exit(98);

    while (tortoise != NULL && hare != NULL && hare->next != NULL)
    {
        tortoise = tortoise->next;
        hare = hare->next->next;
        printf("[%p] %d\n", (void *)tortoise, tortoise->n);
        count++;

        if (tortoise == hare)
        {
            printf("-> [%p] %d\n", (void *)hare, hare->n);
            printf("Loop starts at [%p]\n", (void *)tortoise);
            exit(98);
        }
    }

    return (count);
}

