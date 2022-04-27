#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of a list.
 * @index: index of the node, starting at 0.
 *
 * Return: nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;

	if (!head)
		return (NULL);

	while(head->next != NULL)
	{
		if (i == index)
			return (head);
		i++, head = head->next;
	}

	return (NULL);
}
