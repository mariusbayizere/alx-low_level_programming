#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a given function on each element of an array.
 * @array: The array.
 * @size: The number of elements in the array.
 * @action: A pointer to the function to be executed on each element.
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (x = 0; x <= size; x++)
	{
		action(array[x]);
	}
}
