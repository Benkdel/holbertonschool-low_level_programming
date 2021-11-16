#include "lists.h"


/**
 * *get_node - returns node at index
 *
 * @head: pointer to head of linked list
 * @index: index of node to retrieve
 *
 * Return: adress of node at index
 *
 */
listint_t *get_node(listint_t *head, unsigned int index)
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

/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: array of nodes
 * @idx: index of list where new node should be added
 * @n: value to add
 *
 * Return: address of new node
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *prev, *next;

	if (newNode == NULL || head == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		next = get_node(*head, 0);
		if (next != NULL)
		{
			newNode->next = (*head)->next;
			*head = newNode;
			return (newNode);
		}	
	}
	
	next = get_node(*head, idx);
	prev = get_node(*head, idx - 1);

	if (prev != NULL && next != NULL)
	{
		prev->next = newNode;
		newNode->next = next;
		return (newNode);
	}

	free(newNode);
	return (NULL);
}
