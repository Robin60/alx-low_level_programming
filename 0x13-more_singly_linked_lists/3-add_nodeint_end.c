#include "lists.h"
#include <stdlb.h>
#include <stdio.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t
 * @head: the listint_t
 * @n: the integer to be added
 * Return: address of new element, else NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
