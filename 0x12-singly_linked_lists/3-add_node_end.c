#include "lists.h"
#include <string.h>

/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @head: pointer to head/start of linked list
 * @str: string to be added to linked list
 * Return: address of new element else NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *last;
	int len;
	char *duplicate;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	duplicate = strdup(str);
	if (str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	len = 0;
	while (str[len])
		len++;
	newnode->str = duplicate;
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = newnode;
	}
	return (*head);
}
