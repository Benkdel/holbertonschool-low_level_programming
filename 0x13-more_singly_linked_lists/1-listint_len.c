#include "lists.h"

/**
 * listint_len - returns number of elements
 *
 * @h: listint_t list
 *
 * Return: number of nodes in the list
 *
 */
size_t listint_len(const listint_t *h)
{
	int nodes = 1;

	if (h == NULL)
		return (0);

	nodes += listint_len(h->next);

	return (nodes);
}
