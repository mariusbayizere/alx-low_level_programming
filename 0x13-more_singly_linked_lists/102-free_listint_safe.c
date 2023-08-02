#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list starting from a given node.
 * @head: Pointer to the starting node.
 * Return: The number of nodes freed.
 */
size_t free_list(listint_t *head)
{
	size_t x = 0;
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
		x++;
	}
	return (x);
}
/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to the head of the linked list.
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *pointer, *ptr, *temp;

	if (h == NULL || *h == NULL)
		return (0);
	pointer = *h;
	ptr = (*h)->next;
	while (ptr && ptr->next)
	{
		if (pointer == ptr)
		{
			temp = pointer;
			pointer = *h;
			while (pointer != temp)
			{
				pointer = pointer->next;
				temp = temp->next;
			}
			return (free_list(pointer));
		}
		pointer = pointer->next;
		ptr = ptr->next->next;
	}
	return (free_list(*h));
}
