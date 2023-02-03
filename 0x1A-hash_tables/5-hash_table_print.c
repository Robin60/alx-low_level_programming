#include "hash_tables.h"


/**
 * hash_table_print - prints a hash table
 * @ht: the hash tble
 * Print key/val in the order of appearance of hash tables
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *node = NULL;

	if (ht == NULL)
		return;

	printf("{");
	while (idx < ht->size)
	{
		node = ht->array[idx];
		while (node)
		{
			printf("'%s' : '%s'", node->key, node->value);
			if (ht->array[idx + 1] != NULL)
				break;
			printf(", ");
			node = node->next;
		}
		idx++;
	}
	printf("}\n");
}
