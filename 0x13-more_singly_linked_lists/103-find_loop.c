#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the linked list.
 * Return: The address of the node where the loop starts,
 *         or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr = head;
	listint_t *root = head;

	while (root && root->next)
	{
		ptr = ptr->next;
		root = root->next->next;
		if (ptr == root)
			break;
	}
	if (!root || !root->next)
		return (NULL);
	ptr = head;
	while (ptr != root)
	{
		ptr = ptr->next;
		root = root->next;
	}
	return (ptr);
}
