#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees dlistint_t
 * @head: the dlistint_t
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
