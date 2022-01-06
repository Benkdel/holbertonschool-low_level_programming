#include "../lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;
	dlistint_t *new;
	dlistint_t *new2;
	dlistint_t hello = {8, NULL, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (EXIT_FAILURE);
	}
	new->n = 9;
	head->prev = new;
	new->next = head;
	new->prev = NULL;
	head = new;
	n = print_dlistint(head);
	printf("-> %lu elements\n", n);

	new2 = malloc(sizeof(dlistint_t));
	if (new2 == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (EXIT_FAILURE);
	}
	new2->n = 10;
	head->prev = new2;
	new2->next = head;
	new2->prev = NULL;
	head = new2;
	n = print_dlistint(head);
	printf("-> %lu elements\n", n);

	n = print_dlistint(NULL);
	printf("-> %lu elements\n", n);

	n = print_dlistint(&hello);
	printf("-> %lu elements\n", n);

	n = dlistint_len(head);
	printf("-> %lu elements\n", n);

	free(new);
	free(new2);

	return (EXIT_SUCCESS);
}
