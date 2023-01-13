#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a node at the beginnig
 * @head: the dlistint_t
 * @n: the value added
 * Return: address of new node, else NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

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
		newnode->next = *head;
		(*head)->prev = newnode;
		*head = newnode;
	}
	return (newnode);
}
