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
	hash_node_t *worker, *input_node, *chk;
	unsigned long int idx;

	input_node = malloc(sizeof(hash_node_t));
	/* confirm we can insert into the hash_table given */
	if (!ht || !ht->array || !ht->size || !key || !key[0] || !input_node)
		return (0);
	/* establish new node and confirm mallocs */
	input_node->key = strdup(key);
	input_node->value = strdup(value);
	input_node->next = NULL;
	if (!input_node->key || !input_node->value)
		return (0);
	/* find the index */
	idx = key_index((const unsigned char *)key, ht->size);
	/* check for collision */
	for (chk = ht->array[idx]; chk; chk = chk->next)
		if (!strcmp(chk->key, (char *)key))
			break;
	if (chk)
	{
		free(chk->value);
		chk->value = input_node->value;
		free(input_node->key), free(input_node);
	}
	else
	{
		/* create temp pointer to hash table before index we want */
		worker = ht->array[idx - 1];
		/* check that prev index node exists */
		if (!worker)
			ht->array[idx] = input_node;
		else
		{
			ht->array[idx] = input_node;
			input_node->next = worker->next;
			worker->next = input_node;
		}
	}
	return (1);
}
