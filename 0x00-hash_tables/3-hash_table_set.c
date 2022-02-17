#include "hash_tables.h"

/**
 * hash_table_set - set the the index of a hash table to specific node
 * @ht: the hash table to insert into
 * @key: the key for the hash table
 * @value: the value to assign the key
 * Return: 1 on success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *worker, *input_node;
	unsigned long int idx;

	input_node = malloc(sizeof(hash_node_t));

	/* confirm we can insert into the hash_table given */
	if (!ht || !ht->array || !ht->size || !key || !value || !input_node)
		return (0);

	/* establish new node and confirm mallocs */
	input_node->key = strdup(key);
	input_node->value = strdup(value);
	if (!input_node->key || !input_node->value)
		return (0);

	/* find the index */
	idx = key_index((const unsigned char *)key, ht->size);

	/* create temp pointer to hash table index we want */
	worker = ht->array[idx - 1];

	/* check for collision */
	if (ht->array[idx] && ht->array[idx]->key && strcmp(ht->array[idx]->key, key))
		input_node->next = *(ht->array);
	/* check that prev index node exists */
	else if (!worker)
		ht->array[idx] = input_node;
	else
	{
		/* insert node */
		input_node->next = worker->next;
		worker->next = input_node;
	}

	return (1);
}
