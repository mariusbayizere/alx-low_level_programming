#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sums of the diagonals of a square matrix.
 * @a: Pointer to the first element of the square matrix.
 * @size: Size of the square matrix.
 * Return: None.
 */
void print_diagsums(int *a, int size)
{
	int addx;
	int prox;
	int x;

	addx = 0;
	prox = 0;
	for (x = 0; x < size; x++)
	{
		addx = addx + a[x * size + x];
	}
	for (x = 0; x < size; x++)
	{
		prox = prox + a[x * size + (size - x - 1)];
	}
	printf("%d,%d\n", addx, prox);
}
