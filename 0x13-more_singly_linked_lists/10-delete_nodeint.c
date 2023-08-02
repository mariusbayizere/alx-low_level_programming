#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: receive head pointer
 * @index: receive index to delete
 * Return:  1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous = *head;
	listint_t *current = *head;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current != NULL)
	{
		if (count == index)
		{
			previous->next = current->next;
			free(current);
			return (1);
		}
		previous = current;
		current = current->next;
		count++;
	}
	return (-1);
}
