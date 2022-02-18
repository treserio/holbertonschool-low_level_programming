#include "hash_tables.h"

/**
 * hash_table_print - print the values of a hash_table in order
 * @ht: the hash table to insert into
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, comma;
	hash_node_t *print_node;

	if (!ht || !ht->array)
		return;
	printf("{");
	for (i = 0, comma = 0; i < ht->size; ++i)
	{
		/* use print_node to maintain ht->array head */
		for (print_node = ht->array[i]; print_node; print_node = print_node->next)
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", print_node->key, print_node->value), ++comma;
		}
	}
	printf("}\n");
}
