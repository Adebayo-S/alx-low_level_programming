#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end
 *               of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the list.
 * @n: The integer for the new node to contain.
 *
 * Return: the address of the new element,
 *          or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new = NULL;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!(*head))
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}

	return (new);
}
