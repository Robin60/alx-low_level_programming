#include <sstdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: the listint_t
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elems = 0;

	while (h)
	{
		elems++;
		h = h->next;
	}
	return (elems);
}
