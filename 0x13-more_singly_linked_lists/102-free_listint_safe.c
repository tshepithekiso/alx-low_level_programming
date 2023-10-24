#include "lists.h"

/**
 * free_listint_safe - free a linked list
 * @h: first node int a linked list
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int di;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		di = *h - (*h)->next;
		if (di > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
		free(*h);
		*h = NULL;
		len++;
		break;
		}
	}

	*h = NULL;

	return (len);
}
