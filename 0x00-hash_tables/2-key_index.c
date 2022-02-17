#include "hash_tables.h"

/**
 * key_index - find the index of key
 * @key: the key
 * @size: size of the table
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
