#include "lists.h"

/**
 * recursive_free - free all elements of linked list
 *
 * @head: listint_t list to be freed
 *
 * Return: number of nodes in the list
 *
 */
void recursive_free(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
}

/**
 * free_listint2 - free all elements of linked list
 *
 * @head: listint_t list to be freed
 *
 * Return: number of nodes in the list
 *
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	
	recursive_free(*head);

	*head = NULL;
}
