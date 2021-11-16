#include "lists.h"

/**
 * *delete_nodeint_at_index - deletes a new node at a given position
 *
 * @head: array of nodes
 * @index: index of list where new node should be added
 * Return: 1 if it succeded, -1 if it failed
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current;
	unsigned int listLen;

	if (head == NULL)
		return (-1);

	listLen = (unsigned int)listint_len(*head);

	if (listLen == 0)
		return (-1);

	if (index == 0)
	{
		current = (*head)->next;
		*head = current;
		return (1);
	}

	prev = get_nodeint_at_index(*head, index - 1);
	current = get_nodeint_at_index(*head, index);

	if (prev != NULL && current != NULL)
	{
		prev->next = current->next;
		current->next = NULL;
		free(current);
		return (1);
	}
	return (-1);
}
