#include <stdlib.h>

/**
 * free_grid - frees the memory of a two-dimensional grid.
 * @grid: Pointer to the 2-dimensional grid.
 * @height: The number of rows in the grid.
*Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
