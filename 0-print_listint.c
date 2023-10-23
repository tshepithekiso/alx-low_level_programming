#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print the elements of lists
 * @h: pointer to head of the lists
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
