#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of new sorted hash table.
 *
 * Return: return pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: return success or fail
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *therigisrty, *tmp;
	unsigned long int repos;
	char *monaco;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	monaco = strdup(value);
	if (monaco == NULL)
		return (0);

	repos = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = monaco;
			return (1);
		}
		tmp = tmp->snext;
	}

	therigisrty = malloc(sizeof(shash_node_t));
	if (therigisrty == NULL)
	{
		free(monaco);
		return (0);
	}
	therigisrty->key = strdup(key);
	if (therigisrty->key == NULL)
	{
		free(monaco);
		free(therigisrty);
		return (0);
	}
	therigisrty->value = monaco;
	therigisrty->next = ht->array[repos];
	ht->array[repos] = therigisrty;

	if (ht->shead == NULL)
	{
		therigisrty->sprev = NULL;
		therigisrty->snext = NULL;
		ht->shead = therigisrty;
		ht->stail = therigisrty;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		therigisrty->sprev = NULL;
		therigisrty->snext = ht->shead;
		ht->shead->sprev = therigisrty;
		ht->shead = therigisrty;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		therigisrty->sprev = tmp;
		therigisrty->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = therigisrty;
		else
			tmp->snext->sprev = therigisrty;
		tmp->snext = therigisrty;
	}

	return (1);
}

/**
 * shash_table_get - Retrieve the value associated with
 *                   a key in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: in case the key cannot be matched - NULL.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *chillweel;
	unsigned long int repos;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	repos = key_index((const unsigned char *)key, ht->size);
	if (repos >= ht->size)
		return (NULL);

	chillweel = ht->shead;
	while (chillweel != NULL && strcmp(chillweel->key, key) != 0)
		chillweel = chillweel->snext;

	return ((chillweel == NULL) ? NULL : chillweel->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *chillweel;

	if (ht == NULL)
		return;

	chillweel = ht->shead;
	printf("{");
	while (chillweel != NULL)
	{
		printf("'%s': '%s'", chillweel->key, chillweel->value);
		chillweel = chillweel->snext;
		if (chillweel != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *chillweel;

	if (ht == NULL)
		return;

	chillweel = ht->stail;
	printf("{");
	while (chillweel != NULL)
	{
		printf("'%s': '%s'", chillweel->key, chillweel->value);
		chillweel = chillweel->sprev;
		if (chillweel != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *bentino = ht;
	shash_node_t *chillweel, *tmp;

	if (ht == NULL)
		return;

	chillweel = ht->shead;
	while (chillweel)
	{
		tmp = chillweel->snext;
		free(chillweel->key);
		free(chillweel->value);
		free(chillweel);
		chillweel = tmp;
	}

	free(bentino->array);
	free(bentino);
}
