#include "hash_tables.h"

/**
 * hash_table_get - get the value of a hashtable at specific index
 * @ht: the hash table to insert into
 * @key: the key for the hash table
 * Return: value or NULL if key can't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if (ht && key && key[0] &&
		ht->array[key_index((const unsigned char *)key, ht->size)])
		return (ht->array[key_index((const unsigned char *)key, ht->size)]->value);
	return (NULL);
}
