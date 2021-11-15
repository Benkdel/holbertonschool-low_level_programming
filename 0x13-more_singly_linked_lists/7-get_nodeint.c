#include "lists.h"

/**
 * *get_nodeint_at_index - returns node at index
 *
 * @head: pointer to head of linked list
 * @index: index of node to retrieve
 *
 * Return: adress of node at index 
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	node = head;

	while (head)
	{
		if (n == index)
			return (node);
		n++;
		node = node->next;
	}

	return (NULL);
}
