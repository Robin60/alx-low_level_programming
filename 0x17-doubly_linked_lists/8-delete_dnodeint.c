#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: the double linked list
 * @index: index of deletion
 * Return: 1 if succeeded else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int p = 0;

	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (p < index - 1)
	{
		temp = temp->next;
		p++;
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
