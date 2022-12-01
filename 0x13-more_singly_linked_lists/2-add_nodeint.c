#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: the list_t
 * @n: the integer to be added
 * Return: address of new element, else NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
