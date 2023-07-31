#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: recieve pointer
 * Return: head
 */
int pop_listint(listint_t **head)
{
	 listint_t *temp = *head;
	 int n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		n = temp->n;
		*head = (*head)->next;
		free(temp);
		temp = NULL;
	}
	return (n);
}
