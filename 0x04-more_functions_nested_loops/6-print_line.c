#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times the character '_' should be printed.
 *
 * Description: This function prints a line consisting of '_' characters
 *              in the terminal.
 */
void print_line(int n)
{
	int c;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c <= n; c++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}
}
