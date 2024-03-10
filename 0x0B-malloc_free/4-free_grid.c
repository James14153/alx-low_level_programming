#include "main.h"

/**
* free_grid - prpogram frees a 2d array
*@grid: memory block to be freed
*@height: the height of the array
*return: void
*/

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);

	free(grid);
}
