#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to a hash table
 * Return: none - void function
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned long int index;
	unsigned long int counter = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (counter != 0 && ht->array[index] != NULL)
			printf(", ");
		current = ht->array[index];
		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			counter++;
		}
	}
	printf("}\n");
}
