#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - number of dlistint_t list
 * @h: the dlistint_t
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
