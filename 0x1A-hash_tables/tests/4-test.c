#include "../hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	hash_node_t *current = NULL;
	unsigned long int i = 0;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "Carlos", "smart");
	hash_table_set(ht, "Marisol", "smarter");
	hash_table_set(ht, "Amelia", "perfect");
	hash_table_set(ht, "hetairas", "collideswithmentioner");
	hash_table_set(ht, "mentioner", "collideswithhetairas");

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				printf("Index: %lu -> key: %s -> Value: %s - ", i, current->key, current->value);
				current = current->next;
			}
		}
		i++;
	}
	return (EXIT_SUCCESS);
}
