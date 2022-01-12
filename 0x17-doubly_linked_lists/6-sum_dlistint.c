#include "lists.h"

/**
 * sum_dlistint - sum all values
 * @head: pointer to head of double linked list
 * Return: sum of all values
 */
int sum_dlistint(dlistint_t *head)
{
	if (head != NULL)
		return (head->n + sum_dlistint(head->next));
	return (0);
}
