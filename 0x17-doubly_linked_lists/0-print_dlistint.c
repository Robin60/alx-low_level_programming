#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistin - prints all elements of a dlistint
 * @h: dlistint address
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while(h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
