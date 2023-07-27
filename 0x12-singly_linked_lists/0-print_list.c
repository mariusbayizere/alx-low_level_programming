#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list.
 *
 * @h: Pointer to the head node of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else

			/*printf("[%u] %s\n", h->len, h->str);*/
			printf("[%lu] %s\n", strlen(h->str), h->str);
		h = h->next;
		s++;
	}
	return (s);
}
