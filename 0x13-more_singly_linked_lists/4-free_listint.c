#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a listint_t
 * @head: the listin_t
 */

void free_listint(listint_t *head)
{
	listint_t *temp;
	
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
