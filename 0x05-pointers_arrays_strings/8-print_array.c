#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the elements of an integer array.
 * @a: Pointer to the integer array to be printed.
 * @n: The number of elements in the array.
 * Return: None.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
	{
		printf("%d", a[i]);
		/*printf(", ");*/
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");

}
