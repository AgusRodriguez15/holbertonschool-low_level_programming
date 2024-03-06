#include "main.h"
/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int j = 0;
	int i = 0;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	p = malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}

	}

	for (j = 0; j < width; j++)
		for (i = 0; i < height; i++)
			p[i][j] = 0;

	return (p);
}
