#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t j, x = 0;
	const listint_t *marius, *temp;

	marius = head;
	while (marius != NULL)
	{
		x++;
		printf("[%p] %d\n", (void *)marius, marius->n);
		marius = marius->next;
		temp = head;
		for (j = 0; j < x; j++)
		{
			if (marius == temp)
			{
				printf("-> [%p] %d\n", (void *)marius, marius->n);
				exit(98);
			}
			temp = temp->next;
		}
	}
	return (x);
}
