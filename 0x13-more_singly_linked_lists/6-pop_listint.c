#include "lists.h"

/**
 * pop_listint - deletes head node and returns its data
 *
 * @head: double pointer to linked list
 *
 * Return: head's data
 *
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *next;

	if (head != NULL)
	{
		next = (*head)->next;
		data = (*head)->n;
		free(*head);
		*head = next;
		return (data);
	}

	return (0);
}
