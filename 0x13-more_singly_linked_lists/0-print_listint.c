#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: listint_t list
 *
 * Return: number of nodes in the list
 *
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 1;

	if (h == NULL)
		return (0);

	printf("%d\n", h->n);
	nodes += print_listint(h->next);

	return (nodes);
}
