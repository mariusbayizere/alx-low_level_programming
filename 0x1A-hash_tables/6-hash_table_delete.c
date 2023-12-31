#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	hash_table_t *disk = ht;
	hash_node_t *temp;
	unsigned long int x;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			temp = ht->array[x];
			while (temp != NULL)
			{
				tmp = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = tmp;
			}
		}
	}
	free(disk->array);
	free(disk);
}
