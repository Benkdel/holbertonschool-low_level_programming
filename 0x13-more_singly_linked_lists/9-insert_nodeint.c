#include "lists.h"

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
	prev = get_nodeint_at_index(*head, idx - 1);
	next = get_nodeint_at_index(*head, idx);

	if (prev != NULL && next != NULL)
	{
		prev->next = newNode;
		newNode->next = next;
		return (newNode);
	}

	free(newNode);
	return (NULL);
}
