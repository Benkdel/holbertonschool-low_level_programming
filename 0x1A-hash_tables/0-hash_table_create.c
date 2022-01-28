#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: size of hash table
 * Return: pointer to a hash table struct, NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	hash_node_t **array = NULL;
	unsigned long int iter;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;

	array = malloc(sizeof(int *) * size);
	if (array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (iter = 0; iter < size; iter++)
	{
		array[iter] = malloc(sizeof(hash_node_t));
		if (array[iter] == NULL)
		{
			for (iter -= 1; iter >= 0; iter--)
				free(array[iter]);
			free(new_table);
			return (NULL);
		}
	}
	new_table->array = array;
	return (new_table);
}
