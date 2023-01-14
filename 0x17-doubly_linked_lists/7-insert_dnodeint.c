#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: the dlistint
 * @idx: the index to insert at
 * @n: the value to insert
 * Return: address of new node, else NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int p = 0;

	temp = *h;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		new->next = temp;
		*h = new;
		return (new);
	}
	while (p < idx - 1)
	{
		if (temp == NULL || temp-next == NULL)
			return (NULL);
		temp = temp->next;
		p++;
	}
	new->prev = temp;
	new->next = temp->next;
	temp->next = new;
	new->next->prev = new;
	return (new);
}
