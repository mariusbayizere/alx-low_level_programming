 #include "main.h"

/**
 * print_square - Prints a square in the terminal.
 * @size: The size of the square.
 *
 * Description: This function prints square in terminal using the # character.
 */
void print_square(int size)
{
	int c;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (c = 0; c < size; c++)
	{
		for (k = 0; k < size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
