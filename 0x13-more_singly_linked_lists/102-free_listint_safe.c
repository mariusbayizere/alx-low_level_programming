
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to the head of the linked list.
 * Return: The element of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t element = 0;
	listint_t *marius;
	listint_t *city;

	marius = *h;
	while (marius != NULL)
	{
		element++;
		city = marius->next;
		free(marius);
		marius = city;
		if (marius && (size_t)marius <= element)
		{
			*h = NULL;
			return (element);
		}
	}
	*h = NULL;
	return (element);
}
