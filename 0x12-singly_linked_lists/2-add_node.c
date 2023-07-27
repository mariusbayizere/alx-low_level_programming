#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - function add node at the beginning of list.
 * @str: The string to be stored in the new node.
 * @head: A double pointer to the head node of the linked list.
 *
 * Return: A pointer to the newly created node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	/*(*temp).str = str;*/
	/*temp->next = NULL;*/
	if (temp == NULL)
	{
		return (NULL);
	}
	else
	{
		temp->str = strdup(str);
		temp->next = *head;
		*head = temp;
	}
	return (temp);
}
