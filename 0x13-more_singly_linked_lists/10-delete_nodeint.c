#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: the listint_t
 * @index:  index of the node that should be deleted
 * Return: 1 if successs, else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *temp = *head;
	unsigned int nth;

	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (nth = 0; nth < (index - 1); nth++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	del = temp->next;
	temp->next = del->next;
	free(del);
	return (1);
}
