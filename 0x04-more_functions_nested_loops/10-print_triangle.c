#include "main.h"

/**
 * print_triangle - Prints a triangle of '#' characters.
 * @size: The size of the triangle.
 *
 * Description: This function prints a triangle of '#' characters in terminal.
 */
void print_triangle(int size)
{
	int c;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (c = 1; c < size; c++)
	{
		for (k = 1; k < size -c; k++)
			_putchar(' ');
		for (k = 1; k <= c; k++)
			_putchar('#');
		_putchar('\n');
	}
}
