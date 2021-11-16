#include "lists.h"

/**
 * *get_node2 - returns node at index
 *
 * @head: pointer to head of linked list
 * @index: index of node to retrieve
 *
 * Return: adress of node at index
 *
 */
listint_t *get_node2(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	node = head;

	while (node)
	{
		if (n == index)
			return (node);
		n++;
		node = node->next;
	}
	return (NULL);
}

/**
 * len_of_list - returns number of elements
 *
 * @h: len_of_list
 *
 * Return: number of nodes in the list
 *
 */
size_t len_of_list(const listint_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (0);

	nodes += len_of_list(h->next) + 1;

	return (nodes);
}

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

	listLen = (unsigned int)len_of_list(*head);

	if (listLen == 0)
		return (-1);

	if (index == 0)
	{
		current = (*head)->next;
		*head = current;
		return (1);
	}

	prev = get_node2(*head, index - 1);
	current = get_node2(*head, index);

	if (prev != NULL && current != NULL)
	{
		prev->next = current->next;
		current->next = NULL;
		free(current);
		return (1);
	}
	return (-1);
}
