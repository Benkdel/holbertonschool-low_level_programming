#include "hash_tables.h"

/**
 * hash_table_set - adds element to the hash table
 * @ht: pointer to hash table
 * @key: key string
 * @value: value asociated with the key
 * Return: 1 if succeded, 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *head = NULL;
	hash_node_t *node = NULL;

	if (ht == NULL)
		return (0);

	index = (hash_djb2((const unsigned char *)key) % ht->size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	head = node;
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = head;
	}
	else
	{
		node->next = ht->array[index];
		head = node;
	}
	return (1);
}
