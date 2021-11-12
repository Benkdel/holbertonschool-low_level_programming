#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all elements of a list_t list
 *
 * @h: list_t
 *
 * Return: returns number of elements found
 *
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
	
		count++;
		h = h->next;
	}

	return (count);
}
