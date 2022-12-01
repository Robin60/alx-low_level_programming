#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: the listint_t
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *bck, *fwd;

	if (*head == NULL || head == NULL)
		return (NULL);
	bck = NULL;

	while ((*head)->next != NULL)
	{
		fwd = (*head)->next;
		(*head)->next = bck;
		bck = *head;
		*head = fwd;
	}
	(*head)->next = bck;
	return (*head);
}
