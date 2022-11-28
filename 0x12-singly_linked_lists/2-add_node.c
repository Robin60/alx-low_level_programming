#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: first node
 * @str: element to be duplicated
 * Return: address of new element, else NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	char *duplicate;
	int len;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(newnode);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	newnode->str = duplicate;
	newnode->len = len;
	newnode->next = *head;

	*head = newnode;
	return (newnode);
}
