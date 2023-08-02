#include <stdlib.h>
#include "lists.h"

/**
 *free_listint_safe - Safely frees a listint_t linked list.
 *@h: A pointer to a pointer to the head of the listint_t linked list.
 *Return: The number of nodes freed from the linked list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node = 0;
	int current;
	listint_t *ptr;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	while (*h != NULL)
	{
		current = *h - (*h)->next;
		if (current > 0)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			node++;
		}
		else
		{
			free(*h);
			*h = NULL;
			node++;
			break;
		}
	}
	*h = NULL;
	return (node);
}
