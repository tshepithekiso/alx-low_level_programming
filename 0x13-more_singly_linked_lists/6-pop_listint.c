#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * @head: pointer lists
 *
 * Return: if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
