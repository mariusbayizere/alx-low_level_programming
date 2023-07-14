#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates a dynamically allocated array of characters value.
 * @size: The number of elements in the array.
 * @c: The character value used to initialize each element.
 * Return: A pointer to the dynamically allocated array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for(x = 0; x <= size; x++)
	{
		array[x]  = c;
	}
	return (array);
}
