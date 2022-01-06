#include "lists.h"

/**
 * get_dnodeint_at_index - returns node at index of a dlistint_t
 * @head: pointer to double linked list
 * @index: index of node to retreive, starting from 0
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
        if (head != NULL && index != 0)
                return (get_dnodeint_at_index(head->next, index - 1));
        return (head);
}
