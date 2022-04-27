#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *curr, *prev, *temp;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);

	curr = prev = *head;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	while (curr || !(*head))
	{
		temp = curr;
		if (idx == 0 && !(*head))
		{
			new->next = curr;
			*head = new;
			return (new);
		}
		if (i == idx)
		{
			new->next = curr;
			prev->next = new;
			return (new);
		}
		curr = curr->next;
		prev = temp;
		i++;
	}

	return (NULL);
}
