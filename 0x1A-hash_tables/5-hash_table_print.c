#include "hash_tables.h"


/**
 * hash_table_print - prints a hash table
 * @ht: the hash tble
 * Print key/val in the order of appearance of hash tables
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (i =0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			printf("'%s' : '%s'", node->key, node->value);
			if (ht->array[i + 1] != NULL)
				printf(", ");
			node = node->next;
		}
	}
	printf("}\n");
}
