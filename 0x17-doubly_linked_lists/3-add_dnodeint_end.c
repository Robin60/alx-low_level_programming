#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node at the end
 * @head: the dlistint_t
 * @n: the value added
 * Return: address of new node, else NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *temp;

	newnode = malloc(sizeof(dlistint_t));
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = newnode;
		newnode->prev = temp;
	}
	return (newnode);
}
