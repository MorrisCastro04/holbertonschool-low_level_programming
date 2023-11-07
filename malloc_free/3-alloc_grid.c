#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - create a 2D array
 *@width: the width of the array
 *@height: the height of the array
 *Return: Return a pointer to the 2D array or NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	char **mall;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	mall = malloc(sizeof(int *)* height);
	if (mall == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		mall[i] = malloc(size of(int)* width);
		if (mall[i] == NULL)
		{
			while (i >= 0)
			{
				free(mall[i]);
				i--
			}
			free(mall);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			mall[i][j] = 0;
		}
	}
	return (mall);
}
