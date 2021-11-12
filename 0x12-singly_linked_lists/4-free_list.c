#include"lists.h"


/**
 * free_list - free memory allocated by list
 *
 * @head: pointer to first node of list
 *
 * Return: none - void function
 *
 */
void free_list(list_t *head)
{
	list_t *h;

	while (head)
	{
		h = head->next;
		free(head->str);
		free(head);
		head = h;
	}
}
