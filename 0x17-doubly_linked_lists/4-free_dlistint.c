#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: head pointer to the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	head = head->next;

	while(head)
	{
		free(temp);
		temp = head;
		head = head->next;
	}

	free(temp);
}
