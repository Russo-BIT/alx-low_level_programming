#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width input integer
 * @height: height input integer
 * Return: pointer to 2 dimensional array,
 * NULL if fail
 */

int **alloc_grid(int width, int height)
{
	int **gro;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	gro = malloc(height * sizeof(int *));
	if (gro == NULL)
	{
		free(gro);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gro[i] = malloc(width * sizeof(int));
		if (gro[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gro[i]);
			free(gro);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gro[i][j] = 0;

	return (gro);
}
