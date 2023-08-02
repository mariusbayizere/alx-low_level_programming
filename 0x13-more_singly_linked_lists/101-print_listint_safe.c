#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * counting_number_of_node - Counts the number of nodes in a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t counting_number_of_node(const listint_t *head)
{
	const listint_t *pointer;
	const listint_t *temp;
	size_t counter = 1;

	if (head == NULL)
	{
		return (0);
	}
	pointer = head->next;
	temp = (head->next)->next;
	while (temp != NULL)
	{
		if (pointer == temp)
		{
			pointer = head;
			while (pointer != temp)
			{
				counter++;
				pointer = pointer->next;
				temp = temp->next;
			}
			pointer = pointer->next;
			while (pointer != temp)
			{
				counter++;
				pointer = pointer->next;
			}
			return (counter);
		}
		pointer = pointer->next;
		temp = (temp->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - Prints a list of integers in a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counter, x = 0;

	counter = counting_number_of_node(head);
	if (counter == 0)
	{
		for (; head != NULL; counter++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (x = 0; x < counter; x++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (counter);
}
