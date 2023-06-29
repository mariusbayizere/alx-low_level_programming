#include "main.h"

/**
 * reverse_array - Reverse the elements in an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 * Return: None (void).
 */
void reverse_array(int *a, int n)
{
	int j;
	int temp;

	for (j = 0; j < n / 2;  j++)
	{
		temp = a[j];
		a[j] = a[n - 1 - j];
		a[n - 1 - j] = temp;
	}
}
