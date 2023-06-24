#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * @n: The number of times the character '\' should be printed.
 *
 * Description: This function prints a diagonal line consisting '\' characters
 *              in terminal.
 */
void print_diagonal(int n)
{
	int pepu = 0;
	int time;

	if (n > 0)
	{
		while (n--)
		{
			for (time = 0; time < pepu; time++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			pepu++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
