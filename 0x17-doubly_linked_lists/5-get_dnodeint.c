#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - nth node of dlistint_t
 * @head: the list dlistint_t
 * @index: the index of node to return
 * Return: position of node else NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int pos;

	for (pos = 0; pos < index; pos++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
