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
	if (n > 0)
	{
		while (n--)
			_putchar('_');
	}
	_putchar('\n');
}
