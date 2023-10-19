#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - the number of elements 
 * @h: linked list
 *
 * Return: number of linked lists
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
