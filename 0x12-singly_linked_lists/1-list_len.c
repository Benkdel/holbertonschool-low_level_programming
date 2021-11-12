#include "lists.h"


/**
 * list_len - returns number of elements in a linked list_t list
 *
 * @h: head of list (first node)
 *
 * Return: number of elements in list
 *
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
