#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - create a 2d integer grid using malloc.
 * Description: Each element of the grid should be initialized to 0.
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */
int **alloc_grid(int width, int height)
{
	int **gridSize;
	int a, b;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	gridSize = malloc(height * sizeof(*gridSize));
	if (gridSize == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(**gridSize));
		if (gridSize[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(gridSize[a]);
			free(gridSize);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			gridSize[c][b] = 0;
	}

	return (gridSize);
}
