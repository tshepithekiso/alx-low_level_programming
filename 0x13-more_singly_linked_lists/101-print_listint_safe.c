#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - counts
 * @head: a pointer
 *
 * Return: success
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *ti, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	ti = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (ti == hare)
		{
			ti = head;
			while (ti != hare)
			{
				nodes++;
				ti = ti->next;
				hare = hare->next;
			}
			ti = ti->next;
			while (ti != hare)
			{
				nodes++;
				ti = ti->next;
			}
			return (nodes);
		}
		ti = ti->next;
		hare = (hare->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - print
 * @head: pointer
 *
 * Return: success
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
