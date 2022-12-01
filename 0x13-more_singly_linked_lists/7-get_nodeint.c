#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: the listint_t
 * @index: the index of the node
 * Return: address of nth node, else NULL;
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth;

	for (nth = 0; nth < index; nth++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
