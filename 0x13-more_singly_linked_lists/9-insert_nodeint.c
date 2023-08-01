#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: receive double pointer
 * @idx: receive position to insert node
 * @n: receive data
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t x;
	listint_t *ptr = *head;
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	for (x = 0; ptr && x < idx; x++)
	{
		if (x == idx - 1)
		{
			temp->next = ptr->next;
			ptr->next = temp;
			return (temp);
		}
		else
			ptr = ptr->next;
	}

	return (NULL);
}
