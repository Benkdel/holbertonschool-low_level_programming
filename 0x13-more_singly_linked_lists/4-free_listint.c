#include "lists.h"

/**
 * free_listint - free all elements of linked list
 *
 * @head: listint_t list to be freed
 *
 * Return: number of nodes in the list
 *
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
}
