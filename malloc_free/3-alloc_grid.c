#include "main.h"
/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
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

	p = malloc(height * sizeof(int*));
	if (p == NULL)
	{
		return(NULL);
	}
	for (i = 0; i < height; i++)
	{
	p[i] = malloc(width * sizeof(int));
	if (p[i] == NULL)
	{
	return(NULL);
	for (; i >= 0; --i)
	free(p[i]);
	free(p);
	return(NULL);
	}	

}
	for (j = 0; j < width; j++)
{
	 for (i = 0; i < height; i++)
	p[i][j] = 0;
}
	return (p);
}
	
