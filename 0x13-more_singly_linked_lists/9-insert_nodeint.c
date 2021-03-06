#include "lists.h"

/**
 * list_len - returns number of elements
 *
 * @h: len_of_list
 *
 * Return: number of nodes in the list
 *
 */
size_t list_len(const listint_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (0);

	nodes += list_len(h->next) + 1;

	return (nodes);
}

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

	if (list_len(*head) == 0 && idx > 0)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		next = get_node(*head, 0);
		if (next != NULL)
		{
			newNode->next = *head;
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
