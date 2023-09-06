#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns pointer to 2D array
 * @width: input
 * @height: input
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **e;
	int y, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	e = malloc(sizeof(int *) * height);
	if (e == NULL)
		return (NULL);
	for (y = 0; y < height; y++)
	{
		e[y] = malloc(sizeof(int) * width);
		if (e[y] == NULL)
		{
			for (; y >= 0; y--)
				free(e[y]);

			free(e);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
			e[y][z] = 0;
	}
	return (e);
}
