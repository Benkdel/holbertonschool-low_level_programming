#include "hash_tables.h"

/**
 * hash_table_get -  retrieves a value associated with a key
 * @ht: pointer to a hash table
 * @key: key as string
 * Return: value associated with key, NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current = NULL;
	char *value = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = (hash_djb2((const unsigned char *)key) % ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strncmp(current->key, key, strlen(current->key)) == 0)
		{
			value = strdup(current->value);
			return (value);
		}
		current = current->next;
	}
	return (0);
}
