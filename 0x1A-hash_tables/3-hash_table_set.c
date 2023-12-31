#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 * Return: Upon success, the function returns 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp;
	char *pointer_copy;
	unsigned long int buffer, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	pointer_copy = strdup(value);
	if (pointer_copy == NULL)
		return (0);

	buffer = key_index((const unsigned char *)key, ht->size);
	for (x = buffer; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = pointer_copy;
			return (1);
		}
	}

	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
	{
		free(pointer_copy);
		return (0);
	}
	temp->key = strdup(key);
	if (temp->key == NULL)
	{
		free(temp);
		return (0);
	}
	temp->value = pointer_copy;
	temp->next = ht->array[buffer];
	ht->array[buffer] = temp;

	return (1);
}
