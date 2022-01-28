#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: size of hash table
 * Return: pointer to a hash table struct, NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int iter;
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(int *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (iter = 0; iter < size; iter++)
		new_table->array[iter] = malloc(sizeof(hash_node_t));
	new_table->size = size;
	return (new_table);
}
