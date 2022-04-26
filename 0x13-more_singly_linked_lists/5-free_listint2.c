#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;


	while (head)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}

	*head = NULL;
}
