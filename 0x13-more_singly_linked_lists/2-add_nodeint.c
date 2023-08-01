#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: double pointer to the head of the linked list.
 * @n: value to be stored in the new node.
 * Return: pointer to the new node, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	ptr->n = n;
	/*(*ptr).next = NULL;*/
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
