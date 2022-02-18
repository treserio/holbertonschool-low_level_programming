#include "hash_tables.h"

/**
 * hash_table_get - get the value of a hashtable at specific index
 * @ht: the hash table to insert into
 * @key: the key for the hash table
 * Return: value or NULL if key can't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

	if (ht && ht->array && key && key[0] &&
		ht->array[key_index((const unsigned char *)key, ht->size)]
	)
		for (node = ht->array[key_index((const unsigned char *)key, ht->size)];
			node; node = node->next)
			if (!strcmp(node->key, key))
				return (node->value);
	return (NULL);
}
