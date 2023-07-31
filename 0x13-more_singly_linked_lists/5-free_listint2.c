#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL.
 * @head: double pointer to the head of the linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *next;

	if (head == NULL)
		return;

	ptr = *head;
	while (ptr != NULL)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}
	*head = NULL;
}
