#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees 2 dimentional grid
 * @grid: ...
 * @height: ...
 * Return: ..
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
