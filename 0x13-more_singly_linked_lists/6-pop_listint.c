#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: the listint_t
 * Return: head nodes, 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int res;

	if (*head == NULL)
		return (0);
	temp = *head;
	res = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (res);
}
