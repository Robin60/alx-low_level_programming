#include "hash_tables.h"


/**
 * hash_table_print - prints a hash table
 * @ht: the hash tble
 * Print key/val in the order of appearance of hash tables
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;
	printf("{");
	while (idx < ht->size)
	{
		temp = ht->array[idx];
		while (temp)
		{
			printf("'%s' : '%s'", temp->key, temp->value);
			if (ht->array[idx + 1] == NULL)
				break;
			printf(", ");
			temp = temp->next;
		}
		idx++;
	}
	printf("}\n");
}
