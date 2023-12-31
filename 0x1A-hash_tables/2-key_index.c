#include "hash_tables.h"

/**
 * key_index - Computes the index of a key in a hash table
 * @key: The key to be hashed (a string of characters)
 * @size: The size of the hash table.
 *
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
