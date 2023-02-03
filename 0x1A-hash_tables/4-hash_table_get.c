#include "hash_tables.h"


/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: the key you are looking for
 * Return: value associated with key, NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *temp = NULL;

	if (key == NULL)
		return (NULL);
	if (ht != NULL)
	{
		idx = key_index((const unsigned char *)key, ht->size);
		temp = ht->array[idx];
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
