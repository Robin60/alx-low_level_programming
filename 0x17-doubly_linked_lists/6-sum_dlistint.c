#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - su data(n) of a dlistit_t linked list
 * @head: the linked list
 * Return: sum, 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
