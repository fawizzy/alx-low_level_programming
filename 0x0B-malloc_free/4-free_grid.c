#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function to free a 2d grid
 * @grid: array of grid
 * @height: height of the array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
	
}
