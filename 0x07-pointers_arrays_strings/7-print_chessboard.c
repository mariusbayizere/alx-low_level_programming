#include "main.h"

/**
 * print_chessboard - Print the chessboard.
 * @a: Pointer to the 2-dimensional array representing the chessboard.
 *
 * Return: None.
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
			_putchar(a[x][y]);
		_putchar('\n');
	}
}
