#include "lists.h"

/**
 * *add_node - adds a node at the beginning of list
 *
 * @head: list of nodes
 * @str: value to add at each node
 *
 * Return: describe
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	s = strdup(str);
	if (s == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = s;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
