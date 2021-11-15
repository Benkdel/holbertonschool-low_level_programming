#include "lists.h"

/**
 * *add_nodeint_end - adds a node at the end of the list
 *
 * @head: list of nodes
 * @n: value of node
 *
 * Return: address of the new node (head)
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *h;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		h = *head;
		while (h->next != NULL)
			h = h->next;
		h->next = newNode;
	}
	return (*head);
}
