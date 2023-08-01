
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to the head of the linked list.
 * Return: The element of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int x;
	listint_t *ptr;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	while (*h != NULL)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}
	*h = NULL;
	return (count);
}
