#include "hash_tables.h"

/**
 * hash_table_print - print the values of a hash_table in order
 * @ht: the hash table to insert into
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, comma;

	if (!ht || !ht->array)
		return;
	printf("{");
	for (i = 0, comma = 0; i < ht->size; ++i)
	{
		if (comma && ht->array[i])
			printf(", ");
		while (ht->array[i])
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value), ++comma;
			if (ht->array[i]->next)
				printf(", ");
			ht->array[i] = ht->array[i]->next;
		}
	}
	printf("}\n");
}
