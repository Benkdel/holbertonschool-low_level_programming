#include <stdio.h>
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
	if (h == NULL)
		return (0);

	printf("%i\n", h->n);
	return (1 + print_listint(h->next));
}

