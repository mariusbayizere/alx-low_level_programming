#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tino;
	unsigned long int x;
	unsigned char brag_pointer = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (brag_pointer == 1)
				printf(", ");

			tino = ht->array[x];
			while (tino != NULL)
			{
				printf("'%s': '%s'", tino->key, tino->value);
				tino = tino->next;
				if (tino != NULL)
					printf(", ");
			}
			brag_pointer = 1;
		}
	}
	printf("}\n");
}
