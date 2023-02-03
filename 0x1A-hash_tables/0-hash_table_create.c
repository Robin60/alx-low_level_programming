#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of array
 * Return: Pointer to newly created  hash table, else NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long idx = 0;
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		ht = NULL;
		return (NULL);
	}
	while (idx < size)
	{
		ht->array[idx] = NULL;
		idx++;
	}
	ht->size = size;
	return (ht);
}
