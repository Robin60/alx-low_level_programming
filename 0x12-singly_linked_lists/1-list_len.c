#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: lists lists_tt
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t elems = 0;

	while (h)
	{
		elems++;
		h = h->next;
	}
	return (elems);
}
