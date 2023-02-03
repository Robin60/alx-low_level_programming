#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: the key to index
 * @size: the size of array of the hash tables
 * Return: index key/value pair is stored in the array
 * of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
