#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

int main(void)
{
	dlistint_t *newnode, *head, *temp;
	int n, choice = 1;

	while (choice == 0)
	{
		newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
		printf("Enter the value to list");
		scanf("%d", &newnode->n);
		newnode->next = 0;
		newnode->prev = 0;
		if (head==0)
			head = temp = newnode;
		else
		{
			temp->next = newnode;
			newnode->prev = temp;
			temp = temp->next;
		}
		printf("Enter choice");
		scanf("%d", &choice);
	}
	return (1);
}
