#include "hash_tables.h"


/**
 * hash_table_set - adds element to a hash table
 * @ht: the hash table to add/update key/value to
 * @key: the key, cannot be an empty string
 * @value: the value associated with key @key
 * Return: 1 if success, else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *newhn, *temp = NULL;
	char *tval = NULL;

	if (ht == NULL || ht->array == NULL || value == NULL)
		return (0);
	if (key == NULL || strlen(key))
		return (0);
	tval = strdup(value);
	if (tval == NULL)
		return (0);
	/*check for collision */
	temp = ht->array[idx];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = tval;
			temp->value = strdup(value);
			free(tval);
			return (1);
		}
		temp = temp->next;
	}
	/* no collision */
	newhn = malloc(sizeof(hash_node_t));
	if (newhn == NULL)
	{
		free(newhn);
		return (0);
	}
	newhn->key = strdup(key);
	newhn->value = tval;
	newhn->next = ht->array[idx];
	ht->array[idx] = newhn;
	return (1);
}
