#include "hash_tables.h"


/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;
	hash_node_t *next_temp = NULL;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		next_temp = ht->array[i];
		while (temp)
		{
			temp = next_temp;
			next_temp = next_temp->next;
			if (temp->key != NULL)
				free(temp->key);
			if (temp->value != NULL)
				free(temp->value);
			free(temp);
		}
		free(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
}
