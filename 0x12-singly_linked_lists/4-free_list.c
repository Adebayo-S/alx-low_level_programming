#include "lists.h"

/**
 * free_list - Frees list.
 * @head: The list.
 */
void free_list(list_t *head)
{
	list_t *temp = NULL;

	while(head)
	{
		temp = head;
		free(head->str);
		free(head);
		temp = temp->next;
	}
}
