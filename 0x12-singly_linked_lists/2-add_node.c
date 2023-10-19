#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add node
 * @head: first linked list
 * @str: string to be added
 *
 * Return: new line or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
