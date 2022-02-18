#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: the hash table to insert into
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *free_node;

	if (!ht)
		return;

	for (i = 0; i < ht->size; ++i)
	{
		for (free_node = ht->array[i]; ht->array[i]; free_node = ht->array[i])
		{
			ht->array[i] = ht->array[i]->next;
			free(free_node->key), free(free_node->value), free(free_node);
		}
	}
	free(ht->array), free(ht);
}
