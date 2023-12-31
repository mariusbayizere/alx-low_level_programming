#include "hash_tables.h"
/**
 * hash_table_get - Retrieve the value associated with a key from a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to search for.
 * Return: Upon success the function returns a pointer to the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int buffer;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	buffer = key_index((const unsigned char *)key, ht->size);
	if (buffer >= ht->size)
		return (NULL);

	node = ht->array[buffer];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);

}
