#include "main.h"

/**
 * free_grid - free the grid
 * @grid: grid of memories
 * @hieght: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < hieght; i++)
		free(grid[i]);
	free(grid);
}
