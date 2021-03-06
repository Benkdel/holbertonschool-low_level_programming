#include "lists.h"

/**
 * *add_nodeint - adds a node at the beginning of the list
 *
 * @head: list of nodes
 * @n: value of node
 *
 * Return: address of the new node (head)
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
